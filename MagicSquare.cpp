//============================================================================
// Name        : Practice.cpp
// Author      : Ganesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Find output for following code:

#include <iostream>
using namespace std;

class MagicSquare {
	int num;
	int arr[4][4];
public:
	MagicSquare() {
		num = 1;
		arr[0][0] = 16;
		arr[0][1] = 3;
		arr[0][2] = 2;
		arr[0][3] = 13;
		arr[1][0] = 5;
		arr[1][1] = 10;
		arr[1][2] = 11;
		arr[1][3] = 8;
		arr[2][0] = 9;
		arr[2][1] = 6;
		arr[2][2] = 7;
		arr[2][3] = 12;
		arr[3][0] = 4;
		arr[3][1] = 15;
		arr[3][2] = 14;
		arr[3][3] = 1;

	}
	void FindMagicSquare(int num) {
		arr[0][0] = 16 + num - 1;
		arr[0][1] = 3 + num - 1;
		arr[0][2] = 2 + num - 1;
		arr[0][3] = 13 + num - 1;
		arr[1][0] = 5 + num - 1;
		arr[1][1] = 10 + num - 1;
		arr[1][2] = 11 + num - 1;
		arr[1][3] = 8 + num - 1;
		arr[2][0] = 9 + num - 1;
		arr[2][1] = 6 + num - 1;
		arr[2][2] = 7 + num - 1;
		arr[2][3] = 12 + num - 1;
		arr[3][0] = 4 + num - 1;
		arr[3][1] = 15 + num - 1;
		arr[3][2] = 14 + num - 1;
		arr[3][3] = 1 + num - 1;

	}
	void DisplayMagicSquare() {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}

	void VerifyMagicSquare() {

		//Only Row & Col sum
		cout<<endl;
		//Row Sum
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum = 0;
			for (int j = 0; j < 4; j++) {
				sum = sum + arr[i][j];
			}
			cout << sum << " ";
		}

		cout<<endl;
		//Col Sum
		sum = 0;
		for (int i = 0; i < 4; i++) {
			sum = 0;
			for (int j = 0; j < 4; j++) {
				sum = sum + arr[j][i];
			}
			cout << sum << " ";

		}

	}
}
	;

	int main() {
		int num;
		cout << "Enter A Number: ";
		cin >> num;
		MagicSquare M;
		M.FindMagicSquare(num);
		M.DisplayMagicSquare();
		//M.VerifyMagicSquare();
		return 0;
	}
