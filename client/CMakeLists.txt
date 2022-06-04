cmake_minimum_required(VERSION 3.2)

project(openapi)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
else ()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wno-unused-variable")
endif ()

find_package(Qt${QT_MAJOR_VERSION}Core REQUIRED)
find_package(Qt${QT_MAJOR_VERSION}Network REQUIRED)
find_package(Qt${QT_MAJOR_VERSION}Gui REQUIRED)

find_package(Qt${QT_MAJOR_VERSION}Gui REQUIRED)

add_library(${PROJECT_NAME}
    OAIError.cpp
    OAIGameInfo.cpp
    OAIGameMove.cpp
    OAIGameState.cpp
    OAIGameStatistics.cpp
    OAIOccupiedPositions.cpp
    OAIPlayer.cpp
    OAIRoomInfo.cpp
    OAISessionCreationRequest.cpp
    OAISessionInfo.cpp
    OAIUser.cpp
    OAIUserGameStatistics.cpp
    OAIUserStatistics.cpp
    OAIValidationResult.cpp
    OAIDefaultApi.cpp
    OAIHelpers.cpp
    OAIHttpRequest.cpp
    OAIHttpFileElement.cpp
    OAIOauth.cpp
)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_MAJOR_VERSION}::Core Qt${QT_MAJOR_VERSION}::Network Qt${QT_MAJOR_VERSION}::Gui
 Qt${QT_MAJOR_VERSION}::Gui)
if(NOT APPLE)
  find_package(OpenSSL REQUIRED)
  target_link_libraries(${PROJECT_NAME} PRIVATE ssl crypto)
endif()

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_EXTENSIONS OFF)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
