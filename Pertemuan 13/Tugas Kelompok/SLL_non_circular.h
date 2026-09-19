#ifndef SLL_non_circular_H
#define SLL_non_circular_H

struct nodeSLLNC
{
    int data;
    nodeSLLNC* next;
};
extern nodeSLLNC *headSLLNC;
extern nodeSLLNC *tailSLLNC;
extern nodeSLLNC *curSLLNC;
extern nodeSLLNC *newNodeSLLNC;
extern nodeSLLNC *delSLLNC;
extern nodeSLLNC *afterNodeSLLNC;

nodeSLLNC* buatNode(int databaru);
void tambahDepanSLLNC(nodeSLLNC* &headSLLNC, int databaru);
void tambahAkhirSLLNC(nodeSLLNC* &headSLLNC, int databaru);
void tambahTengahSLLNC(nodeSLLNC* node, int newdata);
void hapusTengahSLLNC(nodeSLLNC* &headSLLNC, int value);
void HapusdepanSLLNC();
void HapusBelakangSLLNC();
void cetak();

#endif
