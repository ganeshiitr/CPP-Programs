//============================================================================
// Author      : Ganesh
// EmailId     : ganeeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check3SumZero(int arr[], int len) {
	bool flag = false;

	for (int i = 0; i <= len - 3; i++) {
		if (arr[i] + arr[i + 1] + arr[i + 2] == 0) {
			flag = true;
			break;
		}
	}
	return flag;
}

int main() {
	cout << "Enter Size of Array ";
	int n;
	cin >> n;
	int arr[n];


	if (n == 0 || n == 1 || n == 2)
		return false;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	/*cout << endl;

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	cout << endl;*/

	cout<< check3SumZero(arr,n);

	return 0;
}
