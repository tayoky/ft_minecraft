cmake_minimum_required(VERSION 3.10)

project(ft_minecraft)

set(exe_name ft_minecraft)

# Get all.c files 
file(GLOB_RECURSE c_files ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)

#get all .cpp files
file(GLOB_RECURSE cpp_files ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_subdirectory("lib/glfw")
add_subdirectory("lib/glm")

add_executable(${exe_name} ${c_files} ${cpp_files})
set_property(TARGET ${exe_name} PROPERTY CXX_STANDARD 17)
target_include_directories(${exe_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw/include)
target_include_directories(${exe_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(${exe_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/glm/)
target_link_directories(${exe_name} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/lib/glfw)
add_compile_definitions(GLM_ENABLE_EXPERIMENTAL NOMINMAX)

target_link_libraries(${exe_name} PRIVATE glfw)

#put texture and shader into build folder
install(DIRECTORY textures/ DESTINATION textures)
install(DIRECTORY shaders/ DESTINATION shaders)