#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Triangle {
private:
	string type;
	string name;
	Point vertex[3];
	double S;
	double P;
	double a;
	double b;
	double c;

public:
	// constructors
	Triangle() {
		type = "Triangle";

	}
	Triangle(string datName, Point v1, Point v2, Point v3) {
		type = "Triangle";
		name = datName;
		vertex[0] = v1;
		vertex[1] = v2;
		vertex[2] = v3;

		Point sideCoords;
				
		sideCoords = vertex[1] - vertex[0];
		a = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		
		sideCoords = vertex[2] - vertex[1];
		b = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		sideCoords = vertex[0] - vertex[2];
		c = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		P = a + b + c;
		double temp;
		temp = P/2;
		S = sqrt(temp*(temp - a)*(temp - b)*(temp - c));
	}


	// gettesr and setters
	string getType() {
		type = "Triangle";
		return type;
	}
	string getName() {
		return name;
	}
	void setName(string thatName) {
		name = thatName;
	}
	Point* getVertex() {
		return vertex;
	}
	void setVertex(Point v1, Point v2, Point v3) {
		vertex[0] = v1;
		vertex[1] = v2;
		vertex[2] = v3;
	}
	double getA() {
		return a;
	}
	void setA(double datA) {
		a = datA;
	}
	double getB() {
		return b;
	}
	void setB(double datB) {
		b = datB;
	}
	double getC() {
		return c;
	}
	void setC(double datC) {
		c = datC;
	}
	double getS() {
		return S;
	}
	void setS(double datS) {
		S = datS;
	}
	double getP() {
		return P;
	}
	void setP(double datCirc) {
		P = datCirc;
	}


	// calculations
	double sideA() {
		Point sideCoords;				
		sideCoords = vertex[1] - vertex[0];
		a = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		return a;
	}
	double sideB() {
		Point sideCoords;
		sideCoords = vertex[2] - vertex[1];
		b = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		return b;
	}
	double sideC() {
		Point sideCoords;
		sideCoords = vertex[0] - vertex[2];
		c = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		return c;
	}

	double perimeter() {
		Point sideCoords;
				
		sideCoords = vertex[1] - vertex[0];
		a = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		
		sideCoords = vertex[2] - vertex[1];
		b = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		sideCoords = vertex[0] - vertex[2];
		c = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		P = a + b + c;

		return P;
	}
	double area() {
		double temp;
		Point sideCoords;
				
		sideCoords = vertex[1] - vertex[0];
		a = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		
		sideCoords = vertex[2] - vertex[1];
		b = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		sideCoords = vertex[0] - vertex[2];
		c = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		temp = perimeter()/2;
		S = sqrt(temp*(temp - a)*(temp - b)*(temp - c));

		return S;
	}

	// overriding operators
	bool operator< (Triangle obj) {
		return name < obj.name ? 1:0 && S < obj.S ? 1:0;
	}
	bool operator== (Triangle obj) {
		return name == obj.name ? 1:0 && S < obj.S ? 1:0;
	}

	friend ostream& operator<< (ostream& os, const Triangle& obj);
	friend istream& operator>> (istream& is, Triangle& obj);
};

ostream& operator<< (ostream& os, const Triangle& obj) {
	os << "Type: " << obj.type << endl;
	os << "Name: " << obj.name << endl;
	os << "Coordinates: ";

	for (int i = 0; i < 3; i++) {
		os << endl << "Vertex " << i+1 << ": ";
		os << obj.vertex[i];
	}

	os << endl;
	os << "Sides: " << ((Triangle)obj).sideA() << ", " << ((Triangle)obj).sideB() << ", " << ((Triangle)obj).sideC() << endl;
	os << "Circumference: " << ((Triangle)obj).perimeter() << endl;
	os << "Area: " << ((Triangle)obj).area() << endl;

	return os;
}

istream& operator>> (istream& is, Triangle& obj) {
	cout << "Type: " << obj.type << endl;
	cout << "Enter name: ";
	is >> obj.name;
	cout << "Vertex 1: " << endl;
	is >> obj.vertex[0];

	do {
		cout << "Vertex 2: " << endl;
		is >> obj.vertex[1];

		if (obj.vertex[1] == obj.vertex[0])
			cout << "Cooridnate of vertex must not be equals or less than the previous" << endl;
	} while (obj.vertex[1] == obj.vertex[0]);

	do {
		cout << "Vertex 3: " << endl;
		is >> obj.vertex[2];

		if (obj.vertex[2] == obj.vertex[1])
			cout << "Cooridnate of vertex must not be equals or less than the previous" << endl;
	} while (obj.vertex[2] == obj.vertex[1]);	

	return is;
} 