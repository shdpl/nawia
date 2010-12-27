module api.glfw.glfw;

import glfw;

public import api.glfw.window,
	api.glfw.keyboard,
	api.glfw.mouse;

static this() { 
	if (GL_FALSE == glfwInit()) {
		// TODO:
	}
}

static ~this() {
	glfwTerminate();
}