#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Rectangle : public Shape {
private:
	string type;
	string name;
	Point topL;
	Point botR;
	double S;
	double P;
	double a;
	double b;

public:
	// constructors
	Rectangle() {
		type = "Rectangle";
		a = abs(topL.getY() - botR.getY());
		b = abs(topL.getX() - botR.getX());
		P = 2*a + 2*b;
		S = a*b;
	}
	Rectangle(string datName, Point p1, Point p2) {
		type = "Rectangle";
		name = datName;
		topL = p1;
		botR = p2;
		a = abs(topL.getY() - botR.getY());
		b = abs(topL.getX() - botR.getX());
		P = 2*a + 2*b;
		S = a*b;
	}


	// getters and setters
	string getType() {
		return "Rectangle";
	}
	string getName() {
		return name;
	}
	Point getTop() {
		return topL;
	}
	Point getBot() {
		return botR;
	}
	double getP() {
		return P;
	}
	double getS() {
		return S;
	}
	double getA() {
		return a;
	}
	double getB () {
		return b;
	}
	void setName(string datName) {
		name = datName;
	}
	void setTop(Point p) {
		topL = p;
	}
	void setBot(Point p) {
		botR = p;
	}
	double setA(Point p1, Point p2) {
		return abs(topL.getY() - botR.getY());
	}
	double setB(Point p1, Point p2) {
		return abs(topL.getX() - botR.getX());
	}
	

	// calculations
	double sideA() {		
		a = abs(topL.getY() - botR.getY());
		return a;
	}
	double sideB() {
		b = abs(topL.getX() - botR.getX());
		return b;
	}
	double perimeter() {
		a = abs(topL.getY() - botR.getY());
		b = abs(topL.getX() - botR.getX());
		P = 2*a + 2*b;
		return P;
	}
	double area() {
		a = abs(topL.getY() - botR.getY());
		b = abs(topL.getX() - botR.getX());
		S = a*b;
		return S;
	}


	// operators
	bool operator< (Rectangle obj) {
		return name < obj.name ? 1:0 && S < obj.S ? 1:0;
	}

	bool operator== (Rectangle obj) {
		return name == obj.name ? 1:0 && S < obj.S ? 1:0;
	}

	friend ostream& operator<< (ostream& os, const Rectangle& obj);
	friend istream& operator>> (istream& is, Rectangle& obj);
};

ostream& operator<< (ostream& os, const Rectangle& obj) {
	os << "Type: " << obj.type << endl;
	os << "Name: " << obj.name << endl;
	os << "Top left corner: " << obj.topL << endl;
	os << "Bottom right corner: " << obj.botR << endl;
	os << "Sides: " << ((Rectangle)obj).sideA() << ", " << ((Rectangle)obj).sideB() << endl;
	os << "Circumference: " << ((Rectangle)obj).perimeter() << endl;
	os << "Area: " << ((Rectangle)obj).area() << endl;

	return os;
}

istream& operator>> (istream& is, Rectangle& obj) {
	string datName; Point p1; Point p2;
	cout << "Type: " << obj.type << endl;
	cout << "Enter name: ";
	is >> obj.name;
	cout << "Enter top left corner: " << endl;
	is >> obj.topL;

	do {
		cout << "Enter bottom rifgt corner: " << endl;
		is >> obj.botR;

		if (obj.botR == obj.topL)
			cout << "Bottom right corner coordinates cannot match or be less than top left!" << endl;
	} while (obj.botR == obj.topL);

	return is;
} 