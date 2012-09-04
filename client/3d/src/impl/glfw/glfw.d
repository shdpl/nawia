module impl.glfw.glfw;

public import derelict.glfw2.glfw2;

static this() {
	DerelictGLFW2.load();
	glfwInit();
}

static ~this() {
	glfwTerminate();
}