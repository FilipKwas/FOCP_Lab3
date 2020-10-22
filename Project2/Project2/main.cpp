#include <iostream>
#include <cstdlib>

using namespace std;
// Define a struct
struct Point2D {
	double x;
	double y;
};

// INPUT ---> {????} ---> OUTPUT
//		{initialize struct}

Point2D create_point() {
	Point2D tmp;
	tmp.x = rand() % 10;
	tmp.y = rand() % 10;

	return tmp;
}

void initializa_in_place (Point2D& point) {
	point.x = rand() % 10;
	point.y = rand() % 10;
	cout << "Value of X: " << point.x << endl;
	cout << "Value of Y: " << point.y << endl;
}

int main() {
	
	Point2D mypoint = create_point();

	cout << "Value of X: " << mypoint.x << endl;
	cout << "Value of Y: " << mypoint.y << endl;

	Point2D empty_point = create_point();
	initializa_in_place(empty_point);
	
	cout << "Value of X: " << empty_point.y << endl;
	cout << "Value of Y: " << empty_point.y << endl;
	
	return 0;
}
