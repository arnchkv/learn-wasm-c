# command for compiling
emcc hello_world.c -o hello_world.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall,cwrap
