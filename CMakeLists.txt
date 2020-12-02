cmake_minimum_required( VERSION 3.8.0 )
project( a_cpp_project )

find_package(GTest REQUIRED)

set( CMAKE_CXX_STANDARD 17 )

# common include directories
include_directories(
    "module1/include"
    "module2/include"
)

# common sources
file(GLOB COMMON_SOURCES
    "module1/src/*.cc"
    "module2/src/*.c"
)

# common library
# link_libraries( m stdc++fs )

# sub directories
add_subdirectory( application )
add_subdirectory( tests )
