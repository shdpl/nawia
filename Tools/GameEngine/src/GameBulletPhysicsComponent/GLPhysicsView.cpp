// ****************************************************************************************
//
// GameEngine of the University of Augsburg
// --------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// This file is part of the GameEngine developed at the 
// Lab for Multimedia Concepts and Applications of the University of Augsburg
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// *************************************************************************************************


// ****************************************************************************************
//
// GameEngine Bullet Component of the University of Augsburg
// ---------------------------------------------------------
// Copyright (C) 2007 Volker Wiendl
// 
// ****************************************************************************************
#include "GLPhysicsView.h"

#include "PhysicsComponent.h"

#include <btBulletDynamicsCommon.h>
//#include <Bullet/BulletCollision/BroadphaseCollision/btMultiSapBroadphase.h>

#include <gl/gl.h>
#include <gl/glu.h>

class GlDrawcallback : public btTriangleCallback
{

public:

	bool	m_wireframe;

	GlDrawcallback() : m_wireframe(false) {}

	virtual void processTriangle(btVector3* triangle,int partId, int triangleIndex)
	{

		(void)triangleIndex;
		(void)partId;

		if (m_wireframe)
		{
			glBegin(GL_LINES);
			glColor3f(1, 0, 0);
			glVertex3d(triangle[0].getX(), triangle[0].getY(), triangle[0].getZ());
			glVertex3d(triangle[1].getX(), triangle[1].getY(), triangle[1].getZ());
			glColor3f(0, 1, 0);
			glVertex3d(triangle[2].getX(), triangle[2].getY(), triangle[2].getZ());
			glVertex3d(triangle[1].getX(), triangle[1].getY(), triangle[1].getZ());
			glColor3f(0, 0, 1);
			glVertex3d(triangle[2].getX(), triangle[2].getY(), triangle[2].getZ());
			glVertex3d(triangle[0].getX(), triangle[0].getY(), triangle[0].getZ());
			glEnd();
		} else
		{
			glBegin(GL_TRIANGLES);
			glColor3f(1, 0, 0);
			glVertex3d(triangle[0].getX(), triangle[0].getY(), triangle[0].getZ());
			glColor3f(0, 1, 0);
			glVertex3d(triangle[1].getX(), triangle[1].getY(), triangle[1].getZ());
			glColor3f(0, 0, 1);
			glVertex3d(triangle[2].getX(), triangle[2].getY(), triangle[2].getZ());
			glEnd();
		}
	}
};

class TriangleGlDrawcallback : public btInternalTriangleIndexCallback
{
public:
	virtual void internalProcessTriangleIndex(btVector3* triangle,int partId,int  triangleIndex)
	{
		(void)triangleIndex;
		(void)partId;

		glBegin(GL_TRIANGLES);//LINES);
		glColor3f(1, 0, 0);
		glVertex3d(triangle[0].getX(), triangle[0].getY(), triangle[0].getZ());
		glVertex3d(triangle[1].getX(), triangle[1].getY(), triangle[1].getZ());
		glColor3f(0, 1, 0);
		glVertex3d(triangle[2].getX(), triangle[2].getY(), triangle[2].getZ());
		glVertex3d(triangle[1].getX(), triangle[1].getY(), triangle[1].getZ());
		glColor3f(0, 0, 1);
		glVertex3d(triangle[2].getX(), triangle[2].getY(), triangle[2].getZ());
		glVertex3d(triangle[0].getX(), triangle[0].getY(), triangle[0].getZ());
		glEnd();
	}
};

namespace BulletPhysicsComponent
{
	void drawCylinder(float radius,float halfHeight, int upAxis)
	{


		glPushMatrix();
		switch (upAxis)
		{
		case 0:
			glRotatef(-90.0, 0.0, 1.0, 0.0);
			glTranslatef(0.0, 0.0, -halfHeight);
			break;
		case 1:
			glRotatef(-90.0, 1.0, 0.0, 0.0);
			glTranslatef(0.0, 0.0, -halfHeight);
			break;
		case 2:

			glTranslatef(0.0, 0.0, -halfHeight);
			break;
		default:
			{
				assert(0);
			}

		}

		GLUquadricObj *quadObj = gluNewQuadric();

		//The gluCylinder subroutine draws a cylinder that is oriented along the z axis. 
		//The base of the cylinder is placed at z = 0; the top of the cylinder is placed at z=height. 
		//Like a sphere, the cylinder is subdivided around the z axis into slices and along the z axis into stacks.

		gluQuadricDrawStyle(quadObj, (GLenum)GLU_FILL);
		gluQuadricNormals(quadObj, (GLenum)GLU_SMOOTH);

		gluDisk(quadObj,0,radius,15, 10);

		gluCylinder(quadObj, radius, radius, 2.f*halfHeight, 15, 10);
		glTranslatef(0.0, 0.0, 2.0f*halfHeight);
		glRotatef(-180.0f, 0.0f, 1.0f, 0.0f);
		gluDisk(quadObj,0,radius,15, 10);

		glPopMatrix();
		gluDeleteQuadric(quadObj);
	}


