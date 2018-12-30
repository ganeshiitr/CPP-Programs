//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//fp is function pointer which contains callback function address
void fill_Array(int arr[], int (*fp)(void)) {
	for (int i = 0; i < 10; i++) {
		//fp function pointer through which call back is executed
		arr[i] = fp();
	}
}

void show_Array(int arr[]) {
	for (int i = 0; i < 10; i++) {
		cout << " " << arr[i];
	}
}

//Callback function
//This function will be executed whenever randomvalue is needed
int getRandomValue(void) {
	return rand();
}
int main() {

	int arr[10] = { 0 };
	//pass callback functions address
	fill_Array(arr, getRandomValue);
	show_Array(arr);

}
