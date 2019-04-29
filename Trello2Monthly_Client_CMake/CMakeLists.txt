# CMakeList.txt : CMake project for Trello2Monthly_Client_CMake, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Trello2Monthly_Client_CMake "Trello2Monthly_Client_CMake.cpp" "Trello2Monthly_Client_CMake.h" "monthly.cpp" "monthly.cpp")
find_package(cpprestsdk REQUIRED)
target_link_libraries(Trello2Monthly_Client_CMake PRIVATE cpprestsdk::cpprest)
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(Trello2Monthly_Client_CMake PRIVATE spdlog::spdlog)
find_package(cpptoml CONFIG REQUIRED)
target_link_libraries(Trello2Monthly_Client_CMake PRIVATE cpptoml::cpptoml)
find_package(rapidjson CONFIG REQUIRED)
target_link_libraries(Trello2Monthly_Client_CMake PRIVATE rapidjson::rapidjson)

# TODO: Add tests and install targets if needed.
