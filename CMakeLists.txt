cmake_minimum_required(VERSION 2.8) #Проверка версии CMake.

set(PROJECT_NAME all_labs) #Создаем обычную локальную переменную с именем проекта
project(${PROJECT_NAME}) # Название проекта 

#set(stack stack)
#set(stack_lib stack_lib)
#set(stack_test stack_test)

#set(queue queue)
#set(queue_lib queue_lib)
#set(queue_test queue_test)

#set(stack_and_queue stack_and_queue)
#set(stack_and_queue_lib stack_and_queue_lib)
#set(stack_and_queue_test stack_and_queue_test)


set(list list)
set(list_lib list_lib)
set(list_test list_test)

set(matrix matrix)
set(matrix_lib matrix_lib)
set(matrix_test matrix_test) 

set(stacklist stacklist)
set(stacklist_lib stacklist_lib)
set(stacklist_test stacklist_test)

set(set set)
set(set_lib set_lib)
set(set_test set_test)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) #Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраниется в специальном файле доступном из всех файлов,
if(NOT CMAKE_BUILD_TYPE) # проверка имеющихся у компилятора вариантов сборки
  set(CMAKE_BUILD_TYPE Release) #Если нет то устанавливаем Release
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/gtest)
add_subdirectory(gtest)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/stack_and_queue_lib)
add_subdirectory(stack_and_queue)
add_subdirectory(stack_and_queue_lib)
add_subdirectory(stack_and_queue_test)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/stack_lib)
#add_subdirectory(stack)
#add_subdirectory(stack_lib)
#add_subdirectory(stack_test)

#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/queue_lib)
#add_subdirectory(queue)
#add_subdirectory(queue_lib)
#add_subdirectory(queue_test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/list_lib)
add_subdirectory(list)
add_subdirectory(list_lib)
add_subdirectory(list_test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/matrix_lib)
add_subdirectory(matrix)
add_subdirectory(matrix_lib)
add_subdirectory(matrix_test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/stacklist_lib)
add_subdirectory(stacklist)
add_subdirectory(stacklist_lib)
add_subdirectory(stacklist_test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/set_lib)
add_subdirectory(set)
add_subdirectory(set_lib)
add_subdirectory(set_test)


# REPORT
message( STATUS "")
message( STATUS "General configuration for ${PROJECT_NAME}")
message( STATUS "======================================")
message( STATUS "")
message( STATUS "   Configuration: ${CMAKE_BUILD_TYPE}")
message( STATUS "")
