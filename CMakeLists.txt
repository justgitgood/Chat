cmake_minimum_required(Version 3.10)


project(Chat-Service)

include_directories(${PROJECT_SOURCE_DIR}/headers)

set(SOURCES
source/main.cpp
source/service.cpp
source/chat.cpp
source/user.cpp
)

add_executable(Chat-Service${Sources})

