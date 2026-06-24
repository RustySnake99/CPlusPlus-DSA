#include<iostream>
#include<vector>

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

vector<int> bubble_sort(vector<int> x) {
	vector<int> result = x;
	int n = x.size();

	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (x[j] > x[j + 1]) swap(&x[j], &x[j + 1]);
		}
	return result;
}

int main() {
	int n;
	vector<int> arr;
	int temp;

	cout << "Enter the number of elements required: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "Enter element " << i << ": ";
		cin >> temp;
		arr.push_back(temp);
	}

	cout << "Entered array:\n";
	for (int i : arr) cout << i << "\t";
	
	arr = bubble_sort(arr);
	cout << "\nSorted array:\n";
	for (int i : arr) cout << i << "\t";

	return 0;
}
