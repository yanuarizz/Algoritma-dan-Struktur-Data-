#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int nilai;

public:
    Mahasiswa() {
        nama = "";
        nilai = 0;
    }

    Mahasiswa(string n, int v) {
        nama = n;
        nilai = v;
    }

    void setNama(string n) {
        nama = n;
    }

    void setNilai(int v) {
        nilai = v;
    }

    string getNama() {
        return nama;
    }

    int getNilai() {
        return nilai;
    }
};

class SortingMahasiswa {
private:
    Mahasiswa data[5];
    int jumlah;

public:
    SortingMahasiswa(Mahasiswa d[], int n) {
        jumlah = n;
        for (int i = 0; i < jumlah; i++) {
            data[i] = d[i];
        }
    }

    void bubbleSortAscending() {
        for (int i = 0; i < jumlah - 1; i++) {
            for (int j = 0; j < jumlah - i - 1; j++) {
                if (data[j].getNilai() > data[j + 1].getNilai()) {
                    Mahasiswa temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }
    }

    void tampilkan() {
        cout << "Data Mahasiswa Setelah Diurutkan:\n";
        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << data[i].getNama() << " -> " << data[i].getNilai() << endl;
        }
    }
};

int main() {
    Mahasiswa mhs[5] = {
        Mahasiswa("Andi", 78),
        Mahasiswa("Budi", 92),
        Mahasiswa("Cici", 85),
        Mahasiswa("Dina", 70),
        Mahasiswa("Evan", 88)
    };

    SortingMahasiswa sorting(mhs, 5);
    sorting.bubbleSortAscending();
    sorting.tampilkan();

    return 0;
}
