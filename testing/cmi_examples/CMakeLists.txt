add_test (build_cmi_examples build_cmi_examples.sh)

configure_file (build_cmi_examples.sh.in
  ${CMAKE_CURRENT_BINARY_DIR}/build_cmi_examples.sh)

