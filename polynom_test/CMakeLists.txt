file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${polynom_test} ${srcs} ${hdrs})
target_link_libraries(${polynom_test} ${polynom_lib} gtest)