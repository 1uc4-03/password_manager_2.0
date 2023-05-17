add_library(Functions functions.cpp functions.h)
target_include_directories(Functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(unofficial-argon2 REQUIRED)
target_link_libraries(Functions PRIVATE unofficial::argon2::libargon2)
