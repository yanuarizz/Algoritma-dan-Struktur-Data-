#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class SingleLinkedList {
private:
    Node *head;

public:
    SingleLinkedList() {
        head = nullptr;
    }

    void insertHead(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertTail(int value) {
        if (head == nullptr) {
            insertHead(value);
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        temp->next = newNode;
    }

    void display() {
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void removeHead() {
        if (head == nullptr) {
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void removeValue(int value) {
        if (head == nullptr) {
            return;
        }

        if (head->data == value) {
            removeHead();
            return;
        }

        Node *prev = head;
        Node *curr = head->next;

        while (curr != nullptr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        if (curr != nullptr) {
            prev->next = curr->next;
            delete curr;
        }
    }

    ~SingleLinkedList() {
        while (head != nullptr) {
            removeHead();
        }
    }
};

int main() {
    SingleLinkedList list;

    list.insertTail(10);
    list.insertTail(20);
    list.insertTail(30);
    list.insertHead(5);

    cout << "List awal: ";
    list.display();

    list.removeValue(20);
    cout << "Setelah hapus 20: ";
    list.display();

    return 0;
}
