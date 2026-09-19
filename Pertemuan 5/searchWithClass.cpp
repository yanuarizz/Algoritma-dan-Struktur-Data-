#include <iostream>
using namespace std;

class Search {
private:
    int arr[10];
    int size;

public:
    Search(int data[], int n) {
        size = n;
        for (int i = 0; i < size; i++) {
            arr[i] = data[i];
        }
    }

    void printData() {
        cout << "Data: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int linearSearch(int key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    int binarySearch(int key) {
        int low = 0;
        int high = size - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    int data[10] = {3, 7, 9, 12, 15, 18, 21, 25, 30, 40};

    Search s(data, 10);

    s.printData();

    int key;
    cout << "Masukkan angka yang dicari: ";
    cin >> key;

    int hasilLinear = s.linearSearch(key);
    if (hasilLinear != -1) {
        cout << "Linear Search: data ditemukan pada indeks " << hasilLinear << endl;
    } else {
        cout << "Linear Search: data tidak ditemukan" << endl;
    }

    int hasilBinary = s.binarySearch(key);
    if (hasilBinary != -1) {
        cout << "Binary Search: data ditemukan pada indeks " << hasilBinary << endl;
    } else {
        cout << "Binary Search: data tidak ditemukan" << endl;
    }

    return 0;
}
