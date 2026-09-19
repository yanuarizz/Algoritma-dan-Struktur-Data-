#include <iostream>
using namespace std;

struct listNode{
    int angka;
    listNode *next;
    listNode *prev;

    listNode(int x) : angka(x), prev(nullptr), next(nullptr){}
};

int main(){

    listNode *head = new listNode(8);
    head->prev = new listNode(4);
    head->next = new listNode(11);
    head->prev->prev = new listNode(2);
    head->prev->next = new listNode(6);
    head->next->prev = new listNode(9);
    head->next->next = new listNode(12);
    head->prev->prev->prev = new listNode(1);
    head->prev->prev->next = new listNode(3);
    head->prev->next->prev = new listNode(5);
    head->prev->next->next = new listNode(7);
    head->next->prev->prev = new listNode(10);
    
    cout << "level order: ";
    cout << head->angka << " - ";
    cout << head->prev->angka << " - ";
    cout << head->next->angka << " - ";
    cout << head->prev->prev->angka << " - ";
    cout << head->prev->next->angka << " - ";
    cout << head->next->prev->angka << " - ";
    cout << head->next->next->angka << " - ";
    cout << head->prev->prev->prev->angka << " - ";
    cout << head->prev->prev->next->angka << " - ";
    cout << head->prev->next->prev->angka << " - ";
    cout << head->prev->next->next->angka << " - ";
    cout << head->next->prev->prev->angka << " ";
    cout << endl;

    cout << "pre order: ";
    cout << head->angka << " - ";
    cout << head->prev->angka << " - ";
    cout << head->prev->prev->angka << " - ";
    cout << head->prev->prev->prev->angka << " - ";
    cout << head->prev->prev->next->angka << " - ";
    cout << head->prev->next->angka << " - ";
    cout << head->prev->next->prev->angka << " - ";
    cout << head->prev->next->next->angka << " - ";
    cout << head->next->angka << " - ";
    cout << head->next->prev->angka << " - ";
    cout << head->next->prev->prev->angka << " - ";
    cout << head->next->next->angka << " ";
    cout << endl;

    cout << "in order: ";
    cout << head->prev->prev->prev->angka << " - ";
    cout << head->prev->prev->angka << " - ";
    cout << head->prev->prev->next->angka << " - ";
    cout << head->prev->angka << " - ";
    cout << head->prev->next->prev->angka << " - ";
    cout << head->prev->next->angka << " - ";
    cout << head->prev->next->next->angka << " - ";
    cout << head->angka << " - ";
    cout << head->next->prev->prev->angka << " - ";
    cout << head->next->prev->angka << " - ";
    cout << head->next->angka << " - ";
    cout << head->next->next->angka << " ";
    cout << endl;

    cout << "post order: ";
    cout << head->prev->prev->prev->angka << " - ";
    cout << head->prev->prev->next->angka << " - ";
    cout << head->prev->prev->angka << " - ";
    cout << head->prev->next->prev->angka << " - ";
    cout << head->prev->next->next->angka << " - ";
    cout << head->prev->next->angka << " - ";
    cout << head->prev->angka << " - ";
    cout << head->next->prev->prev->angka << " - ";
    cout << head->next->prev->angka << " - ";
    cout << head->next->next->angka << " - ";
    cout << head->next->angka << " - ";
    cout << head->angka << " ";
    cout << endl;
    return 0;
}