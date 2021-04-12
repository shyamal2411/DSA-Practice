#include <bits/stdc++.h>
using namespace std;

struct Queue {
  int front, rear, capacity;
  int* queue;
  Queue(int c) {
    front = rear = 0;
    capacity = c;
    queue = new int;
  }

  ~Queue() { delete[] queue; }

  void queueEnqueue(int data) {
    if (capacity == rear) {
      cout << "Full" << endl;
      return;
    } else {
      queue[rear] = data;
    }
    return;
  }

  void queueDequeue() {
    if (front == rear) {
      cout << "Empty" << endl;
      return;
    } else {
      for (int i = 0; i < rear - 1; i++) {
        queue[i] = queue[i + 1];
      }
      rear--;
    }
    return;
  }
  void display() {
    int i;
    if (front == rear) {
      cout << "Empty" << endl;
      return;
    }

    for (i = front; i < rear; i++) {
      cout << queue[i] << "<--" << endl;
    }
    return;
  }

  void Front() {
    if (front == rear) {
      cout << "Empty" << endl;
      return;
    }
    cout << "Element is: " << queue[front];
    return;
  }
};

int main() {
  Queue q(4);
  q.display();

  q.queueEnqueue(20);
  q.queueEnqueue(30);
  q.queueEnqueue(40);
  q.queueEnqueue(50);

  q.display();
}