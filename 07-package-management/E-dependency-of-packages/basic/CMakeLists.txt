# Set the project name
project (basic)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/basic.cpp)

set(Basic_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${Basic_INCLUDE_DIR}
)
