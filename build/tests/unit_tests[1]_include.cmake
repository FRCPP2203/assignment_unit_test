if(EXISTS "D:/fpt/code/TinTP1_assignment_unit_test/build/tests/unit_tests[1]_tests.cmake")
  include("D:/fpt/code/TinTP1_assignment_unit_test/build/tests/unit_tests[1]_tests.cmake")
else()
  add_test(unit_tests_NOT_BUILT unit_tests_NOT_BUILT)
endif()