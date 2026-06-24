# CMakeList.txt : CMake project for spelled_to_num, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("spelled_to_num")

# Add source to this project's executable.
add_executable (spelled_to_num "spelled_to_num.cpp" "spelled_to_num.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET spelled_to_num PROPERTY CXX_STANDARD 20)
endif()

if(MSVC)
	add_compile_options(/W4 /permissive- /EHsc)
endif()

# TODO: Add tests and install targets if needed.

