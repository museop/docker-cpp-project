set( BINARY "app" )
set( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin )

file( GLOB APP_SOURCES
    "src/*.cc"
)

add_executable( ${BINARY}
    ${APP_SOURCES}
    ${COMMON_SOURCES}
)

target_include_directories( ${BINARY} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)