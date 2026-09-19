#include <iostream>
using namespace std;

class cetaknilai{

    public:
        int x, y, z;

};

int main(){
    cetaknilai c1;
    c1.x = 10;
    c1.y = 20;
    c1.z = 30;

    cout << "Nilai x: " << c1.x << endl;
    cout << "Nilai y: " << c1.y << endl;
    cout << "Nilai z: " << c1.z << endl;

    return 0;
}