#include <iostream>
using namespace std;

class CetakNilai {
private:
    int X, Y, Z;

public:
    CetakNilai(int x, int y, int z) {
        X = x;
        Y = y;
        Z = z;

        cout << "Nilai X : " << X << endl;
        cout << "Nilai Y : " << Y << endl;
        cout << "Nilai Z : " << Z << endl;
    }

    int CetakX() {
        return X;
    }

    int CetakY() {
        return Y;
    }

    int CetakZ() {
        return Z;
    }

    void JumlahXYZ() {
        int total = CetakX() + CetakY() + CetakZ();
        cout << "Jumlah X + Y + Z : " << total << endl;
    }
};

int main() {
    CetakNilai nilai(10, 20, 30);
    nilai.JumlahXYZ();

    return 0;
}
