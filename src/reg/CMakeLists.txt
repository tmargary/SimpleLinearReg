add_library(reg reg.cpp)

target_link_libraries(reg PUBLIC math_form)

target_include_directories(reg PUBLIC include)
