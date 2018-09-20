//============================================================================
// Author      : Ganesh
// EmailId     : ganeeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

#include <iostream>
using namespace std;


bool chekInOrder(string str) {

	int len = str.length();
	bool inOrder = true;

	//convert string to all upper case
	for (int i = 0; i < len; i++) {
		if (str[i] >= 97) {
			str[i] = str[i] - 32;
		}

	}

	//cout << str << endl;
	for (int i = 1; i < len; i++) {
		if (str[i] < str[i - 1]) {
			inOrder = false;
			break;
		}

	}

	return inOrder;
}
int main() {

	string str;
	cout<<"Enter a string "<<endl;
	cin>> str;
	cout << str << endl;
	cout << chekInOrder(str);

	return 0;
}
