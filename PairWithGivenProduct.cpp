//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<map>
map<int, bool> my_map;

bool pair_with_given_product(int arr[], int product, int arr_len) {
	for (int i = 0; i < arr_len; i++) {
		//insert all the elements in mymap
		my_map[arr[i]] = true;
	}
	map<int, bool>::iterator it;
	for (int i = 0; i < arr_len; i++) {
		it = my_map.find(product / arr[i]);
		if (it != my_map.end()) {
			return true;
		}
	}
	return false;
}

int main() {

	int arr[] = { 10, 70, 9, 30 };
	int product = 400;
	cout << "Exist/Not -- > "
			<< pair_with_given_product(arr, product, sizeof(arr) / sizeof(int));
}
