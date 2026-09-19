#ifndef DLL_circular_H
#define DLL_circular_H

struct nodeDLLC {
    int data;
    nodeDLLC* prev;
    nodeDLLC* next;
};
extern nodeDLLC *headDLLC;
extern nodeDLLC *tailDLLC;
extern nodeDLLC *curDLLC;
extern nodeDLLC *newNodeDLLC;
extern nodeDLLC *delDLLC;
extern nodeDLLC *afterNodeDLLC;

void tambahDepanDLLC(nodeDLLC* &headDLLC, int data);
void tambahBelakangDLLC(nodeDLLC* &tailDLLC, int dataakhir);
void tambahTengahDLLC(int datatengah, int posisi);
void HapusdepanDLLC();
void HapusBelakangDLLC();
void hapusTengahDLLC(int posisi);
void cetakDLLC();
#endif