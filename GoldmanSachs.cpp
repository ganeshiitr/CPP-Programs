//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
/&Given a matrix consisting of only zeroes and ones.Cell containing 1 is available for connection and cell with 0 is not. 
The task is to find how many number of unique connections that can be made with adjacent cells (on all 8 sides).
e.g., 1, 0, 0, 1,
      0, 1, 1, 1, 
      1, 0, 0, 1
      
The answer for above matrix is 8 */
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//map<int, int> mp;

int main() {
	int count = 0;
	const int row = 3;
	const int col = 4;
	int arr[row][col] = { 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == 1) {
				//cout << " " << i << " " << j << "---->";
				if ((j - 1) >= 0) {
					//cout << "1";
					if (arr[i][j - 1] == 1) {
						count++;
					}
				}
				if ((j - 1) >= 0 && (i - 1) >= 0) {
					//cout << "2";
					if (arr[i - 1][j - 1] == 1) {
						count++;
					}
				}
				if ((i - 1) >= 0) {
					//cout << "3";
					if (arr[i - 1][j] == 1) {
						count++;
					}
				}
				if ((i - 1) >= 0 && (j + 1) >= 0 && (j + 1) < col) {
					//cout << "4";
					if (arr[i - 1][j + 1] == 1) {
						count++;
					}
				}
				if ((j + 1) >= 0 && (j + 1) < col) {
					//cout << "5";
					if (arr[i][j + 1] == 1) {
						count++;
					}
				}
				if ((j + 1) >= 0 && (i + 1) >= 0 && (j + 1) < col
						&& (i + 1) < row) {
					//cout << "6";
					if (arr[i + 1][j + 1] == 1) {
						count++;
					}
				}
				if ((i + 1) >= 0 && (i + 1) < row) {
					//cout << "7";
					if (arr[i + 1][j] == 1) {
						count++;
					}
				}
				if ((i + 1) >= 0 && (j - 1) >= 0 && (i + 1) < row) {
					//cout << "8";
					if (arr[i + 1][j - 1] == 1) {
						count++;
					}
				}

			}
		}
	}
	cout << count / 2 << endl;

}
