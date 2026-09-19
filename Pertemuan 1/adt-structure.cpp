#include <iostream>
using namespace std;

struct nilai{
    int x;
    int y;
};

int main(){
    nilai n1 = {10, 20};
    cout << "Nilai x: " << n1.x << endl;
    cout << "Nilai y: " << n1.y << endl;

    return 0;
}