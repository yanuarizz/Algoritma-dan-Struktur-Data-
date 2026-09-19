#include <iostream>
using namespace std;

class cetak{
    public:
    int x;

    cetak() //default constructor
    {
        cout << "Hello World" << endl;
    }
    cetak(int nilai) //parameterized constructor
    {
        x = nilai;
    }
};

int main(){
    cetak c1; //memanggil default constructor
    cetak c2(10); //memanggil parameterized constructor
    cout << "Nilai x: " << c2.x << endl;

    return 0;
}