bool deleteRow(vector<int> rowsToDelete, int i) {
	for (int m = 0; m < rowsToDelete.size(); m++) {
		if (i == rowsToDelete[m])
			return true;
	}
	return false;
}

bool deleteCol(vector<int> columnsToDelete, int i) {
	for (int m = 0; m < columnsToDelete.size(); m++) {
		if (i == columnsToDelete[m])
			return true;
	}
	return false;
}

std::vector<std::vector<int>> constructSubmatrix(std::vector<std::vector<int>> matrix, std::vector<int> rowsToDelete, std::vector<int> columnsToDelete) {
    	std::vector<std::vector<int>> temp;

	for (int i = 0; i < matrix.size(); i++) {
		vector<int> myRow;
		for (int j = 0; j < matrix[i].size(); j++) {
			if (deleteRow(rowsToDelete, i)) {
				// dont push
			} else {
				//push check col wise delete or not
				if (deleteCol(columnsToDelete, j)) {
					// dont push
				} else {
					//push
					myRow.push_back(matrix[i][j]);
				}
			}
		}
		if (myRow.size() > 0) {
			temp.push_back(myRow);
		}
	}

	for (int i = 0; i < temp.size(); i++) {
		for (int j = 0; j < temp[i].size(); j++) {
			cout << temp[i][j] << " ";
		}
		cout << endl;

	}
    return temp;

}
int main() {

	std::vector<std::vector<int>> matrix = { { 1, 0, 0, 2 }, { 0, 5, 0, 1 }, {
			0, 0, 3, 5 } };
	std::vector<int> rowsToDelete = { 0 };
	std::vector<int> columnsToDelete = { 0, 1 };
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;

	}
	constructSubmatrix(matrix, rowsToDelete, columnsToDelete);
	return 0;
}
