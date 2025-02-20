cmake_minimum_required(VERSION 3.10)

project(Chat-Service)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/headers)

set(SOURCES
    source/main.cpp
    source/chat.cpp
    source/user.cpp
    source/client.cpp
    source/server.cpp
)

add_executable(Chat-Service ${SOURCES})

