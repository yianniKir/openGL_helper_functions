APP_NAME = demo
BUILD_DIR = /Users/yianniKir/Desktop/openGL_helper_functions
APP_DEFINES:=
APP_INCLUDES:= -I./src/vendors/GLFW -framework Cocoa -framework OpenGL -framework IOKit 
APP_LINKERS:= -L./src/vendors/GLFW/lib -lglfw3
C_FILES := ./src/demo.cpp ./src/glad.c


build:
	g++ $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(APP_INCLUDES) $(APP_LINKERS)