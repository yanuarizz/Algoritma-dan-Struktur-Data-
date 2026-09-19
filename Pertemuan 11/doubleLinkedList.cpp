#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoubleLinkedList {
private:
    Node* head;
    Node* tail;
    int count;

public:
    DoubleLinkedList() {
        head = nullptr;
        tail = nullptr;
        count = 0;
    }

    ~DoubleLinkedList() {
        clear();
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    int size() const {
        return count;
    }

    void addHead(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        count++;
    }

    void addTail(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        count++;
    }

    void insertAfter(int key, int value) {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        Node* current = head;
        while (current != nullptr && current->data != key) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Data " << key << " tidak ditemukan.\n";
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != nullptr) {
            current->next->prev = newNode;
        } else {
            tail = newNode;
        }

        current->next = newNode;
        count++;
    }

    void insertBefore(int key, int value) {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        Node* current = head;
        while (current != nullptr && current->data != key) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Data " << key << " tidak ditemukan.\n";
            return;
        }

        if (current == head) {
            addHead(value);
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = current;
        newNode->prev = current->prev;
        current->prev->next = newNode;
        current->prev = newNode;
        count++;
    }

    void deleteHead() {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }

        delete temp;
        count--;
    }

    void deleteTail() {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }

        delete temp;
        count--;
    }

    void deleteByValue(int value) {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        Node* current = head;
        while (current != nullptr && current->data != value) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Data " << value << " tidak ditemukan.\n";
            return;
        }

        if (current == head) {
            deleteHead();
            return;
        }

        if (current == tail) {
            deleteTail();
            return;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
        count--;
    }

    bool search(int value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void printForward() const {
        if (isEmpty()) {
            cout << "List kosong.\n";
            return;
        }

        Node* current = head;
        cout << "List maju: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void printBackward() const {
        if (isEmpty()) {
            cout << "List kosong.\n";
            return;
        }

        Node* current = tail;
        cout << "List mundur: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }

    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        tail = nullptr;
        count = 0;
    }
};

int main() {
    DoubleLinkedList list;

    list.addHead(10);
    list.addHead(20);
    list.addTail(30);
    list.addTail(40);
    list.insertAfter(20, 25);
    list.insertBefore(30, 27);

    list.printForward();
    list.printBackward();

    cout << "Jumlah data: " << list.size() << endl;
    cout << "Apakah 25 ada? " << (list.search(25) ? "Ya" : "Tidak") << endl;

    list.deleteByValue(27);
    list.deleteHead();
    list.deleteTail();

    list.printForward();

    return 0;
}
