file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${list_test} ${srcs} ${hdrs})
target_link_libraries(${list_test} ${list_lib} gtest)