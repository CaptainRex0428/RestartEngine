cmake_minimum_required(VERSION 3.26)
project(RestartEngine)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} bin/SDL2)

find_package(sdl2 REQUIRED)

set(SOURCE_FILE src/main.cpp src/Game.cpp src/Game.h)
add_executable(RestartEngine ${SOURCE_FILE})

target_include_directories(RestartEngine PUBLIC ${SDL2_INCLUDE_DIRS})
target_link_libraries(RestartEngine ${SDL2_LIBRARIES})

target_link_libraries(RestartEngine mingw32 SDL2main SDL2)