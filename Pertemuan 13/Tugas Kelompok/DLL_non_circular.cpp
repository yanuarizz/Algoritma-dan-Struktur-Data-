#include <iostream>
#include "DLL_non_circular.h"
using namespace std;

nodeDLLNC *headDLLNC = nullptr;
nodeDLLNC *tailDLLNC = nullptr;
nodeDLLNC *curDLLNC = nullptr;
nodeDLLNC *newNodeDLLNC = nullptr;
nodeDLLNC *delDLLNC = nullptr;
nodeDLLNC *afterNodeDLLNC = nullptr;

nodeDLLNC* buatNodeDLLNC(int data) {
    nodeDLLNC* baru = new nodeDLLNC;
    baru->data = data;
    baru->next = nullptr;
    baru->prev = nullptr;
    return baru;
}
void TambahdepanDLLNC(int dataawal){
    newNodeDLLNC = buatNodeDLLNC(dataawal);
    newNodeDLLNC->prev = NULL;
    newNodeDLLNC->next = headDLLNC;
    if (headDLLNC != NULL){
        headDLLNC->prev = newNodeDLLNC;
    } else {
        tailDLLNC = newNodeDLLNC;
    }
    headDLLNC = newNodeDLLNC;
}
void TambahbelakangDLLNC(int dataakhir){
    newNodeDLLNC = buatNodeDLLNC(dataakhir);
    newNodeDLLNC->prev = tailDLLNC;
    newNodeDLLNC->next = NULL;
    if (tailDLLNC != NULL){
        tailDLLNC->next = newNodeDLLNC;
    } else {
        headDLLNC = newNodeDLLNC;
    }
    tailDLLNC = newNodeDLLNC;
}
void tambahTengahDLLNC(int datatengah, int posisi){
    newNodeDLLNC = buatNodeDLLNC(datatengah);
    curDLLNC = headDLLNC;
    int nomor = 1;
    while (nomor < posisi-1 && curDLLNC->next != nullptr){
        curDLLNC = curDLLNC->next;
        nomor++;
    }
    nodeDLLNC* afterNode = curDLLNC->next;
    newNodeDLLNC->prev = curDLLNC;
    newNodeDLLNC->next = afterNode;
    curDLLNC->next = newNodeDLLNC;
    if(afterNode != nullptr){
        afterNode->prev = newNodeDLLNC;
    } else {
        tailDLLNC = newNodeDLLNC;
    }
}
void hapusTengahDLLNC(int posisi){
    curDLLNC = headDLLNC;
    int nomor=1;
    while (nomor<posisi-1 && curDLLNC->next != nullptr){
        curDLLNC = curDLLNC->next;
        nomor++;
    }
    nodeDLLNC* del = curDLLNC->next;
    if (del == nullptr) return;
    nodeDLLNC* afterNode = del->next;
    curDLLNC->next = afterNode;
    if(afterNode != nullptr){
        afterNode->prev = curDLLNC;
    } else {
        tailDLLNC = curDLLNC;
    }
    delete del;
}
void hapusDepanDLLNC(nodeDLLNC* &headDLLNC){
    if(headDLLNC == nullptr){
        cout << "Linked list kosong";
        return;
    }
    nodeDLLNC* temp = headDLLNC;
    headDLLNC = headDLLNC->next;
    if(headDLLNC != nullptr){
        headDLLNC->prev = nullptr;
    }
    delete temp;
}
void hapusBelakangDLLNC(nodeDLLNC* &headDLLNC){
    if(headDLLNC == nullptr){
        cout << "Linked list kosong";
        return;
    }
    if(headDLLNC->next == nullptr){
        delete headDLLNC;
        headDLLNC = nullptr;
        tailDLLNC = nullptr;
        return;
    }

    nodeDLLNC* temp = tailDLLNC;
    tailDLLNC = tailDLLNC->prev;
    tailDLLNC->next = nullptr;
    delete temp;
}

void cetakDLLNC(nodeDLLNC* headDLLNC){
    cout << "Linked list: ";
    nodeDLLNC* temp = headDLLNC;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}