#include <iostream>
using namespace std;

const int MAX = 5;

struct Queue {
    int data[MAX];
    int front;
    int rear;
};

void initQueue(Queue &q) {
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(Queue q) {
    return q.front == -1 && q.rear == -1;
}

bool isFull(Queue q) {
    return q.rear == MAX - 1;
}

void enqueue(Queue &q, int value) {
    if (isFull(q)) {
        cout << "Antrian penuh!\n";
        return;
    }

    if (isEmpty(q)) {
        q.front = 0;
        q.rear = 0;
    } else {
        q.rear++;
    }

    q.data[q.rear] = value;
    cout << value << " masuk ke antrian\n";
}

void dequeue(Queue &q) {
    if (isEmpty(q)) {
        cout << "Antrian kosong!\n";
        return;
    }

    int value = q.data[q.front];
    cout << value << " keluar dari antrian\n";

    if (q.front == q.rear) {
        initQueue(q);
    } else {
        q.front++;
    }
}

void displayQueue(Queue q) {
    if (isEmpty(q)) {
        cout << "Antrian kosong\n";
        return;
    }

    cout << "Isi antrian: ";
    for (int i = q.front; i <= q.rear; i++) {
        cout << q.data[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;
    initQueue(q);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    displayQueue(q);

    dequeue(q);
    displayQueue(q);

    enqueue(q, 40);
    displayQueue(q);

    return 0;
}
