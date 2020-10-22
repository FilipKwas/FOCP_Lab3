#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>

using namespace std;

struct Point2D {
	double x;
	double y;
};

Point2D create_point() {
	Point2D tmp;
	tmp.x = rand() % 10;
	tmp.y = rand() % 10;

	return tmp;
}

float distance(Point2D left, Point2D right) {
	return sqrt(pow((right.x - left.x), 2) + pow((right.y - left.y), 2));

}

int main() {
	array<Point2D, 10> points;

	for (int i = 0; i < 10; i++) {
		points[i] = create_point();
		cout << "point [" << i << "] = (" << points[i].x << ", " << points[i].y << ")" << endl;
	}
	
	float largest_distance = 0.0;
	Point2D first;
	Point2D second;


	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			float d = distance(points[i], points[j]);
			if (d >= largest_distance) {
			largest_distance = d;
			first = points[i];
			second = points[j];
			}
		}
	}

	cout<< "The largest distance is: " << largest_distance << endl;
	cout << "Fiirst point: (" << first.x << first.y << ")" << endl;
	cout << "Second point: (" << second.x << second.y << ")" << endl;

	return 0;
}
