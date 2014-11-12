/* Author(s): Michael Cao, Jason Too
 * Goal: Create a queue implementation while using specific SE practices
 * Date: October 31, 2014
 */

class myQueue {
public:
  myQueue(int, int); //constructor

  bool empty();
  int size();
  void push(int);
  int pop();
  void reSize(int);
  void displayQueue();
  int getMaxSize();
  int* returnArr();
  int peek();

private:
  int* p;
  int head;
  int maxSize;
};
