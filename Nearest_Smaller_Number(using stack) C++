//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void nearest_smaller_number_on_left(int arr[], int n) {

	int brr[6] = { 0 };
	stack<int> st;
	for (int i = 0; i < n; i++) {
		if (st.empty()) {
			st.push(arr[i]);
			brr[i] = 0;
		} else {
			if (arr[i] > st.top()) {
				brr[i] = st.top();
				st.push(arr[i]);
			} else {
				while (arr[i] < st.top()) {
					st.pop();
				}
				brr[i] = st.top();
				st.push(arr[i]);
			}

		}
	}
	for (int i = 0; i < n; i++) {
		cout << " " << brr[i];
	}

}
int main() {

	int arr[] = { 1, 3, 2, 5 };
	nearest_smaller_number_on_left(arr, sizeof(arr) / sizeof(int));

}
