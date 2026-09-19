#include <iostream>
using namespace std;

const int MAX = 10;

struct Stack {
    int top;
    int data[MAX];
};

void init(Stack &s) {
    s.top = -1;
}

bool isEmpty(Stack s) {
    return s.top == -1;
}

bool isFull(Stack s) {
    return s.top == MAX - 1;
}

void push(Stack &s, int value) {
    if (isFull(s)) {
        cout << "Stack penuh!\n";
        return;
    }
    s.data[++s.top] = value;
    cout << "Push " << value << " berhasil\n";
}

void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!\n";
        return;
    }
    cout << "Pop " << s.data[s.top--] << " berhasil\n";
}

int peek(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong!\n";
        return -1;
    }
    return s.data[s.top];
}

void display(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong\n";
        return;
    }

    cout << "Isi stack: ";
    for (int i = s.top; i >= 0; i--) {
        cout << s.data[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack s;
    init(s);

    push(s, 10);
    push(s, 20);
    push(s, 30);
    display(s);

    cout << "Top: " << peek(s) << endl;

    pop(s);
    display(s);

    return 0;
}
