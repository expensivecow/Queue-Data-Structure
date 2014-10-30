/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a queue using c++11 which suits the standards from scratch
 * Date: October 30, 2014
 */

#include <iostream>
#include "Queue.h"

myQueue::myQueue(int startingTop, int startingLength) {
  //TODO: implement
  topIndex = startingTop;
  maxSize = startingLength;
  p = new int[startingLength];
  return;
}

bool myQueue::empty() {
  //TODO: implement
  return false;
}

int myQueue::size() {
  //TODO: implement
  return 0;
}

void myQueue::push(int pushVal) {
  //TODO: implement
  return;
}

int myQueue::pop() {
  //TODO: implement
  return 0;
}

void myQueue::reSize(int capacity) {
  //TODO: implement
  return;
}

void myQueue::displayQueue() {
  //TODO: implement
  return;
}

int myQueue::getMaxSize() {
  //TODO: implement
  return 0;
}

int* myQueue::returnArr() {
  //TODO: implement
  return p;
}



