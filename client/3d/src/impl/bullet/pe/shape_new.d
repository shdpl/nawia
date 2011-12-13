module impl.bullet.shape;

public import
	type.geometric.shape;

struct RigidBody(T) if(isShape(T)) {
	void init() {
		static if (isMoveable()) {	// traits
			static if (isHeightfield2D) {
				
			} else if (isSharingScaledInstances) {
				static if (isSharedScaled()) {
					
				} else if (isShared()) {
					
				}
			}
			static assert(false, "Not recognized static object");
		}
		static if(isShape2D(T)) {
			
		} else if(isShape3D(T)) {
			
		} else {
			static assert(false, "Shape has to be 2D or 3D");
		}
	}
}