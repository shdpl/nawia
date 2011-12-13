module impl.nawia.ee.component.spatial;

protected import
	type.cords.world;
	
private import
	ee.entity;

mixin template InjectSpatial {
//	mixin InjectMsgListener!MsgEntityResize _prvdrResize;
//	mixin InjectMsgProvider!MsgEntityResize _lstnrResize;
//	
//	mixin InjectMsgListener!MsgEntityMove _prvdrMove;
//	mixin InjectMsgProvider!MsgEntityMove _lstnrMove;
//	
//	mixin InjectMsgListener!MsgEntityRotate _prvdrRotate;
//	mixin InjectMsgProvider!MsgEntityRotate _lstnrRotate;
	
	@property {
		void size(real3 value) {
			
		}
		real3 size() {
			
		}
	}
	
	@property {
		void pos(CordsWorld value) {
			
		}
		
		CordsWorld pos() {
			
		}
	}
	
	@property {
		void orientation(real3 value) {
			
		}
		
		real3 orientation() {
			
		}
	}
	
	@property {
		void transform(real3[3] value) {
			
		}
		real3[3] transform() {
			
		}
	}
	
}