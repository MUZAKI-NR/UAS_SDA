#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> binarySearchIndices(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    vector<int> indices;

    for (int i = 1; i <= arr.size(); i++) {
        if (arr[i] == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    vector<int> arr = {0, 19, 40, 10, 90, 2, 50, 60, 50, 1};
    int target;

    cout << "Array: ";
    for (int i = 1; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    while (true) {
        cout << "\nInput: ";
        cin >> target;

        vector<int> indices = binarySearchIndices(arr, target);

        if (indices.empty()) {
            cout << "Output: Angka " << target << " tidak ada dalam array" << endl;
        } else {
            cout << "Output: Angka " << target << " ada di indeks ke ";
            for (int i = 0; i < indices.size(); i++) {
                cout << indices[i];
                if (i < indices.size() - 1) {
                    cout << " dan ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

