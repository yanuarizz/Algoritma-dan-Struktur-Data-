#include <iostream>

using namespace std;

int main()
{
    int umur[5];
    string nama[5];
    int tempu;
    string temp;
    

    cout << "input data array" << endl;
    for(int a=0;a<5;a++){
            cout << "masukkan nama  ke - " << a+1 << " = "; cin >> nama[a];
            cout << "masukkan umur  ke - " << a+1 << " = "; cin >> umur[a];
    }

    cout << "data belum urut" << endl;
    for(int a=0; a<5;a++){
        cout << nama[a] << " ";
        cout << umur[a] << " ";
        cout << endl;
    }
    cout << endl;

    cout << "\nmengurutkan data berdasarkan nama" << endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5-1;j++){
            if(nama[j]>nama[j+1]){
                temp=nama[j];
                nama[j]=nama[j+1];
                nama[j+1]=temp;
                tempu=umur[j];
                umur[j]=umur[j+1];
                umur[j+1]=tempu;
            }
        }
    }
    cout << endl;
    cout << "data sudah urut \n";
    for(int a=0; a<5; a++){
        cout << nama[a] << " ";
        cout << umur[a] << " ";
        cout << endl;
    }
    cout << endl;

        return 0;
}