#include<vector>
#include<utility>
#include<iostream>

using namespace std;

vector<int> selection_sort(vector<int> x) {
	vector<int> result = x;
	int n  = x.size();
	
	for (int i = 0; i < n - 1; i++) {
		int m = i;
		for (int j = i + 1; j < n; j++) {
			if (result[j] < result[m]) m = j;
		}
		swap(result[i], result[m]);
	}

	return result;
}

int main() {
	vector<int> arr;
	int n, temp;
	
	cout << "Enter the number of elements required: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cout << "Enter element " << i << ": ";
		cin >> temp;
		arr.push_back(temp);
	}
	
	cout << "\nEntered array:\n";
	for (int i : arr) cout << i << "\t";
	arr = selection_sort(arr);

	cout << "Sorted array:\n";
	for (int i : arr) cout << i << "\t";

	return 0;
}
