#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;

vector<int> counting_sort(vector<int> arr) {
    int max_val = *max_element(arr.begin(), arr.end());

    vector<int> count(max_val + 1, 0);

    for (int num : arr)
        count[num]++;

    vector<int> sorted;

    for (int i = 0; i <= max_val; i++) {
        while (count[i]--) {
            sorted.push_back(i);
        }
    }

    return sorted;
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
    
    cout << "\nSorted Array:\n";
    for (int i : counting_sort(x);) cout << i << "\t";

    return 0;
}