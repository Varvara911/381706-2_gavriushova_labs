file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${matrix_test} ${srcs} ${hdrs})
target_link_libraries(${matrix_test} ${matrix_lib} gtest)