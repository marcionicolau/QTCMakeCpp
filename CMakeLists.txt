cmake_minimum_required(VERSION 2.8.11)
project(QTCMakeCpp)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

#set (CMAKE_PREFIX_PATH "C:/Qt/5.6/mingw49_32/lib/cmake/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)

# Find the QtWidgets library
find_package(Qt5Widgets)

add_executable(QTCMakeCpp WIN32 ${SOURCE_FILES})
# Use the Widgets module from Qt 5.
target_link_libraries(QTCMakeCpp Qt5::Widgets)