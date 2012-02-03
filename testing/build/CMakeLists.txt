add_test (build_test build_test.sh)

configure_file (build_test.sh.in
  ${CMAKE_CURRENT_BINARY_DIR}/build_test.sh)

