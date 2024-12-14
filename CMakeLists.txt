#simple cmake for ft_minecraft

#name of the project
set(name ft_vox)
project(${name})

#use cpp 17
set(CMAKE_CXX_STANDARD 17)

#add the subdirectory for glfw
add_subdirectory(glfw)

#get the sources files
file(GLOB_RECURSE c_files "${CMAKE_CURRENT_SOURCE_DIR}/srcs/*.c")
file(GLOB_RECURSE cpp_files "${CMAKE_CURRENT_SOURCE_DIR}/srcs/*.cpp")

#the executable
add_executable(${name} ${c_files} ${cpp_files})

#the main include directory
target_include_directories(${name} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/includes/")

#link with glfw
target_include_directories(${name} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/glfw/include/")
target_link_directories(${name} PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/glfw/src/")
target_link_libraries(${name} PRIVATE "glfw3")

#add mldb
add_subdirectory(openldap\libraries\liblmdb)
#target_link_directories(${name} PRIVATE "")