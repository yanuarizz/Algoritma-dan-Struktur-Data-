#include <iostream>
#include "DLL_circular.h"
using namespace std;

nodeDLLC *headDLLC = nullptr;
nodeDLLC *tailDLLC = nullptr;
nodeDLLC *curDLLC = nullptr;
nodeDLLC *newNodeDLLC = nullptr;
nodeDLLC *delDLLC = nullptr;
nodeDLLC *afterNodeDLLC = nullptr;

void tambahDepanDLLC(nodeDLLC* &headDLLC, int newdata){
    newNodeDLLC = new nodeDLLC();
    newNodeDLLC->data = newdata;
    if (headDLLC == nullptr) {
        newNodeDLLC->next = newNodeDLLC;
        newNodeDLLC->prev = newNodeDLLC;
        headDLLC = newNodeDLLC;
        tailDLLC = newNodeDLLC;
    } else {
        newNodeDLLC->next = headDLLC;
        newNodeDLLC->prev = tailDLLC;
        headDLLC->prev = newNodeDLLC;
        tailDLLC->next = newNodeDLLC;
        headDLLC = newNodeDLLC;
    }
}
void tambahBelakangDLLC(nodeDLLC* &tailDLLC, int dataakhir){
    nodeDLLC* newnode = new nodeDLLC();
    newnode->data = dataakhir;
    if (headDLLC == nullptr) {
        newnode->next = newnode;
        newnode->prev = newnode;
        headDLLC = newnode;
        tailDLLC = newnode;
    } else {
        newnode->next = headDLLC;
        newnode->prev = tailDLLC;
        headDLLC->prev = newnode;
        tailDLLC->next = newnode;
        tailDLLC = newnode;
    }
}
void tambahTengahDLLC(int datatengah, int posisi){
    newNodeDLLC=new nodeDLLC();
    newNodeDLLC->data=datatengah;
    //transfersing
    curDLLC=headDLLC;
    int nomor=1;
    while (nomor<posisi-1){
        curDLLC=curDLLC->next;
        nomor++;
    }
    afterNodeDLLC=curDLLC->next;
    newNodeDLLC->prev=curDLLC;
    newNodeDLLC->next=afterNodeDLLC;
    curDLLC->next=newNodeDLLC;
    afterNodeDLLC->prev=newNodeDLLC;
}
void HapusdepanDLLC(){
    if (headDLLC == NULL) return;
    delDLLC=headDLLC;
    if (headDLLC->next==headDLLC){
        headDLLC=NULL;
        tailDLLC=NULL;
    }else{
        headDLLC=headDLLC->next;
        headDLLC->prev=tailDLLC;
        tailDLLC->next= headDLLC;
    }
    delete delDLLC;
}
void HapusBelakangDLLC(){
    if (headDLLC == NULL) return;
    delDLLC=tailDLLC;
    if (headDLLC->next==headDLLC){
        headDLLC=NULL;
        tailDLLC=NULL;
    }else{
        tailDLLC=tailDLLC->prev;
        tailDLLC->next=headDLLC;
        headDLLC->prev= tailDLLC;
    }
    delete delDLLC;
}
void hapusTengahDLLC(int posisi){
    // transfersing
    curDLLC=headDLLC;
    int nomor=1;
    while (nomor<posisi-1){
        curDLLC=curDLLC->next;
        nomor++;
    }
    delDLLC=curDLLC->next;
    afterNodeDLLC=delDLLC->next;
    curDLLC->next=afterNodeDLLC;
    afterNodeDLLC->prev=curDLLC;
    delete delDLLC;
}
void cetakDLLC(){
    if(headDLLC == nullptr){
        cout << "Linked list kosong" << endl;
        return;
    }
    

    curDLLC = headDLLC;
    do {
        cout << curDLLC->data << " ";
        curDLLC = curDLLC->next;
    } while(curDLLC != headDLLC);
    
    cout << endl;
}