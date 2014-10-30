/* Author(s): Michael Cao, Jason Too
 * Goal: Create a main to create test framework and (optionally) a terminal UI
 * Date: October 30, 2014
 */

#include <iostream>
#include "unit.h"
#include "Queue.h"

//put it above main so that itll be defined in the scope w/o implicitly defining it
void runTests() {
  std::cout << "to implement" << std::endl;
  return;
}

int main(int argc, char *argv[]) {
  if(argc == 1) {
    runTests();
  }
  return 0;
}
