#include <vector>
#include<iostream>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= right)
        temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

void merge_sort(vector<int> arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
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
    x = merge_sort(x, 0, x.size() - 1);

    cout << "\nSorted Array:\n";
    for (int i : x) cout << i << "\t";

    return 0;
}