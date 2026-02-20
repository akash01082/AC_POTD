// Geeks for Geeks : 

class myQueue {
    
  public:
  
    int front,rear;
    int size;
    int* arr;
    myQueue(int n) {
        // Define Data Structures
        size=n;
        front=-1;
        rear=-1;
        arr=new int[n];
    }

    bool isEmpty() {
        // check if the queue is empty
        return front==-1;
    }

    bool isFull() {
        // check if the queue is full
        return (rear + 1) % size == front;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(isFull()) return;
        if(front == -1) front=0;
        arr[++rear]=x;
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(isEmpty()) return;
        if(front == rear ){
            front=rear=-1;
        }else{
            front++;
        }
    }

    int getFront() {
        // Returns the front element of the queue.
        if(isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        // Return the last element of queue
        if(isEmpty()) return -1;
        return arr[rear];
    }
};
