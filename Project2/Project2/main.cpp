#include <iostream>
#include <vector>
#include <array>

using namespace std;

struct Matrix2D {
	vector<vector<int>> contents;

	void print() {
		cout << "Contents of the matrix: " << endl;
		
		int rows = contents.size();
		int cols = contents[0].size();

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << contents[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main() {
	// A 3x3, B 3x3
	
	// Declare the matrices
	Matrix2D a;
	Matrix2D b;

	// Initialize the contents
	a.contents = { {1,2,3}, {4,5,6}, {7,8,9} };
	b.contents = { {9,8, 7}, {6,5,4}, {3,2,1} };

	a.print();
	b.print();


	return 0;
}