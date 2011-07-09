module api.glfw.glfw;

import glfw;

public import api.glfw.window.window,
	api.glfw.keyboard,
	api.glfw.mouse;

static this() { 
	if ( false == glfwInit()) {
		// TODO:
	}
}

static ~this() {
	glfwTerminate();
}