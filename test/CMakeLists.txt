# GTest include code would
# go somewhere in here

add_executable(reg_test reg_test.cpp)

target_link_libraries(reg_test
 PRIVATE
  GTest::GTest
  reg)

add_test(reg_gtests reg_test)
