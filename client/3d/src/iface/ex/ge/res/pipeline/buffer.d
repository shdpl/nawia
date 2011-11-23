module ex.ge.res.pipeline.buffer;

public import ex.ex;

class ExResPipelineBuffer : Ex {
	this() {
		this("");
	}
	
	this(string msg) {
		super("Could not dump pipeline buffer: " ~ msg);
	}
}