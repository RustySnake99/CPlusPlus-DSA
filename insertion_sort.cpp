#include<vector>
#include<iostream>

using namespace std;

vector<int> insertion_sort(vector<int> x) {
	vector<int> result = x;
	int n = result.size();

	for (int i = 1; i < n; i++) {
		int k = result[i];
		int j = i - 1;

		while (j >= 0 && result[j] > k) {
			result[j + 1] = result[j];
			j--;
		}
		result[j + 1] = k;
	}

	return result;
}

int main() {
	vector<int> arr;
	int n, t;

	cout << "Enter the number of elements required: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Enter element " << i << ": ";
		cin >> t;
		arr.push_back(t);
	}
	
	cout << "\nEntered array:\n";
	for (int i : arr) cout << i << "\t";
	arr = insertion_sort(arr);
	
	cout << "\nSorted Array:\n";
	for (int i : arr) cout << i << "\t";

	return 0;
}
