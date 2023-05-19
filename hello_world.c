#include <stdio.h>
#include<emscripten.h>

// command for compiling
// emcc hello_world.c -o hello_world.js -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=ccall,cwrap

EMSCRIPTEN_KEEPALIVE
int addNums(int a, int b){
  return a + b;
}

EMSCRIPTEN_KEEPALIVE
int main() {
  printf("hello, world, %d!\n", addNums(3, 5));
  return 0;
}

EMSCRIPTEN_KEEPALIVE
int subtractNums(int a, int b){
  return a - b;
}