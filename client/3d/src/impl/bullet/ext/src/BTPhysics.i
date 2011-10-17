%module BTPhysics

//These classes/functions SWIG is having issues wrapping. Ingore for now.
//%ignore btStorageResult;
//%ignore CProfileIterator;
//%ignore btCollisionAlgorithmConstructionInfo::getDispatcherId();
//%ignore btMultiSapBroadphase::quicksort(btBroadphasePairArray& a, int lo, int hi);
//%ignore btRaycastVehicle::setRaycastWheelInfo(int wheelIndex , bool isInContact, const btVector3& hitPoint, const btVector3& hitNormal,btScalar depth);

%{
	#include <btBulletDynamicsCommon.h>
%}

%include "LinearMath/btScalar.h"
%include "LinearMath/btVector3.h"
%include "LinearMath/btQuaternion.h"
%include "LinearMath/btTransform.h"
%include "LinearMath/btMotionState.h"
%include "LinearMath/btDefaultMotionState.h"
//%include "LinearMath/btQuickprof.h"
%include "LinearMath/btIDebugDraw.h"
%include "LinearMath/btSerializer.h"



%include "btBulletCollisionCommon.h"
%include "BulletCollision/CollisionDispatch/btCollisionWorld.h"
%include "BulletCollision/CollisionDispatch/btCollisionObject.h"

%include "BulletCollision/CollisionShapes/btCollisionShape.h"
%include "BulletCollision/CollisionShapes/btConvexShape.h"
%include "BulletCollision/CollisionShapes/btConvexInternalShape.h"
%include "BulletCollision/CollisionShapes/btPolyhedralConvexShape.h"
%include "BulletCollision/CollisionShapes/btBoxShape.h"
%include "BulletCollision/CollisionShapes/btSphereShape.h"
%include "BulletCollision/CollisionShapes/btCapsuleShape.h"
%include "BulletCollision/CollisionShapes/btCylinderShape.h"
%include "BulletCollision/CollisionShapes/btConeShape.h"
%include "BulletCollision/CollisionShapes/btStaticPlaneShape.h"
%include "BulletCollision/CollisionShapes/btConvexHullShape.h"
%include "BulletCollision/CollisionShapes/btTriangleMesh.h"
%include "BulletCollision/CollisionShapes/btConvexTriangleMeshShape.h"
%include "BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h"
%include "BulletCollision/CollisionShapes/btScaledBvhTriangleMeshShape.h"
%include "BulletCollision/CollisionShapes/btTriangleMeshShape.h"
%include "BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h"
%include "BulletCollision/CollisionShapes/btCompoundShape.h"
%include "BulletCollision/CollisionShapes/btTetrahedronShape.h"
%include "BulletCollision/CollisionShapes/btEmptyShape.h"
%include "BulletCollision/CollisionShapes/btMultiSphereShape.h"
%include "BulletCollision/CollisionShapes/btUniformScalingShape.h"

%include "BulletCollision/CollisionDispatch/btCollisionConfiguration.h"
%include "BulletCollision/CollisionDispatch/btSphereSphereCollisionAlgorithm.h"
//btSphereBoxCollisionAlgorithm is broken, use gjk for now
//%include "BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.h"
%include "BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h"

%include "BulletCollision/BroadphaseCollision/btDispatcher.h"
%include "BulletCollision/CollisionDispatch/btCollisionDispatcher.h"

%include "BulletCollision/BroadphaseCollision/btBroadphaseInterface.h"
%include "BulletCollision/BroadphaseCollision/btSimpleBroadphase.h"
%include "BulletCollision/BroadphaseCollision/btAxisSweep3.h"
//%include "BulletCollision/BroadphaseCollision/btMultiSapBroadphase.h"
%include "BulletCollision/BroadphaseCollision/btDbvtBroadphase.h"


%include "BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h"

%include "BulletDynamics/Dynamics/btSimpleDynamicsWorld.h"
%include "BulletDynamics/Dynamics/btRigidBody.h"

%include "BulletDynamics/ConstraintSolver/btConstraintSolver.h"
%include "BulletDynamics/ConstraintSolver/btTypedConstraint.h"
%include "BulletDynamics/ConstraintSolver/btPoint2PointConstraint.h"
%include "BulletDynamics/ConstraintSolver/btHingeConstraint.h"
%include "BulletDynamics/ConstraintSolver/btConeTwistConstraint.h"
%include "BulletDynamics/ConstraintSolver/btGeneric6DofConstraint.h"
%include "BulletDynamics/ConstraintSolver/btSliderConstraint.h"
%include "BulletDynamics/ConstraintSolver/btGeneric6DofSpringConstraint.h"
%include "BulletDynamics/ConstraintSolver/btUniversalConstraint.h"
%include "BulletDynamics/ConstraintSolver/btHinge2Constraint.h"

%include "BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h"

//extend the btCollisionWorld with a function to get an array item at the index.
%extend btCollisionWorld {
	btCollisionObject* getCollisionObject(int index)
	{
		return $self->getCollisionObjectArray()[index];
	}
}
