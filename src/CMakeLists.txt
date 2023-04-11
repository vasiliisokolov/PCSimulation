cmake_minimum_required (VERSION 3.8)



add_executable (PCSimulation "PCSimulation.cpp" "${MY_INCLUDE_DIR}/PCSimulation.h")
target_include_directories(PCSimulation PUBLIC ${MY_INCLUDE_DIR})

