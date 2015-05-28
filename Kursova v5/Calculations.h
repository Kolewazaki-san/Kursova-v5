#pragma once
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Polygon.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;

// calculate Circles cirk and area
double jointCircleCircumference(vector<Circle> datCircles) {
	double jointCirc = 0;

	for (vector<Circle>::const_iterator it = datCircles.begin(); it != datCircles.end(); it++) {
		jointCirc += ((Circle)*it).getP();
	}

	return jointCirc;
}

double jointCircleArea(vector<Circle> datCircles) {
	double jointArea = 0;

	for (vector<Circle>::const_iterator it = datCircles.begin(); it != datCircles.end(); it++) {
		jointArea += ((Circle)*it).getS();
	}

	return jointArea;
}


// calculate Triangles cirk and area
double jointTriangleCircumference(vector<Triangle> datTriangles) {
	double jointCirc = 0;

	for (vector<Triangle>::const_iterator it = datTriangles.begin(); it != datTriangles.end(); it++) {
		jointCirc += ((Triangle)*it).getP();
	}

	return jointCirc;
}

double jointTriangleArea(vector<Triangle> datTriangles) {
	double jointArea = 0;

	for (vector<Triangle>::const_iterator it = datTriangles.begin(); it != datTriangles.end(); it++) {
		jointArea += ((Triangle)*it).getS();
	}

	return jointArea;
}


// calculate Rectangles cirk and area
double jointRectangleCircumference(vector<Rectangle> datRectangles) {
	double jointCirc = 0;

	for (vector<Rectangle>::const_iterator it = datRectangles.begin(); it != datRectangles.end(); it++) {
		jointCirc += ((Rectangle)*it).getP();
	}

	return jointCirc;
}

double jointRectangleArea(vector<Rectangle> datRectangles) {
	double jointArea = 0;

	for (vector<Rectangle>::const_iterator it = datRectangles.begin(); it != datRectangles.end(); it++) {
		jointArea += ((Rectangle)*it).getS();
	}

	return jointArea;
}


// calculate Polygon stuff
double jointPolygonCircumference(vector<Polygon> datPolygons) {
	double jointCirc = 0;

	for (vector<Polygon>::const_iterator it = datPolygons.begin(); it != datPolygons.end(); it++) {
		jointCirc += ((Polygon)*it).getP();
	}

	return jointCirc;
}

string jointPolygonArea(vector<Polygon> datPolygons) {
	double jointArea = 0;

	for (vector<Polygon>::const_iterator it = datPolygons.begin(); it != datPolygons.end(); it++) {
		jointArea += ((Polygon)*it).getS();
	}

	return "For calculating joined area, \nbuy the full version for only $199,99!";
}