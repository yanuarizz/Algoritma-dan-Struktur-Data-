#include <iostream>
#include <string>
using namespace std;

class identitas{
private:
    string nama;
    int umur;
    string asal_kota;
    string email;
    string nomerhp;
public:
    identitas(string n, int u, string a, string e, string no){
        nama=n;
        umur=u;
        asal_kota=a;
        email=e;
        nomerhp=no;
    }

    void cetak(){
        cout << "Nama: " << nama << endl;
        cout << "umur: " << umur << endl;
        cout << "asal kota: " << asal_kota << endl;
        cout << "Email: " << email << endl;
        cout << "Nomer hp: " << nomerhp << endl;
    }
};
int main(){
    identitas idObj1("Yannn", 18, "NYC", "yangood@yahoo.com", "081245678");
    idObj1.cetak();

    return 0;
}