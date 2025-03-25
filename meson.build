project('Vector 2D', 'c', default_options: 'default_library=both')

add_global_arguments(['-Wall', '-Wextra', '-pedantic', '-ggdb'], language: 'c')

headers = include_directories('include')

raylib_so = meson.get_compiler('c').find_library('raylib', dirs: '/'.join([meson.current_source_dir(), 'raylib/']))

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
  dependencies: raylib_so,
)
