//#pragma once
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//class Ellipse {
//private:
//	string type;
//	string name;
//	Point center;
//	double P;
//	double S;
//	double rX;
//	double rY;
//
//public:
//	Ellipse() {
//		type = "Ellipse";
//	}
//
//	Ellipse(string thatName, Point thatCenter, double thatRx, double datRy) {
//		type = "Ellipse";
//		name = thatName;
//		center = thatCenter;
//		rX = thatRx;
//		rY = datRy;
//		P = 2*3.14*sqrt((pow(rX, 2) + pow(rY, 2))/2);
//		S = 3.14*rX*rY;
//	}
//
//
//	// getters and setters 
//	string getType() {
//		type = "Circle";
//		return type;
//	}
//	string getName() {
//		return name;
//	}
//	Point getCenter() {
//		return center;
//	}
//	void setCenter(Ellipse obj) {
//		center = obj.center;
//	}
//	double getRx() {
//		return rX;
//	}
//	void setRx(double rx) {
//		rX = rx;
//	}
//	void setRy(double ry) {
//		rY = ry;
//	}
//	double getP() {
//		return P;
//	}
//	double getS() {
//		return S;
//	}
//	void setName(string n) {
//		name = n;
//	}
//
//
//
//
//	// calculate circumference and area
//	double circumference() {
//		P = 2*3.14*sqrt((pow(rX, 2) + pow(rY, 2))/2);
//
//		return P;
//	}
//	double area() {
//		S = 3.14*rX*rY;
//
//		return S;
//	}
//
//
//	// overriding operators
//	bool operator< (Ellipse obj) {
//		return name < obj.name ? 1:0 && S < obj.S ? 1:0;
//	}
//
//	bool operator== (Ellipse obj) {
//		return name == obj.name ? 1:0 && S < obj.S ? 1:0;
//	}
//
//	friend ostream& operator<< (ostream& os, const Ellipse& obj);
//	friend istream& operator>> (istream& is, Ellipse& obj);
//};
//
//ostream& operator<< (ostream& os, const Ellipse& obj) {
//	os << "Type: " << obj.type << endl;
//	os << "Name: " << obj.name << endl;
//	os << "Center: " << obj.center << endl;
//	os << "Radios: " << obj.rX << ", " << obj.rY << endl;
//	os << "Circumference: " << ((Ellipse)obj).circumference() << endl;
//	os << "Area: " << ((Ellipse)obj).area() << endl;
//
//	return os;
//}
//
//istream& operator>> (istream& is, Ellipse& obj) {
//	cout << "Type: " << obj.type << endl;
//	cout << "Enter name: ";
//	is >> obj.name;
//	cout << "Enter center coordinates: " << endl;
//	is >> obj.center;
//
//	do {
//		cout << "Enter radios 1: ";
//		while(!(is >> obj.rX)) {
//			cout << "Radios value must be a real number!" << endl;
//			cout << "Enter radios: ";
//			is.clear();
//			is.ignore(numeric_limits<streamsize>::max(), '\n');
//		}
//		
//		if (obj.rX <= 0)
//			cout << "Radios cannot be less or equals to 0!" << endl;
//	} while (obj.rX <= 0);
//
//	do {
//		cout << "Enter radios 2: ";
//		while(!(is >> obj.rY)) {
//			cout << "Radios value must be a real number!" << endl;
//			cout << "Enter radios: ";
//			is.clear();
//			is.ignore(numeric_limits<streamsize>::max(), '\n');
//		}
//		
//		if (obj.rY <= 0)
//			cout << "Radios cannot be less or equals to 0!" << endl;
//	} while (obj.rY <= 0);
//
//	return is;
//}
