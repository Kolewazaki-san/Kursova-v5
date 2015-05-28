#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point {
private:
	int xCoord;
	int yCoord;

public:
	// constructors
	Point() {
		xCoord = 0;
		yCoord = 0;
	}
	Point(int x, int y) {
		xCoord = x;
		yCoord = y;
	}


	// getters and setters
	int getX() {
		return xCoord;
	}
	int getY() {
		return yCoord;
	}
	void setX(int x) {
		xCoord = x;
	}
	void setY(int y) {
		yCoord = y;
	}


	// overriding operators
	Point operator+ (Point obj) {
		Point temp;
					
		temp.xCoord = xCoord + obj.xCoord;
		temp.yCoord = yCoord + obj.yCoord;

		return temp;
	}
	Point operator- (Point obj) {
		Point temp;
					
		temp.xCoord = xCoord - obj.xCoord;
		temp.yCoord = yCoord - obj.yCoord;

		return temp;
	}
	Point operator= (Point obj) {
		xCoord = obj.xCoord;
		yCoord = obj.yCoord;

		return *this; 
	}
	bool operator== (Point obj) {
		return (xCoord == obj.xCoord) && (yCoord == obj.yCoord);
	}
	bool operator< (Point obj) {
		return (xCoord < obj.xCoord) && (yCoord < obj.yCoord);
	}
	bool operator<= (Point obj) {
		return (xCoord <= obj.xCoord) && (yCoord <= obj.yCoord);
	}
	bool operator> (Point obj) {
		return (xCoord > obj.xCoord) && (yCoord > obj.yCoord);
	}
	bool operator>= (Point obj) {
		return (xCoord >= obj.xCoord) && (yCoord >= obj.yCoord);
	}

	friend ostream& operator<< (ostream& os, const Point& obj);
	friend istream& operator>> (istream& is, Point& obj);
};

ostream& operator<< (ostream& os, const Point& obj) {
	os << endl << "x: " << obj.xCoord;
	os << endl << "y: " << obj.yCoord;

	return os;
}

istream& operator>> (istream& is, Point& obj) {
	cout << "Enter x: ";
	while (!(is >> obj.xCoord)) {
		cout << "X coordinate must be integer!" << endl;
		cout << "Enter x: ";
		is.clear();
		is.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "Enter y: ";
	while(!(is >> obj.yCoord)) {
		cout << "Y coordinate must be integer!" << endl;
		cout << "Enter y: ";
		is.clear();
		is.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return is;
}

