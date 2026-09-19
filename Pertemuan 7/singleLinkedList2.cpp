#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SingleLinkedList {
private:
    Node* head;

public:
    SingleLinkedList() {
        head = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node{value, nullptr};
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node{value, nullptr};
        if (isEmpty()) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int value, int pos) {
        if (pos <= 1 || isEmpty()) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node{value, nullptr};
        Node* temp = head;
        int index = 1;

        while (temp != nullptr && index < pos - 1) {
            temp = temp->next;
            index++;
        }

        if (temp == nullptr) {
            insertAtEnd(value);
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void insertBefore(int value, int target) {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        if (head->data == target) {
            insertAtBeginning(value);
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != target) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Data " << target << " tidak ditemukan.\n";
            return;
        }

        Node* newNode = new Node{value, nullptr};
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void insertAfter(int value, int target) {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        Node* temp = head;
        while (temp != nullptr && temp->data != target) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Data " << target << " tidak ditemukan.\n";
            return;
        }

        Node* newNode = new Node{value, nullptr};
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void insertMiddle(int value) {
        int length = getLength();
        if (length == 0) {
            insertAtBeginning(value);
            return;
        }

        int middle = length / 2;
        insertAtPosition(value, middle + 1);
    }

    void deleteAtPosition(int pos) {
        if (isEmpty()) {
            cout << "List kosong!\n";
            return;
        }

        if (pos <= 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        int index = 1;

        while (temp != nullptr && index < pos - 1) {
            temp = temp->next;
            index++;
        }

        if (temp == nullptr || temp->next == nullptr) {
            cout << "Posisi tidak valid.\n";
            return;
        }

        Node* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }

    void deleteMiddle() {
        int length = getLength();
        if (length == 0) {
            cout << "List kosong!\n";
            return;
        }

        int middle = length / 2;
        deleteAtPosition(middle + 1);
    }

    int getLength() {
        Node* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void display() {
        if (isEmpty()) {
            cout << "List kosong\n";
            return;
        }

        Node* temp = head;
        cout << "List: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    SingleLinkedList list;
    int pilihan, data, target;

    do {
        cout << "\n=== Single Linked List ===\n";
        cout << "1. Insert Awal\n";
        cout << "2. Insert Akhir\n";
        cout << "3. Insert Before\n";
        cout << "4. Insert After\n";
        cout << "5. Insert Mid\n";
        cout << "6. Delete Mid\n";
        cout << "7. Tampilkan\n";
        cout << "8. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                list.insertAtBeginning(data);
                break;

            case 2:
                cout << "Masukkan data: ";
                cin >> data;
                list.insertAtEnd(data);
                break;

            case 3:
                cout << "Masukkan data baru: ";
                cin >> data;
                cout << "Masukkan target: ";
                cin >> target;
                list.insertBefore(data, target);
                break;

            case 4:
                cout << "Masukkan data baru: ";
                cin >> data;
                cout << "Masukkan target: ";
                cin >> target;
                list.insertAfter(data, target);
                break;

            case 5:
                cout << "Masukkan data baru: ";
                cin >> data;
                list.insertMiddle(data);
                break;

            case 6:
                list.deleteMiddle();
                break;

            case 7:
                list.display();
                break;

            case 8:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
                break;
        }
    } while (pilihan != 8);

    return 0;
}
