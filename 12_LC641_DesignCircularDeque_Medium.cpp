
class MyCircularDeque {
 public:
   int arr[1000];
   int front , rear,  size, capacity;

    MyCircularDeque(int k) {
        capacity = k;
        size =0;
        front =0;
        rear = -1;
       }

    bool insertFront(int value) {

        if (isFull())return false;

       front = (front - 1 + capacity) % capacity;
        arr[front] = value;
        size++;
        if (size == 1) rear = front;

        return true;
    }

      bool insertLast(int value) {
           if (isFull()) return false;
 
          rear =(rear + 1) % capacity;
          arr[rear] = value;
          size++;
         if (size == 1)front = rear;

       return true;
    }

    bool deleteFront() {
       if (isEmpty()) return false;
       front = (front + 1) % capacity;
        size--;

        return true;
    }

    bool deleteLast() {
        if (isEmpty())return false;

      rear =(rear - 1 + capacity) % capacity;
        size--;

        return true;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return  -1;
        return arr[rear];
    }

    bool isEmpty() {
      return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

};
