/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a queue using c++11 which suits the standards from scratch
 * Date: October 30, 2014
 */

#include <iostream>
#include "Queue.h"

myQueue::myQueue(int startingHead, int startingLength) {
  head = startingHead;
  maxSize = startingLength;
  p = new int[startingLength];
  return;
}

bool myQueue::empty() {
  return (head == 0 ? true : false);
}

int myQueue::size() {
  return head;
}

void myQueue::push(int pushVal) {
  if(head == maxSize) {
    reSize(2*maxSize); //double the size of the array
  }
  int j;
  for(int i = head; i > 0; i--) {
    j = i - 1;
    p[i] = p[j];
  }
  p[0] = pushVal;
  head++;
}

int myQueue::pop() {
  if(head == 0) {
    return 0;
  } else {
    head--;
    return p[head+1];
  }
}

void myQueue::reSize(int capacity) {
  int* temp = p;
  p = new int[capacity];
  for(int i=0;i<capacity;i++) {
    p[i] = temp[i];
  }
  maxSize *= 2;
  delete temp;
  temp = NULL;
}

void myQueue::displayQueue() {
  std::cout << std::endl << "Queue from head to back: ";
  for(int i = head; i > 0; i--) {
    std::cout << p[i] << " ";
  }
  std::cout << std::endl;
}

int myQueue::getMaxSize() {
  return maxSize;
}

int* myQueue::returnArr() {
  return p;
}

int myQueue::peek() {
  return p[head];
}


