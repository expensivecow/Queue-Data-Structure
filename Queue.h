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
  void displayStack();
  int getMaxSize();
  int* returnArr();

private:
  int* p;
  int topIndex;
  int maxSize;
};
