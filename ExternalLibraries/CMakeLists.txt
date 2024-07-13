
add_subdirectory(glfw)

project(Imgui)
set(${PROJECT_NAME}_SOURCES
        imgui/imgui.cpp
        imgui/imgui_draw.cpp
        imgui/imgui_tables.cpp
        imgui/imgui_widgets.cpp
        imgui/imgui_demo.cpp

        imgui/backends/imgui_impl_glfw.cpp
        imgui/backends/imgui_impl_opengl3.cpp
)

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}_SOURCES})
include_directories(${PROJECT_NAME} glfw/include)
target_include_directories(${PROJECT_NAME} PUBLIC imgui/ imgui/backends/)
