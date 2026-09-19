#include <iostream>
#include "SLL_circular.h"
using namespace std;

nodeSLLC *headSLLC = nullptr;
nodeSLLC *tailSLLC = nullptr;
nodeSLLC *curSLLC = nullptr;
nodeSLLC *newNodeSLLC = nullptr;
nodeSLLC *delSLLC = nullptr;
nodeSLLC *afterNodeSLLC = nullptr;

nodeSLLC* buatNodeSLLC(int newdata){
    nodeSLLC* newnode = new nodeSLLC;
    newnode->data = newdata;
    newnode->next = nullptr;
    return newnode;
}
void tambahDepanSLLC(nodeSLLC* &headSLLC, int newdata){
    nodeSLLC* newnode = buatNodeSLLC(newdata);
    if (headSLLC == nullptr) {
        headSLLC = newnode;
        newnode->next = headSLLC;
    }
   else {
        nodeSLLC* tail = headSLLC;
        while (tail->next != headSLLC) {
            tail = tail->next;
        }
        
        newnode->next = headSLLC; 
        tail->next = newnode;
        headSLLC = newnode;
    }
    
}
void tambahBelakangSLLC(nodeSLLC* &headSLLC, int newdata){
    nodeSLLC* newnode = buatNodeSLLC(newdata);
    if(headSLLC == nullptr){
        headSLLC = newnode;
        newnode->next = headSLLC;
        return;
    }
    
    nodeSLLC* temp = headSLLC;
    while(temp->next != headSLLC){
        temp = temp->next;
    }
    
    temp->next = newnode;
    newnode->next = headSLLC;
}
void tambahTengahSLLC(int dataTengahSLLC, int posisi){
    if (headSLLC==NULL) return;
    nodeSLLC* newNodeSLLC=new nodeSLLC();
    newNodeSLLC->data= dataTengahSLLC;

    nodeSLLC* curSLLC=headSLLC;
    for (int i=1;i<posisi-1;i++){
        if (curSLLC->next !=headSLLC){
            curSLLC=curSLLC->next;
        }
    }
    newNodeSLLC->next= curSLLC->next;
    curSLLC->next = newNodeSLLC;
}
void hapusTengahSLLC(nodeSLLC* &headSLLC, int posisi){
   nodeSLLC* prev = headSLLC;
    while (prev->next != headSLLC && prev->next->data != posisi) {
        prev=prev->next;
    }
    if (prev->next != headSLLC && prev->next->data == posisi) {
        nodeSLLC* target = prev->next;
        prev->next = target->next;
        delete target;
    } else {
        cout << "Element dengan value " << posisi << " tidak ketemu" << endl;
    }
}
void hapusDepanSLLC(){
    if (headSLLC == nullptr){

        cout << "list kosong";
        return;
    }
    nodeSLLC* tail = headSLLC;
        while (tail->next != headSLLC) {
            tail = tail->next;
        }
    nodeSLLC* temp = headSLLC;
    headSLLC = headSLLC->next;
    tail->next = headSLLC;
    delete temp;
}
void hapusBelakangSLLC(nodeSLLC* &headSLLC){
    if (headSLLC == nullptr){
        cout << "list kosong";
        return;
    }
    if (headSLLC->next == headSLLC){
        delete headSLLC;
        headSLLC = nullptr;
        return;
    }
    nodeSLLC* current = headSLLC;
    while(current->next->next != headSLLC){
        current = current->next;
    }
    nodeSLLC* temp = current->next;
    current->next = headSLLC;
    delete temp;
}
void cetakSLLC(nodeSLLC* headSLLC){
    cout << "Linked list: ";
    nodeSLLC* prev = headSLLC;
    do{
        cout << prev->data << " "; 
        prev = prev->next; 
    } while (prev != headSLLC);
    cout << endl;
}