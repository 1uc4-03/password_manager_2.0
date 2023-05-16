add_executable(password_manager_2 main.cpp)
find_package(imgui REQUIRED)
target_link_libraries(password_manager_2 Functions imgui::imgui libargon2)