	void drawOpenGL(const btScalar* m, const btCollisionShape* shape, const btVector3& color)
	{
		glPushMatrix(); 
		glMultMatrixf(m);
		if (shape->getShapeType() == UNIFORM_SCALING_SHAPE_PROXYTYPE)
		{
			const btUniformScalingShape* scalingShape = static_cast<const btUniformScalingShape*>(shape);
			const btConvexShape* convexShape = scalingShape->getChildShape();
			float scalingFactor = (float)scalingShape->getUniformScalingFactor();
			{
				btScalar tmpScaling[4][4]=
				{	scalingFactor,0,0,0,
				0,scalingFactor,0,0,
				0,0,scalingFactor,0,
				0,0,0,1
				};
				drawOpenGL( (btScalar*)tmpScaling,convexShape,color);
			}
			glPopMatrix();
			return;
		}
		if (shape->getShapeType() == COMPOUND_SHAPE_PROXYTYPE)
		{
			const btCompoundShape* compoundShape = static_cast<const btCompoundShape*>(shape);
			for (int i=compoundShape->getNumChildShapes()-1;i>=0;--i)
			{
				btTransform childTrans = compoundShape->getChildTransform(i);
				const btCollisionShape* colShape = compoundShape->getChildShape(i);
				btScalar childMat[16];
				childTrans.getOpenGLMatrix(childMat);
				drawOpenGL(childMat,colShape,color);
			}
		} 
		else
		{
			glDisable(GL_CULL_FACE);
			glEnable(GL_COLOR_MATERIAL);
			glColor4f(color.x(),color.y(), color.z(), 0.3f);
			glEnable(GL_BLEND);
			glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );
			bool useWireframeFallback = true;
				switch (shape->getShapeType())
				{
				case BOX_SHAPE_PROXYTYPE:
					{
						glPushMatrix();									
						const btBoxShape* boxShape = static_cast<const btBoxShape*>(shape);
						btVector3 halfExtent = boxShape->getHalfExtentsWithMargin();
						glScalef(halfExtent[0], halfExtent[1], halfExtent[2]);
						int corners[24] = {
							-1, -1, -1,							
							 1, -1, -1,
							 1,  1, -1,
							-1,  1, -1,
							-1, -1, 1,
							 1, -1, 1,
							 1,  1, 1,
							-1,  1, 1
						};

						unsigned int indices[24] = {
							3, 2, 1, 0,
							4, 5, 6, 7,
							2, 6, 5, 1,
							7, 3, 0, 4,
							7, 6, 2, 3,
							0, 1, 5, 4
						};
						glBegin( GL_QUADS );

						for( unsigned int i = 0; i < 24; ++i )
						{
							glVertex3iv( &corners[indices[i]*3] );
						}

						glEnd();
						glPopMatrix();
						useWireframeFallback = false;
						break;
					}
				case SPHERE_SHAPE_PROXYTYPE:
				{
					const btSphereShape* sphereShape = static_cast<const btSphereShape*>(shape);
					float radius = sphereShape->getMargin();//radius doesn't include the margin, so draw with margin
					GLUquadricObj* quadObj = gluNewQuadric();
					gluQuadricDrawStyle(quadObj, GLU_FILL);
					gluQuadricNormals(quadObj, GLU_SMOOTH);					
					gluSphere(quadObj, radius, 10, 10);
					gluDeleteQuadric(quadObj);
					useWireframeFallback = false;
					break;
				}
				case TRIANGLE_SHAPE_PROXYTYPE:
				case TETRAHEDRAL_SHAPE_PROXYTYPE:
					{
						//todo:	
						//useWireframeFallback = false;
						break;
					}
				case CONVEX_HULL_SHAPE_PROXYTYPE:
					break;
			//	case CAPSULE_SHAPE_PROXYTYPE:
			//		{
			//			const btCapsuleShape* capsuleShape = static_cast<const btCapsuleShape*>(shape);
			//			float radius = capsuleShape->getRadius();
			//			float halfHeight = capsuleShape->getHalfHeight();
			//			int upAxis = 1;

			//			drawCylinder(radius,halfHeight,upAxis);


			//			glPushMatrix();
			//			glTranslatef(0.0, -halfHeight,0.0);
			//			glutSolidSphere(radius,10,10);
			//			glTranslatef(0.0, 2*halfHeight,0.0);
			//			glutSolidSphere(radius,10,10);
			//			glPopMatrix();
			//			useWireframeFallback = false;
			//			break;
			//		}
			//	case MULTI_SPHERE_SHAPE_PROXYTYPE:
			//		{
			//			break;
			//		}
			//	case CONE_SHAPE_PROXYTYPE:
			//		{
			//			const btConeShape* coneShape = static_cast<const btConeShape*>(shape);
			//			float radius = coneShape->getRadius();//+coneShape->getMargin();
			//			float height = coneShape->getHeight();//+coneShape->getMargin();
			//			//glRotatef(-90.0, 1.0, 0.0, 0.0);
			//			glTranslatef(0.0, 0.0, -0.5*height);
			//			glutSolidCone(radius,height,10,10);
			//			useWireframeFallback = false;
			//			break;

			//		}
			//	case CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE:
			//		{
			//			useWireframeFallback = false;
			//			break;
			//		}

				case CONVEX_SHAPE_PROXYTYPE:
					break;
				case CYLINDER_SHAPE_PROXYTYPE:
				{
					const btCylinderShape* cylinder = static_cast<const btCylinderShape*>(shape);
					int upAxis = cylinder->getUpAxis();
					
					
					float radius = cylinder->getRadius();
					float halfHeight = cylinder->getHalfExtentsWithMargin()[upAxis];

					drawCylinder(radius,halfHeight,upAxis);
					useWireframeFallback = false;
					break;
				}
				default:
					{
					}

				}

			//}

			if (useWireframeFallback)
			{
				/// for polyhedral shapes
				if (shape->isPolyhedral())
				{
					btPolyhedralConvexShape* polyshape = (btPolyhedralConvexShape*) shape;

					glBegin(GL_LINES);
					int i;
					for (i=0;i<polyshape->getNumEdges();i++)
					{
						btVector3 a,b;
						polyshape->getEdge(i,a,b);

						glVertex3f(a.getX(),a.getY(),a.getZ());
						glVertex3f(b.getX(),b.getY(),b.getZ());


					}
					glEnd();
				}
			}
			if (shape->isConcave())
			{
				btConcaveShape* concaveMesh = (btConcaveShape*) shape;
				//todo pass camera, for some culling
				btVector3 aabbMax(btScalar(1e30),btScalar(1e30),btScalar(1e30));
				btVector3 aabbMin(-btScalar(1e30),-btScalar(1e30),-btScalar(1e30));
				GlDrawcallback drawCallback;
				drawCallback.m_wireframe = false;
				concaveMesh->processAllTriangles(&drawCallback,aabbMin,aabbMax);
			}

			if (shape->getShapeType() == CONVEX_TRIANGLEMESH_SHAPE_PROXYTYPE)
			{
				btConvexTriangleMeshShape* convexMesh = (btConvexTriangleMeshShape*) shape;
				//todo: pass camera for some culling			
				btVector3 aabbMax(btScalar(1e30),btScalar(1e30),btScalar(1e30));
				btVector3 aabbMin(-btScalar(1e30),-btScalar(1e30),-btScalar(1e30));
				TriangleGlDrawcallback drawCallback;
				convexMesh->getMeshInterface()->InternalProcessAllTriangles(&drawCallback,aabbMin,aabbMax);
			}
			glDisable(GL_BLEND);
			glEnable(GL_CULL_FACE);
		}
		glPopMatrix();
	}

	void drawCollisionObjects(btDynamicsWorld* world)
	{		
		glPushAttrib(GL_COLOR_BUFFER_BIT | GL_CURRENT_BIT | GL_DEPTH_BUFFER_BIT | GL_ENABLE_BIT | GL_HINT_BIT | GL_LIGHTING_BIT);
		glPolygonMode( GL_FRONT_AND_BACK, GL_FILL);
		btVector3 wireColor(1,0,0);
		btScalar m[16];
		// draw bounding meshes
		int numObjects = world->getNumCollisionObjects();
		for (int i=0;i<numObjects;++i)
		{
			btCollisionObject* colObj = world->getCollisionObjectArray()[i];
			//if (Horde3D::getNodeActiviation(((PhysicsNode*)((btCollisionObject*) colObj)->getUserPointer())->m_nodeId))
			{
				btRigidBody* body = btRigidBody::upcast(colObj);
				if (body && body->getMotionState())
				{
					btDefaultMotionState* motionState = (btDefaultMotionState*)body->getMotionState();
					motionState->m_graphicsWorldTrans.getOpenGLMatrix(m);
				} 
				else
					colObj->getWorldTransform().getOpenGLMatrix(m);

				btVector3 wireColor(0.f,0.0f,0.5f); //wants deactivation
				///color differently for active, sleeping, wantsdeactivation states
				if (colObj->getActivationState() == 1) //active
				{
					wireColor += btVector3 (1.f,0.f,0.f);
				}
				if (colObj->getActivationState() == 2) //ISLAND_SLEEPING
				{
					wireColor += btVector3 (0.f,1.f, 0.f);
				}
				drawOpenGL(m, colObj->getCollisionShape(), wireColor);
			}
		}
		glPopAttrib(); // Restore old OpenGL States
	}
	
}