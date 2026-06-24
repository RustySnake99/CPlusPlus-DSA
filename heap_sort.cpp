#include <vector>
#include<iostream>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(vector<int>& arr) {
    int n = arr.size();

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
    heap_sort(x, 0, x.size() - 1);

    cout << "\nSorted Array:\n";
    for (int i : x) cout << i << "\t";

    return 0;
}