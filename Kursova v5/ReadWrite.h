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


// clear file content
void clearFile(string fileName) {
	ofstream file (fileName, ios::out|ios::binary|ios::trunc);
	file << "";
	file.close();
}


// read and write Circles
vector<Circle> readCircles(string fileName, vector<Circle> &myCircles) {
	ifstream file (fileName, ios::in|ios::binary);		
	Circle *obj = new Circle();
	
	if (file.is_open()) {
		while (!file.eof()) {
			file.read((char*)obj, sizeof(*obj));	
			myCircles.push_back(*obj);
		}
	}
	else {
		cout << "File not found!";
	}

	file.close();
	return myCircles;
}

void writeCircle(string fileName, Circle obj) {
	ofstream file (fileName, ios::out|ios::binary|ios::app);

	if (file.is_open()) {
		file.write((char*)&obj, sizeof(obj));
	}
	else {
		cout << "File not found!";
	}

	file.close();
}

void writeCircles(string fileName, vector<Circle> myCircles) {	
	for (vector<Circle>::const_iterator it = myCircles.begin(); it != myCircles.end(); it++) {
		writeCircle(fileName, *it);
	}
}


// read and write Triangles
vector<Triangle> readTriangles(string fileName, vector<Triangle> &myTriangles) {
	ifstream file (fileName, ios::in|ios::binary);		
	Triangle *obj = new Triangle();
	
	if (file.is_open()) {
		file.read((char*)obj, sizeof(*obj));	
		myTriangles.push_back(*obj);
	}
	else {
		cout << "File not found!";
	}

		file.close();
		return myTriangles;
}

void writeTriangle(string fileName, Triangle obj) {
	ofstream file (fileName, ios::out|ios::binary|ios::app);

	if (file.is_open()) {
		file.write((char*)&obj, sizeof(obj));
	}
	else {
		cout << "File not found!";
	}

	file.close();
}

void writeTriangles(string fileName, vector<Triangle> myTriangles) {		
	for (vector<Triangle>::const_iterator it = myTriangles.begin(); it != myTriangles.end(); it++) {
		writeTriangle(fileName, *it);
	}
}


// read and write Rectangles
vector<Rectangle> readRectangles(string fileName, vector<Rectangle> &myRectangles) {
	ifstream file (fileName, ios::in|ios::binary);		
	Rectangle *obj = new Rectangle();
	
	if (file.is_open()) {
		file.read((char*)obj, sizeof(*obj));	
		myRectangles.push_back(*obj);
	}
	else {
		cout << "File not found!";
	}

	file.close();
	return myRectangles;
}

void writeRectangle(string fileName, Rectangle obj) {
	ofstream file (fileName, ios::out|ios::binary|ios::app);

	if (file.is_open()) {
		file.write((char*)&obj, sizeof(obj));
	}
	else {
		cout << "File not found!";
	}

	file.close();
}

void writeRectangles(string fileName, vector<Rectangle> myRectangles) {		
	for (vector<Rectangle>::const_iterator it = myRectangles.begin(); it != myRectangles.end(); it++) {
		writeRectangle(fileName, *it);
	}
}


// read and write Polygons
vector<Polygon> readPolygons(string fileName, vector<Polygon> &myPolygons) {
	ifstream file (fileName, ios::in|ios::binary);		
	Polygon *obj = new Polygon();
	
	if (file.is_open()) {
		file.read((char*)obj, sizeof(*obj));	
		myPolygons.push_back(*obj);
	}
	else {
		cout << "File not found!";
	}

	file.close();
	return myPolygons;
}

void writePolygon(string fileName, Polygon obj) {
	ofstream file (fileName, ios::out|ios::binary|ios::app);

	if (file.is_open()) {
		file.write((char*)&obj, sizeof(obj));
	}
	else {
		cout << "File not found!";
	}

	file.close();
}

void writePolygons(string fileName, vector<Polygon> myPolygons) {		
	for (vector<Polygon>::const_iterator it = myPolygons.begin(); it != myPolygons.end(); it++) {
		writePolygon(fileName, *it);
	}
}