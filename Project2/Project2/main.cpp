#include <array>
#include <iostream>

using namespace std;
// Define a struct
struct Point2D {
	double x;
	double y;
};

int main() {
	// Deckare a varuabke with our struct
	Point2D mypoint; 
		
	mypoint.x = 3.3;
	mypoint.y = 5.5;
		// Print its content
		cout << "Value of X: " << mypoint.y << endl;
		cout << "Value of Y: " << mypoint.y << endl;




	return 0;
}
