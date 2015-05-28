#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Circle : public Shape {
private:
	string type;
	string name;
	Point center;
	double P;
	double S;
	double r;

public:
	Circle() {
		type = "Circle";
	}

	Circle(string thatName, Point thatCenter, double thatR) {
		type = "Circle";
		name = thatName;
		center = thatCenter;
		r = thatR;
		P = 2*3.14*r;
		S = 3.14*pow(r, 2);
	}


	// getters and setters 
	string getType() {
		type = "Circle";
		return type;
	}
	string getName() {
		return name;
	}
	Point getCenter() {
		return center;
	}
	void setCenter(Circle obj) {
		center = obj.center;
	}
	double getR() {
		return r;
	}
	void setR(Circle obj) {
		r = obj.r;
	}
	double getP() {
		return P;
	}
	double getS() {
		return S;
	}


	// calculate circumference and area
	double perimeter() {
		P = 2*3.14*r;

		return P;
	}
	double area() {
		S = 3.14*pow(r, 2);

		return S;
	}


	// overriding operators
	bool operator< (Circle obj) {
		return name < obj.name ? 1:0 && S < obj.S ? 1:0;
	}

	bool operator== (Circle obj) {
		return name == obj.name ? 1:0 && S < obj.S ? 1:0;
	}

	friend ostream& operator<< (ostream& os, const Circle& obj);
	friend istream& operator>> (istream& is, Circle& obj);
};

ostream& operator<< (ostream& os, const Circle& obj) {
	os << "Type: " << obj.type << endl;
	os << "Name: " << obj.name << endl;
	os << "Center: " << obj.center << endl;
	os << "Radios: " << obj.r << endl;
	os << "Circumference: " << ((Circle)obj).perimeter() << endl;
	os << "Area: " << ((Circle)obj).area() << endl;

	return os;
}

istream& operator>> (istream& is, Circle& obj) {
	cout << "Type: " << obj.type << endl;
	cout << "Enter name: ";
	is >> obj.name;
	cout << "Enter center coordinates: " << endl;
	is >> obj.center;

	do {
		cout << "Enter radios: ";
		while(!(is >> obj.r)) {
			cout << "Radios value must be a real number!" << endl;
			cout << "Enter radios: ";
			is.clear();
			is.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		
		if (obj.r <= 0)
			cout << "Radios cannot be less or equals to 0!" << endl;
	} while (obj.r <= 0);

	return is;
}
