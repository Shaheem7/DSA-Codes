#include <iostream>
#include <vector>

using namespace std;

class MyCircularDeque {
private:
    vector<int> queue;
    int front;
    int rear;
    int size;
    int capacity;

public:
    MyCircularDeque(int k) {
        queue.resize(k);
        front = 0;
        rear = 0;
        size = 0;
        capacity = k;
    }

    bool insertFront(int value) {
        if (isFull()) return false;
        front = (front - 1 + capacity) % capacity;
        queue[front] = value;
        size++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) return false;
        queue[rear] = value;
        rear = (rear + 1) % capacity;
        size++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) return false;
        rear = (rear - 1 + capacity) % capacity;
        size--;
        return true;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return queue[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return queue[(rear - 1 + capacity) % capacity];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};

int main() {
    MyCircularDeque myCircularDeque(3);
    cout << myCircularDeque.insertLast(1) << endl;  // return True
    cout << myCircularDeque.insertLast(2) << endl;  // return True
    cout << myCircularDeque.insertFront(3) << endl; // return True
    cout << myCircularDeque.insertFront(4) << endl; // return False, the queue is full.
    cout << myCircularDeque.getRear() << endl;      // return 2
    cout << myCircularDeque.isFull() << endl;       // return True
    cout << myCircularDeque.deleteLast() << endl;   // return True
    cout << myCircularDeque.insertFront(4) << endl; // return True
    cout << myCircularDeque.getFront() << endl;     // return 4

    return 0;
}
