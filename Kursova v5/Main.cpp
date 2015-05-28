#include "ReadWrite.h"
#include "Calculations.h"
#include "Shape.h"
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Polygon.h"
//#include "Menu.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;


// search elements
Circle* searchCircle(vector<Circle> &myCircles, string datName) {
	for (int i = 0; i < myCircles.size(); i++) {
		if (datName == myCircles[i].getName()) {
			return &myCircles[i];
		}
	}

	return NULL;
}

Triangle* searchTriangle(vector<Triangle> &myTriangles, string datName) {
	for (int i = 0; i < myTriangles.size(); i++) {
		if (datName == myTriangles[i].getName()) {
			return &myTriangles[i];
		}
	}

	return NULL;
}

Rectangle* searchRectangle(vector<Rectangle> &myRectangles, string datName) {
	for (int i = 0; i < myRectangles.size(); i++) {
		if (datName == myRectangles[i].getName()) {
			return &myRectangles[i];
		}
	}

	return NULL;
}

Polygon* searchPolygon(vector<Polygon> &myPolygons, string datName) {
	for (int i = 0; i < myPolygons.size(); i++) {
		if (datName == myPolygons[i].getName()) {
			return &myPolygons[i];
		}
	}

	return NULL;
}


// delete shapes
void deleteCircle(vector<Circle> &myCircles, string datName) {
	for (int i = 0; i < myCircles.size(); i++) {
		if (datName == myCircles[i].getName()) {
			myCircles.erase(myCircles.begin()+i);
			cout << endl << "Circle removed!" << endl;
		}
	}
}

void deleteTriangle(vector<Triangle> &myTriangles, string datName) {
	for (int i = 0; i < myTriangles.size(); i++) {
		if (datName == myTriangles[i].getName()) {
			myTriangles.erase(myTriangles.begin()+i);
			cout << endl << "Triangle removed!" << endl;
		}
	}
}

void deleteRectangle(vector<Rectangle> &myRectangles, string datName) {
	for (int i = 0; i < myRectangles.size(); i++) {
		if (datName == myRectangles[i].getName()) {
			myRectangles.erase(myRectangles.begin()+i);
			cout << endl << "Rectangle removed!" << endl;
		}
	}
}

void deletePolygon(vector<Polygon> &myPolygons, string datName) {
	for (int i = 0; i < myPolygons.size(); i++) {
		if (datName == myPolygons[i].getName()) {
			myPolygons.erase(myPolygons.begin()+i);
			cout << endl << "Rectangle removed!" << endl;
		}
	}
}


// main
void main() {
	Point p1(-2, 4);
	Point p2(4, 5);
	Point p3(4, 1);
	Point p4(5, 9);
	Point p5(10, 15);
	Point p6(15, 13);

	// collectons of shapes
	vector<Polygon>		myPolygons;
	vector<Circle>		myCircles;
	vector<Triangle>	myTriangles;
	vector<Rectangle>	myRectangles;


	Polygon pp1("pp1", 4, p1, p2, p3, p4);
	Polygon pp2("pp2", 5, p1, p2, p3, p4, p5);
	Polygon pp3("pp2", 5, p3, p1, p6, p4, p5, p1, p2, p5);
	myPolygons.push_back(pp1);
	myPolygons.push_back(pp2);
	myPolygons.push_back(pp3);
	writePolygons("myPolygons.bin", myPolygons);

	Circle c1("cc1", p4, 5);
	Circle c2("cc2", p2, 3);
	Circle c3("cc3", p4, 5);
	myCircles.push_back(c1);
	myCircles.push_back(c2);
	myCircles.push_back(c3);
	writeCircles("myCircles.bin", myCircles);

	Triangle t1("tt1", p1, p2, p3);
	Triangle t2("tt2", p4, p2, p1);
	Triangle t3("tt3", p5, p1, p3);
	myTriangles.push_back(t1);
	myTriangles.push_back(t2);
	myTriangles.push_back(t3);
	writeTriangles("myTriangles.bin", myTriangles);

	Rectangle r1("rr1", p2, p5);
	Rectangle r2("rr2", p1, p3);
	Rectangle r3("rr3", p3, p4);
	myRectangles.push_back(r1);
	myRectangles.push_back(r2);
	myRectangles.push_back(r3);
	writeRectangles("myRectangles.bin", myRectangles);

	ostream_iterator <Circle> outC (cout, "\n");
	copy (myCircles.begin (), myCircles.end (), outC);
	cout << endl << "__________________________________\n\n";
	ostream_iterator <Triangle> outT (cout, "\n");
	copy (myTriangles.begin (), myTriangles.end (), outT);
	cout << endl << "__________________________________\n\n";
	ostream_iterator <Rectangle> outR (cout, "\n");
	copy (myRectangles.begin (), myRectangles.end (), outR);
	cout << endl << "__________________________________\n\n";
	ostream_iterator <Polygon> outP (cout, "\n");
	copy (myPolygons.begin (), myPolygons.end (), outP);
	cout << endl << "__________________________________\n\n";

	cout << endl << "Joint perimeter of all circles: " << jointCircleCircumference(myCircles);
	cout << endl << "Joint area of all circles: " << jointCircleArea(myCircles);
	cout << endl << "__________________________________\n\n";
	cout << endl << "Joint perimeter of all rectangles: " << jointRectangleCircumference(myRectangles);
	cout << endl << "Joint area of all rectangles: " << jointRectangleArea(myRectangles);
	cout << endl << "__________________________________\n\n";
	cout << endl << "Joint perimeter of all triangles: " << jointTriangleCircumference(myTriangles);
	cout << endl << "Joint area of all triangles: " << jointTriangleArea(myTriangles);
	cout << endl << "__________________________________\n\n";
	cout << endl << "Joint perimeter of all polygons: " << jointPolygonCircumference(myPolygons);
	cout << endl << "Joint area of all polygons: " << jointPolygonArea(myPolygons);
	cout << endl << "__________________________________\n\n";

	vector<Circle> myCircles2;
	readCircles("myCircles.bin", myCircles2);
	copy (myCircles2.begin (), myCircles2.end (), outC);
	cout << endl << "__________________________________\n\n";

	Circle *pointC = searchCircle(myCircles, "cc2");
	if (pointC != NULL) {
		cout << endl << *pointC;
	}
	else {
		cout << endl << "Circle not found!";
	}
	cout << endl << "__________________________________\n\n";

	Triangle *pointT = searchTriangle(myTriangles, "tt2");
	if (pointC != NULL) {
		cout << endl << *pointT;
	}
	else {
		cout << endl << "Circle not found!";
	}
	cout << endl << "__________________________________\n\n";

	Rectangle *pointR = searchRectangle(myRectangles, "rr2");
	if (pointC != NULL) {
		cout << endl << *pointR;
	}
	else {
		cout << endl << "Circle not found!";
	}



	cout << endl << "__________________________________\n\n";
	deleteCircle(myCircles, "cc2");
	copy (myCircles.begin (), myCircles.end (), outC);
	cout << endl << "__________________________________\n\n";
	deleteTriangle(myTriangles, "tt2");
	copy (myTriangles.begin (), myTriangles.end (), outT);
	cout << endl << "__________________________________\n\n";
	deleteRectangle(myRectangles, "rr2");
	copy (myRectangles.begin (), myRectangles.end (), outR);
	cout << endl << "__________________________________\n\n";
	deletePolygon(myPolygons, "pp2");
	copy (myPolygons.begin (), myPolygons.end (), outP);

	cout << endl << endl;
	system("pause");
}
