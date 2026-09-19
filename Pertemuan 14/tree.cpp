#include <iostream>
using namespace std;

struct listNode{
    char val;
    listNode *next;
    listNode *prev;

    listNode(char x) : val(x), prev(nullptr), next(nullptr){}
};

int main(){
    listNode *head = new listNode('H'); // root
    head->prev = new listNode('A'); // child left
    head->next = new listNode('K'); // child right
    head->prev->next = new listNode('C'); // leaf right dari child left
    head->prev->prev = new listNode('B'); // leaf left dari child left
    head->next->next = new listNode('M'); // leaf right dari child right
    head->next->prev = new listNode('L'); // leaf left dari child right


    cout << "root: " << head->val << endl;
    cout << "child 1 (left): " << head->prev->val << endl;
    cout << "child 2 (right): " << head->next->val << endl;
    cout << "leaf kiri dari child 1: " << head->prev->prev->val << endl;
    cout << "leaf kanan dari child 1: " << head->prev->next->val << endl; 
    cout << "leaf kiri dari child 2: " << head->next->prev->val << endl; 
    cout << "leaf kanan dari child 2: " << head->next->next->val << endl; 

    return 0;
}