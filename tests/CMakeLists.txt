set( BINARY "app_test" )
set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )


set( TEST_SOURCES
    "test_main.cc"
    "test_module1.cc"
    "test_module2.cc"
)

add_executable( ${BINARY}
    ${TEST_SOURCES}
    ${COMMON_SOURCES}
)

target_link_libraries( ${BINARY}
    gtest
)