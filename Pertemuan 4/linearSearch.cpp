#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data[] = {12, 45, 7, 89, 34, 21};
    int ukuran = sizeof(data) / sizeof(data[0]);
    int cari = 34;

    int hasil = linearSearch(data, ukuran, cari);

    if (hasil != -1) {
        cout << "Angka " << cari << " ditemukan pada index " << hasil << endl;
    } else {
        cout << "Angka " << cari << " tidak ditemukan" << endl;
    }

    return 0;
}
