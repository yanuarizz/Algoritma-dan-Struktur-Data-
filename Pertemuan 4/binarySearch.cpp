#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> data = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 9;

    int hasil = binarySearch(data, target);

    if (hasil != -1) {
        cout << "Angka " << target << " ditemukan di indeks " << hasil << endl;
    } else {
        cout << "Angka " << target << " tidak ditemukan" << endl;
    }

    return 0;
}
