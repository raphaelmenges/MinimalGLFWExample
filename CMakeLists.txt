cmake_minimum_required(VERSION 2.8)

# Setup project
project(MinimalGLFWExample)
set(APPNAME OpenGLApplication)

# Include root directory
include_directories(.)

# Collect files
file(GLOB SOURCES
    "*.cpp"
    "*.c")

file(GLOB HEADERS
    "*.h")

# Collect all code
set(ALL_CODE
	${SOURCES}
	${HEADERS})

# GLFW 3
add_subdirectory(glfw)

# OpenGL
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})

# Creation of executeable
add_executable(${APPNAME} ${ALL_CODE})

# Linking
target_link_libraries(${APPNAME} ${OPENGL_LIBRARIES})
target_link_libraries(${APPNAME} glfw)
