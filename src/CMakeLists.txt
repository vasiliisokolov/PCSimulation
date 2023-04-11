cmake_minimum_required (VERSION 3.8)



add_executable (PCSimulation "PCSimulation.cpp" "${MY_INCLUDE_DIR}/PCSimulation.h" "${MY_INCLUDE_DIR}/cpu.h" "${MY_INCLUDE_DIR}/ram.h" "${MY_INCLUDE_DIR}/disk.h" "${MY_INCLUDE_DIR}/gpu.h" "${MY_INCLUDE_DIR}/kbd.h" "cpu.cpp" "ram.cpp" "disk.cpp" "gpu.cpp" "kbd.cpp")
target_include_directories(PCSimulation PUBLIC ${MY_INCLUDE_DIR})

