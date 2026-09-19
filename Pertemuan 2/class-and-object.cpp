#include <iostream>
using namespace std;

class Luas{
    public:
        int sisi;

        int persegi(int sisi){
            return sisi * sisi;
        }

};

Luas l;

int main(){
    int hasil;
    l.sisi = 5;
    hasil = l.persegi(l.sisi);
    cout << "Luas persegi: " << hasil << endl;

    return 0;
}