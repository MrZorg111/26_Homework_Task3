cmake_minimum_required(VERSION 3.17)

add_executable("26_Homework_Task3" main.cpp ${MY_INCLUDE_DIR}/Monitor.h ${MY_INCLUDE_DIR}/UserCommand.h ${MY_INCLUDE_DIR}/Window.h)
target_include_directories("26_Homework_Task3" PUBLIC ${MY_INCLUDE_DIR})