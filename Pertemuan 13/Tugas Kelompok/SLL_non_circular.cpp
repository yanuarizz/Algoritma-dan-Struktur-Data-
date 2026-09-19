#include <iostream>
#include "SLL_non_circular.h" // menghubungkan ke header yang berisi deklarasi struct nodeSLLNC dan fungsi hapusTengah
using namespace std;

nodeSLLNC *headSLLNC = nullptr;
nodeSLLNC *tailSLLNC = nullptr;
nodeSLLNC *curSLLNC = nullptr;
nodeSLLNC *newNodeSLLNC = nullptr;
nodeSLLNC *delSLLNC = nullptr;
nodeSLLNC *afterNodeSLLNC = nullptr;

nodeSLLNC* buatNode(int databaru){
    nodeSLLNC* newnode = new nodeSLLNC;
    newnode->data = databaru;
    newnode->next = nullptr;
    return newnode;
}

void tambahDepanSLLNC(nodeSLLNC*& headSLLNC, int databaru){
    nodeSLLNC* newnode = buatNode(databaru);
    newnode->next = headSLLNC;
    headSLLNC = newnode;
}

void tambahAkhirSLLNC(nodeSLLNC*& headSLLNC, int databaru){
    nodeSLLNC* newnode = buatNode(databaru);
    if(headSLLNC == nullptr){
        headSLLNC = newnode;
        return;
    }
    nodeSLLNC* cur = headSLLNC;
    while(cur->next != nullptr){
        cur = cur->next;
    }
    cur->next = newnode;
}
void tambahTengahSLLNC(nodeSLLNC* node, int newdata){
    if(node == nullptr){
        cout << "Error: node tidak valid" << endl;
        return;
    }
    nodeSLLNC* newnode = buatNode(newdata);
    newnode->next = node->next;
    node->next = newnode;
}

void hapusTengahSLLNC(nodeSLLNC*& headSLLNC, int value){
    if(headSLLNC == nullptr){
        cout << "List kosong" << endl;
        return;
    }
    if(headSLLNC->data == value){
        nodeSLLNC* tmp = headSLLNC;
        headSLLNC = headSLLNC->next;
        delete tmp;
        return;
    }
    nodeSLLNC* prev = headSLLNC;
    while(prev->next != nullptr && prev->next->data != value){
        prev = prev->next;
    }
    if(prev->next != nullptr){
        nodeSLLNC* target = prev->next;
        prev->next = target->next;
        delete target;
    } else {
        cout << "Element dengan value " << value << " tidak ketemu" << endl;
    }
}

void HapusdepanSLLNC() {
    if (headSLLNC == NULL) {
        cout << "Single Link List belum dibuat" << endl;
    } else {
        delSLLNC = headSLLNC;
        headSLLNC = headSLLNC->next;
        delete delSLLNC;
    }
}
void HapusBelakangSLLNC(){
    if (headSLLNC==NULL){
        cout << "Single Link List belum dibuat" << endl;
    } else if (headSLLNC->next==NULL){
        delSLLNC=headSLLNC;
        headSLLNC=NULL;
        tailSLLNC   =NULL;
        delete delSLLNC;
    }else {
        curSLLNC = headSLLNC;
        while (curSLLNC->next->next !=NULL){
            curSLLNC=curSLLNC->next;
        }
        delSLLNC =curSLLNC->next;
        tailSLLNC=curSLLNC;
        tailSLLNC->next=NULL;
        delete delSLLNC;
    }
}

void cetak(){
    nodeSLLNC* temp=headSLLNC;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}