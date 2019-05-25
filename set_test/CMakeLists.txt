file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${set_test} ${srcs} ${hdrs})
target_link_libraries(${set_test} ${set_lib} gtest)