#include <iostream>
using namespace std;

int main(){

    int i=15, *p, *q;
    p = &i;
    *p = 20;

    cout << "Nilai i: " << i << endl;
    return 0;
}