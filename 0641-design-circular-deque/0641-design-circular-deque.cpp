class MyCircularDeque {
        vector<int> arr;
    int front, rear, count, k;
public:
    MyCircularDeque(int k) {
          this->k = k;
    arr.resize(k);
    front = 0;
    rear = -1;
    count = 0;
    }
    
    bool insertFront(int value) {
        if (count == k) {
    return false;
}
 if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + k) % k;
        }

        arr[front] = value;
        count++;
        return true;
         }
    
    bool insertLast(int value) {
         if (isFull()) return false;

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % k;
        }

        arr[rear] = value;
        count++;
        return true;
    }
    
    bool deleteFront() {
         if (isEmpty()) return false;
if (count == 1) {
            front = 0;
            rear = -1;
        } else {
            front = (front + 1) % k;
        }

        count--;
        return true;
    }
    
    bool deleteLast() {
        if (count == 0) {
    return false;
}
  if (count == 1) {
            front = 0;
            rear = -1;
        } else {
            rear = (rear - 1 + k) % k;
        }

        count--;
        return true;
    }
    
    int getFront() {
           if (isEmpty()) return -1;
        return arr[front];
    }
    
    int getRear() {
     if (isEmpty()) return -1;
        return arr[rear];    
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==k;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna