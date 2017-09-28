cmake_minimum_required(VERSION 3.9)
project(hexagonal-architecture-sample)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
add_executable(hexagonal_architecture_sample_cmd app.h app.cpp repo.h repo.cpp cmd.cpp)
target_link_libraries(hexagonal_architecture_sample_cmd)

add_executable(hexagonal_architecture_sample_test app.h app.cpp test.cpp)
target_link_libraries(hexagonal_architecture_sample_test
  Boost::boost
  Boost::unit_test_framework
)
