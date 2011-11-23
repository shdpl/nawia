module impl.glfw.glfw;

public import glfw;

static this() {
	glfwInit();
}

static ~this() {
	glfwTerminate();
}