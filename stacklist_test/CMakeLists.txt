file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${stacklist_test} ${srcs} ${hdrs})
target_link_libraries(${stacklist_test} ${stacklist_lib} gtest)