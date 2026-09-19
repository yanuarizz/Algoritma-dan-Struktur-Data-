#include <iostream>
#include "SLL_non_circular.h"
#include "SLL_circular.h"
#include "DLL_non_circular.h"
#include "DLL_circular.h"
using namespace std;

int main(){

    string pilihUtama, pilih;
    while(true){
    cout << "Menu Utama: " << endl;
    cout << "[a] Single Linked List (Non Circular)\n";
    cout << "[b] Single Linked List (Circular)\n";
    cout << "[c] Double Linked List (Non Circular)\n";
    cout << "[d] Double Linked List (Circular)\n";
    cout << "[e] Selesai\n";
    cout << "Pilih menu: "; cin >> pilihUtama;

    if(pilihUtama == "a" || pilihUtama == "A"){
        cout << "Menu Single Linked List (Non Circular)" << endl;
        cout << "1. tambah depan\n";
        cout << "2. tambah belakng\n";
        cout << "3. tambah tengah\n";
        cout << "4. hapus depan\n";
        cout << "5. hapus belakang\n";
        cout << "6. hapus tengah\n";
        cout << "7. kembali ke menu utama\n";
        cout << "Pilih menu: ";cin >> pilih;
        while(pilih == "1" || pilih == "2" || pilih == "3" || pilih == "4" || pilih == "5" || pilih == "6" || pilih == "7"){
        if(pilih == "1"){
            cout << "Masukkan data yang ingin ditambahkan di depan: "; int databaru; cin >> databaru;
            tambahDepanSLLNC(headSLLNC, databaru);
        }
        else if(pilih == "2"){
            cout << "Masukkan data yang ingin ditambahkan di belakang: "; int databaru; cin >> databaru;
            tambahAkhirSLLNC(headSLLNC, databaru);
        }
        else if(pilih == "3"){
            cout << "Masukkan posisi setelah node yang ingin ditambahkan: "; int posisi; cin >> posisi;
            cout << "Masukkan data yang ingin ditambahkan di tengah: "; int newdata; cin >> newdata;
            tambahTengahSLLNC(headSLLNC,  newdata);
        }
        else if(pilih == "4"){
            HapusdepanSLLNC();
        }
        else if(pilih == "5"){
            HapusBelakangSLLNC();
        }
        else if(pilih == "6"){
            cout << "Masukkan nilai node yang ingin dihapus: "; int value; cin >> value;
            hapusTengahSLLNC(headSLLNC, value);
        }
        else if(pilih == "7"){
            break;
        }
        cetak();
        cout << " Pilih menu: ";cin >> pilih;
        }
    }
    else if(pilihUtama == "b" || pilihUtama == "B"){
        cout << "Menu Single Linked List (Circular)" << endl;
        cout << "1. tambah depan\n";
        cout << "2. tambah belakng\n";
        cout << "3. tambah tengah\n";
        cout << "4. hapus depan\n";
        cout << "5. hapus belakang\n";
        cout << "6. hapus tengah\n";
        cout << "7. kembali ke menu utama\n";
        cout << " Pilih menu: ";cin >> pilih;
        while(pilih == "1" || pilih == "2" || pilih == "3" || pilih == "4" || pilih == "5" || pilih == "6" || pilih == "7"){
        if(pilih == "1"){
            cout << "Masukkan data yang ingin ditambahkan di depan: "; int data; cin >> data;
            tambahDepanSLLC(headSLLC, data);
        }
        else if(pilih == "2"){
            cout << "Masukkan data yang ingin ditambahkan di belakang: "; int data; cin >> data;
            tambahBelakangSLLC(headSLLC, data);
        }
        else if(pilih == "3"){
            cout << "Masukkan posisi node yang ingin ditambahkan: "; int posisi; cin >> posisi;
            cout << "Masukkan data yang ingin ditambahkan di tengah: "; int dataTengahSLLC; cin >> dataTengahSLLC;
            tambahTengahSLLC(dataTengahSLLC, posisi);
        }
        else if(pilih == "4"){
            hapusDepanSLLC();
        }
        else if(pilih == "5"){
            hapusBelakangSLLC(headSLLC);
        }
        else if(pilih == "6"){
            cout << "Masukkan nilai node yang ingin dihapus: "; int value; cin >> value;
            hapusTengahSLLC(headSLLC, value);
        }
        else if(pilih == "7"){
            break;
        }
        cetakSLLC(headSLLC);
        cout << " Pilih menu: ";cin >> pilih;
        }
    }
    else if(pilihUtama == "c" || pilihUtama == "C"){
        cout << "Menu Double Linked List (Non Circular)" << endl;
        cout << "1. tambah depan\n";
        cout << "2. tambah belakng\n";
        cout << "3. tambah tengah\n";
        cout << "4. hapus depan\n";
        cout << "5. hapus belakang\n";
        cout << "6. hapus tengah\n";
        cout << "7. kembali ke menu utama\n";
        cout << " Pilih menu: ";cin >> pilih;
        while(pilih == "1" || pilih == "2" || pilih == "3" || pilih == "4" || pilih == "5" || pilih == "6" || pilih == "7"){
        if(pilih == "1"){
            cout << "Masukkan data yang ingin ditambahkan di depan: "; int dataawal; cin >> dataawal;
            TambahdepanDLLNC(dataawal);
        }
        else if(pilih == "2"){
            cout << "Masukkan data yang ingin ditambahkan di belakang: "; int dataakhir; cin >> dataakhir;
            TambahbelakangDLLNC(dataakhir);
        }
        else if(pilih == "3"){
            cout << "Masukkan posisi node yang ingin ditambahkan: "; int posisi; cin >> posisi;
            cout << "Masukkan data yang ingin ditambahkan di tengah: "; int dataTengahDLLNC; cin >> dataTengahDLLNC;
            tambahTengahDLLNC(dataTengahDLLNC, posisi);
        }
        else if(pilih == "4"){
            hapusDepanDLLNC(headDLLNC);
        }
        else if(pilih == "5"){
            hapusBelakangDLLNC(headDLLNC);
        }
        else if(pilih == "6"){
            cout << "Masukkan nilai node yang ingin dihapus: "; int value; cin >> value;
            hapusTengahDLLNC(value);
        }
        else if(pilih == "7"){
            break;
        }
        cetakDLLNC(headDLLNC);
        cout << " Pilih menu: ";cin >> pilih;
        }
    }
    else if(pilihUtama == "d" || pilihUtama == "D"){
        cout << "Menu Double Linked List (Circular)" << endl;
        cout << "1. tambah depan\n";
        cout << "2. tambah belakng\n";
        cout << "3. tambah tengah\n";
        cout << "4. hapus depan\n";
        cout << "5. hapus belakang\n";
        cout << "6. hapus tengah\n";
        cout << "7. kembali ke menu utama\n";
        cout << " Pilih menu: ";cin >> pilih;
        while(pilih == "1" || pilih == "2" || pilih == "3" || pilih == "4" || pilih == "5" || pilih == "6" || pilih == "7"){
        if(pilih == "1"){
            cout << "Masukkan data yang ingin ditambahkan di depan: "; int data; cin >> data;
            tambahDepanDLLC(headDLLC, data);
        }
        else if(pilih == "2"){
            cout << "Masukkan data yang ingin ditambahkan di belakang: "; int dataakhir; cin >> dataakhir;
            tambahBelakangDLLC(tailDLLC, dataakhir);
        }
        else if(pilih == "3"){
            cout << "Masukkan posisi node yang ingin ditambahkan: "; int posisi; cin >> posisi;
            cout << "Masukkan data yang ingin ditambahkan di tengah: "; int dataTengahDLLC; cin >> dataTengahDLLC;
            tambahTengahDLLC(dataTengahDLLC, posisi);
        }
        else if(pilih == "4"){
            HapusdepanDLLC();
        }
        else if(pilih == "5"){
            HapusBelakangDLLC();
        }
        else if(pilih == "6"){
            cout << "Masukkan posisi node yang ingin dihapus: "; int posisi; cin >> posisi;
            hapusTengahDLLC(posisi);
        }
        else if(pilih == "7"){
            break;
        }
        cetakDLLC();
        cout << " Pilih menu: ";cin >> pilih;
        }
    }
    else if(pilihUtama == "e" || pilihUtama == "E"){
        cout << "Terima kasih telah menggunakan program ini!" << endl;
        break;
    }
    else {
        cout << "\nPilihan anda tidak ada";
    }
}
return 0;
}