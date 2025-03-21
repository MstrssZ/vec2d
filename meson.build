project('Vector 2D', 'c', default_options: 'default_library=both')

add_global_arguments(['-Wall', '-Wextra', '-pedantic', '-ggdb'], language: 'c')

headers = include_directories('include')

vec2d_lib = library(
  'vec2d',
  'src/vec2d.c',
  include_directories: headers,
  link_args: '-lm',
)

executable(
  'main',
  'src/main.c',
  include_directories: headers,
  link_args: '-lm',
  link_with: vec2d_lib,
)
