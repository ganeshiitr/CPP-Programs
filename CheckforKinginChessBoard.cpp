//============================================================================
// Author      : Ganesh
// EmailId     : ganeshiitrcse@gmail.com
// City        : Bhopal
//============================================================================

/*
 * You are presented with an 8 by 8 matrix representing the positions of pieces on a chess board.
 * The only pieces on the board are the black king and various white pieces. Given this matrix,
 *  determine whether the king is in check
 *  ...K....
........
.B......
......P.
.......R
..N.....
........
.....Q..
You should return True, since the bishop is attacking the king diagonally
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ROW 8
#define COL 8

bool check_by_rook(char arr[ROW][COL], int i, int j) {
	for (int k = 0; k < COL; k++) {
		if (arr[i][k] == 'R') {
			return true;
		}
	}
	for (int k = 0; k < ROW; k++) {
		if (arr[k][j] == 'R') {
			return true;
		}
	}
	return false;
}
void find_king_position(char arr[ROW][COL], int *p, int *q) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (arr[i][j] == 'K') {
				*p = i;
				*q = j;
				return;
			}
		}
	}

}
bool check_by_pawn(char arr[ROW][COL], int i, int j) {

	if (i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == 'P') {
		return true;
	}
	if (i + 1 >= 0 && j - 1 >= 0 && arr[i + 1][j - 1] == 'P') {
		return true;
	}
	if (i - 1 >= 0 && j + 1 >= 0 && arr[i - 1][j + 1] == 'P') {
		return true;
	}
	if (i + 1 >= 0 && j + 1 >= 0 && arr[i + 1][j + 1] == 'P') {
		return true;
	}
	return false;

}

int main() {
	char chessBoard[ROW][COL] = { { '-', '-', 'P', 'K', '-', '-', '-', '-' }, {
			'-', '-', '-', '-', 'P', '-', '-', '-' }, { '-', '-', '-', '-', '-',
			'-', '-', '-' }, { '-', '-', '-', '-', '-', '-', '-', '-' }, { '-',
			'-', '-', '-', '-', '-', '-', '-' }, { '-', '-', '-', '-', '-', '-',
			'-', '-' }, { '-', '-', '-', '-', '-', '-', '-', '-' }, { '-', '-',
			'-', '-', '-', '-', '-', '-' } };
	int king_i;
	int king_j;
	find_king_position(chessBoard, &king_i, &king_j);
	cout << king_i << " " << king_j << endl;
	if (check_by_rook(chessBoard, king_i, king_j))
		cout << "Check True \n";
	else if (check_by_pawn(chessBoard, king_i, king_j))
		cout << "Check True \n";
	else
		cout << "Check False \n";
}
