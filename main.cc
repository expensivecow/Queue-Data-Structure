/* Author(s): Michael Cao, Jason Too
 * Goal: Create a main to create test framework and (optionally) a terminal UI
 * Date: October 30, 2014
 */

#include <iostream>
#include "unit.h"
#include "Queue.h"

//put it above main so that itll be defined in the scope w/o implicitly defining it
void runTests() {
  Unit unit;

  myQueue queue (0,10);

  unit.assertTrue("Queue should be empty(#1)", queue.empty());
  unit.assertEquals("Queue size should be 0(#3)", 0, queue.size());

  queue.push(8);

  int *expected;
  expected = new int[10];
  expected[0] = 8;
  unit.assertpointerEquals("Pushing once on stack should output [8](#5)", expected, queue.returnArr(), 1);
  queue.push(7), queue.push(6), queue.push(5), queue.push(4), queue.push(3), queue.push(2), queue.push(1);

  queue.displayQueue();

  unit.assertFalse("Queue should not be empty(#2)", queue.empty());
  unit.assertEquals("Queue size should be 8(#4)", 8, queue.size());

  myQueue emptyQueue (0,10);

  unit.assertEquals("Popping first queue should output 8(#6)", 8, queue.pop());
  unit.assertEquals("Popping empty queue should return 0(#7)", 0, emptyQueue.pop());
  unit.assertEquals("Peeking on first queue should output 7(#8)", 7, queue.peek());
  unit.assertEquals("Peeking on first queue again should still output 7(#8)", 7, queue.peek());
  unit.assertEquals("Peeking on empty queue should still output 0(#9)", 0, emptyQueue.peek());
 
  unit.printResults();
  return;
}

int main(int argc, char *argv[]) {
  if(argc == 1) {
    runTests();
  }
  return 0;
}
