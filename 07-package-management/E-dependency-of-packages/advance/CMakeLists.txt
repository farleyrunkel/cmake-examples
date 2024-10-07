# Set the project name
project (advance)

find_package(Basic REQUIRED)
if(Basic_FOUND)
    message(STATUS "Basic_INCLUDE_DIR:" ${Basic_INCLUDE_DIR})
    message(STATUS "Basic_LIBRARY:" ${Basic_LIBRARY})
endif()

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
    INTERFACE
    ${Basic_LIBRARY}
)
