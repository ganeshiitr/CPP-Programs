bool sudoku2(std::vector<std::vector<char>> grid) {
	int arr[10] = { };
	for (int i = 0; i < 9; i = i + 3) {
		for (int j = 0; j < 9; j = j + 3) {
			for (int k = i; k < i + 3; k++) {
				for (int l = j; l < j + 3; l++) {
					if (grid[k][l] != '.') {
						if (grid[k][l] - 48 == arr[grid[k][l] - 48]) {
							return false;
						} else {
							arr[grid[k][l] - 48] = grid[k][l] - 48;
						}
					}
				}
			}
			for (int i = 0; i < 10; i++)
				arr[i] = 0;
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int m = 0; m < 9; m++) {
			char num = grid[i][m];
			if (num != '.') {
				for (int j = m + 1; j < 9; j++) {
					if (grid[i][j] == num) {
						return false;
					}
				}
				for (int k = i + 1; k < 9; k++) {
					if (grid[k][m] == num) {
						return false;
					}

				}
			}
		}

	}
	return true;

}
