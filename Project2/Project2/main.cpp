#include <iostream>
#include <vector>
#include <array>

using namespace std;

struct Matrix2D {
	vector<vector<int>> contents;

	void add(Matrix2D other) {
		if (other.rows() == rows() && other.columns() == columns()) {
			
			for (int i = 0; i < rows(); i++) {
				for (int j = 0; j < columns(); j++) {
					contents[i][j] += other.contents[i][j];
				}
			}
		
		} else {
			cout << "Both matrices must have same number of rows!" << endl;
		}
	}

	int rows() {
		return contents.size();

	}

	int columns(){

		return contents[0].size();

	}


	void input_matrix() {
	
		int columns, rows;

		cout << "Number of rows: " << endl;
		cin >> rows;
		
		cout << "Number of columns: " << endl;
		cin >> columns;

		for (int i = 0; i < rows; i++) {
			vector<int> row;
			int tmp;
			cout << "Adding a row with " << columns << " columns";
			for (int j = 0; j < columns; j++) {
				cout << "Introduce value: " << endl;
				cin >> tmp;
				row.push_back(tmp);


			}
			contents.push_back(row);
		}
	}

	void print() {
		cout << "Contents of the matrix: " << endl;
		
		int rows = contents.size();
		int cols = contents[0].size();

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << contents[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main() {
	Matrix2D a, b;
	
	cout << "Intoduce data for matrix a: " << endl;
	
	a.input_matrix();
	
	cout << "Intoduce data for matrix b: " << endl;
	
	b.input_matrix();

	cout << "Print matrix a: " << endl;
	a.print();
	
	cout << "Print matrix b: " << endl;
	b.print();
	
	cout << "Adding b to a: " << endl;
	a.add(b);
	a.print();

	return 0;
}