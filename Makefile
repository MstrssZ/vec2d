all: bin/main build/libvec2d.so build bin

bin/main: build/libvec2d.so src/main.c build bin
	cc src/main.c build/libvec2d.so -o bin/main -lm


build/libvec2d.so: src/vec2d.c build
	cc -shared -o build/libvec2d.so src/vec2d.c

build:
	mkdir build

bin:
	mkdir bin
