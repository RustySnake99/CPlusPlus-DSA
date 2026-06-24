#include <vector>
#include<iostream>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}

int main() {
    vector<int> x;
    int n, t;
    
    cout << "Enter the number of elements required: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i << ": ";
        cin >> t;
        x.push_back(t);
    }

    cout << "\nEntered array:\n";
    for (int i : x) cout << i << "\t";
    quick_sort(x, 0, x.size() - 1);

    cout << "\nSorted Array:\n";
    for (int i : x) cout << i << "\t";

    return 0;
}