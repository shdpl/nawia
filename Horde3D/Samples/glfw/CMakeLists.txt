set(GLFW_SOURCES
	lib/enable.c
	lib/fullscreen.c
	lib/glext.c
	lib/image.c
	lib/init.c
	lib/input.c
	lib/joystick.c
	lib/stream.c
	lib/tga.c
	lib/thread.c
	lib/time.c
	lib/window.c
	)


if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	include_directories(./lib ./lib/win32)
	set(GLFW_SOURCES
		${GLFW_SOURCES}
		lib/win32/win32_dllmain.c
		lib/win32/win32_enable.c
		lib/win32/win32_fullscreen.c
		lib/win32/win32_glext.c
		lib/win32/win32_init.c
		lib/win32/win32_joystick.c
		lib/win32/win32_thread.c
		lib/win32/win32_time.c
		lib/win32/win32_window.c
		)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")


if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	include_directories(./lib ./lib/x11)
	set(GLFW_SOURCES
		${GLFW_SOURCES}
		lib/x11/x11_enable.c
		lib/x11/x11_fullscreen.c
		lib/x11/x11_glext.c
		lib/x11/x11_init.c
		lib/x11/x11_joystick.c
		lib/x11/x11_keysym2unicode.c
		lib/x11/x11_thread.c
		lib/x11/x11_time.c
		lib/x11/x11_window.c
		)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")



if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	FIND_LIBRARY(COCOA_LIBRARY Cocoa)
	FIND_LIBRARY(APPLICATION_SERVICES_LIBRARY ApplicationServices)
	FIND_LIBRARY(AGL_LIBRARY AGL)
	IF(COCOA_LIBRARY)
		include_directories(./lib ./lib/cocoa)
		set(GLFW_SOURCES
			${GLFW_SOURCES}
			lib/cocoa/cocoa_enable.m
			lib/cocoa/cocoa_fullscreen.m
			lib/cocoa/cocoa_glext.m
			lib/cocoa/cocoa_init.m
			lib/cocoa/cocoa_joystick.m
			lib/cocoa/cocoa_thread.c
			lib/cocoa/cocoa_time.m
			lib/cocoa/cocoa_window.m
			)
	ELSE(COCOA_LIBRARY)
		include_directories(./lib ./lib/carbon)
		set(GLFW_SOURCES
			${GLFW_SOURCES}
			lib/carbon/carbon_enable.c
			lib/carbon/carbon_fullscreen.c
			lib/carbon/carbon_glext.c
			lib/carbon/carbon_init.c
			lib/carbon/carbon_joystick.c
			lib/carbon/carbon_thread.c
			lib/carbon/carbon_time.c
			lib/carbon/carbon_window.c
			)
	ENDIF(COCOA_LIBRARY)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")


add_library(glfw STATIC
	${GLFW_SOURCES}
	)

