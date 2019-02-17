file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${multystack_test} ${multystack_lib} gtest)