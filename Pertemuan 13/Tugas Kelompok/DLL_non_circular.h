#ifndef DLL_non_circular_H
#define DLL_non_circular_H

struct nodeDLLNC{
    int data;
    nodeDLLNC* prev;
    nodeDLLNC* next;
};
extern nodeDLLNC *headDLLNC;
extern nodeDLLNC *tailDLLNC;
extern nodeDLLNC *curDLLNC;
extern nodeDLLNC *newNodeDLLNC;
extern nodeDLLNC *delDLLNC;
extern nodeDLLNC *afterNodeDLLNC;

nodeDLLNC* buatNodeDLLNC(int data);
void TambahdepanDLLNC(int dataawal);
void TambahbelakangDLLNC(int dataakhir);
void tambahTengahDLLNC(int datatengah, int posisi);
void hapusTengahDLLNC(int posisi);
void hapusDepanDLLNC(nodeDLLNC* &headDLLNC);
void hapusBelakangDLLNC(nodeDLLNC* &headDLLNC);
void cetakDLLNC(nodeDLLNC* headDLLNC);

#endif