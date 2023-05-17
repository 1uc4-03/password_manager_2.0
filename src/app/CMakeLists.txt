add_executable(password_manager_2 main.cpp display.cpp display.h)

find_package(imgui REQUIRED)
find_package(unofficial-argon2 REQUIRED)
find_package(nlohmann_json 3.2.0 REQUIRED)

target_link_libraries(password_manager_2 PRIVATE Functions imgui::imgui unofficial::argon2::libargon2 nlohmann_json::nlohmann_json)
