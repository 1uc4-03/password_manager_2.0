add_executable(password_manager_2 main.cpp display.cpp display.h)
find_package(imgui REQUIRED)
target_link_libraries(password_manager_2 Functions PRIVATE imgui::imgui libargon2)
