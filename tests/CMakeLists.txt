#if(BUILD_TESTING)
add_executable(main main.c)
#target_link_libraries(tests PRIVATE GTest::gtest_main moteur3D)

#include(GoogleTest)
#gtest_discover_tests(tests)

target_link_libraries(main PRIVATE poker-env)
#endif()