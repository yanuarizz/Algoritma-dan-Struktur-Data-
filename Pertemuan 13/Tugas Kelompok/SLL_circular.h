#ifndef SLL_circular_H
#define SLL_circular_H

struct nodeSLLC
{
    int data;
    nodeSLLC* next;
};
extern nodeSLLC *headSLLC;
extern nodeSLLC *tailSLLC;
extern nodeSLLC *curSLLC;
extern nodeSLLC *newNodeSLLC;
extern nodeSLLC *delSLLC;
extern nodeSLLC *afterNodeSLLC;

nodeSLLC* buatNodeSLLNC(int newdata);
void tambahDepanSLLC(nodeSLLC* &headSLLC, int newdata);
void tambahBelakangSLLC(nodeSLLC* &headSLLC, int newdata);
void tambahTengahSLLC(int dataTengahSLLC, int posisi);
void hapusTengahSLLC(nodeSLLC* &headSLLC, int posisi);
void hapusDepanSLLC();
void hapusBelakangSLLC(nodeSLLC* &headSLLC);
void cetakSLLC(nodeSLLC* headSLLC);

#endif