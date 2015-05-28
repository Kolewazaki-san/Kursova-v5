#pragma once
#include "Shape.h"
#include "Point.h"
#include <iostream>
#include <stdarg.h> 
#include <vector>
#include <iterator>
#include <string>
#include <cmath>
using namespace std;

class Polygon : public Shape {
private:
	string type;
	string name;
	vector<Point> vertex;
	double side[8];
	int size;
	double P;
	double S;

	void addVertex();

public:
	Polygon() {
		type = "Polygon";
		P = 0;
		S = 0;
	}
	Polygon(string thatName, int thatSize, Point p1, Point p2, Point p3) {
		type = "Polygon";
		name = thatName;
		size = thatSize;	
		P = 0;
		
		vertex.push_back(p1);
		vertex.push_back(p2);
		vertex.push_back(p3);

		Point sideCoords;
		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		
		for (int i = 0; i < size; i++) {
			P += side[i];
		} 
	}
	Polygon(string thatName, int thatSize, Point p1, Point p2, Point p3, Point p4) {
		type = "Polygon";
		name = thatName;
		size = thatSize;	
		P = 0;
		
		vertex.push_back(p1);
		vertex.push_back(p2);
		vertex.push_back(p3);
		vertex.push_back(p4);
				
		Point sideCoords;
		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		for (int i = 0; i < size; i++) {
			P += side[i];
		} 
	}
	Polygon(string thatName, int thatSize, Point p1, Point p2, Point p3, Point p4, Point p5) {
		type = "Polygon";
		name = thatName;
		size = thatSize;	
		P = 0;
		
		vertex.push_back(p1);
		vertex.push_back(p2);
		vertex.push_back(p3);
		vertex.push_back(p4);
		vertex.push_back(p5);

		Point sideCoords;
		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		for (int i = 0; i < size; i++) {
			P += side[i];
		} 
	}
	Polygon(string thatName, int thatSize, Point p1, Point p2, Point p3, Point p4, Point p5, Point p6) {
		type = "Polygon";
		name = thatName;
		size = thatSize;	
		P = 0;
		
		vertex.push_back(p1);
		vertex.push_back(p2);
		vertex.push_back(p3);
		vertex.push_back(p4);
		vertex.push_back(p5);
		vertex.push_back(p6);

		Point sideCoords;
		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		for (int i = 0; i < size; i++) {
			P += side[i];
		} 
	}
	Polygon(string thatName, int thatSize, Point p1, Point p2, Point p3, Point p4, Point p5, Point p6, Point p7) {
		type = "Polygon";
		name = thatName;
		size = thatSize;	
		P = 0;
		
		vertex.push_back(p1);
		vertex.push_back(p2);
		vertex.push_back(p3);
		vertex.push_back(p4);
		vertex.push_back(p5);
		vertex.push_back(p6);
		vertex.push_back(p7);

		Point sideCoords;
		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		for (int i = 0; i < size; i++) {
			P += side[i];
		} 
	}
	Polygon(string thatName, int thatSize, Point p1, Point p2, Point p3, Point p4, Point p5, Point p6, Point p7, Point p8) {
		type = "Polygon";
		name = thatName;
		size = thatSize;
		P = 0;
		
		vertex.push_back(p1);
		vertex.push_back(p2);
		vertex.push_back(p3);
		vertex.push_back(p4);
		vertex.push_back(p5);
		vertex.push_back(p6);
		vertex.push_back(p7);
		vertex.push_back(p8);

		Point sideCoords;
		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		for (int i = 0; i < size; i++) {
			P += side[i];
		} 
	}


	// getter and setters
	string getType() {
		return type;
	}			
	string getName() {
		return name;
	}
	double getP() {
		return P;
	}
	double getS() {
		return S;
	}
	void setName(string thisName) {
		name = thisName;
	}
	vector <Point> getVertex() {
		return vertex;
	}
	void setVertex(Point defVertex) {
		for (int i = 0; i < size; i++)
			vertex.push_back(defVertex);
	}
	int getSize() {
		return size;
	}
	void setSize(int thatSize) {
		size = thatSize;
	}
	void setSide(double datSide[]) {
		for (int i = 0; i < 8; i++) {
			side[i] = datSide[i];
		}
	}
	void setS(double datS) {
		S = datS;
	}
	void setP(double datCirc) {
		P = datCirc;
	}


	
	// calculate circumfernce & area
	double datSide (int i) {
		Point sideCoords;
		sideCoords = vertex[i+1] - vertex[i];
		side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		return side[i];
	}

	double lastSide () {
		Point sideCoords;
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));

		return side[size-1];
	}

	double perimeter() {
		P = 0;
		Point sideCoords;

		for (int i = 0; i < size-1; i++) {
			sideCoords = vertex[i+1] - vertex[i];
			side[i] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));
		}
		sideCoords = vertex[0] - vertex[size-1];
		side[size-1] = sqrt(pow(sideCoords.getX(), 2) + pow(sideCoords.getY(), 2));		
		
		for (int i = 0; i < size; i++) {
			P += side[i];
		} 

		return P; 
	}

	double area() {
		return 0;
	}



	// overriding operators
	Polygon operator+ (Polygon obj) {
		Polygon temp;
		
		for (int i = 0; i < size; i++) {
			temp.side[i] = side[i] + obj.side[i];
			temp.vertex[i] = vertex[i] + obj.vertex[i];
		}

		return temp;
	}
	Polygon operator- (Polygon obj) {
		Polygon temp;
		
		for (int i = 0; i < size; i++) {
			temp.side[i] = side[i] - obj.side[i];
			temp.vertex[i] = vertex[i] - obj.vertex[i];
		}

		return temp;
	}
	Polygon operator= (Polygon obj) {
		for (int i = 0; i < size; i++) {
			side[i] = obj.side[i];
			vertex[i] = obj.vertex[i];
		}
		return *this; 
	}
	

	friend ostream& operator<< (ostream& os, const Polygon& obj);
	friend istream& operator>> (istream& is, Polygon& obj);
};

ostream& operator<< (ostream& os, const Polygon& obj) {
	os << "Type: " << obj.type << endl;
	os << "Name: " << obj.name << endl;
	os << "Count of vertexes: " << obj.size << endl;	

	int i = 1;
	for (vector<Point>::const_iterator it = obj.vertex.begin(); it != obj.vertex.end(); it++) {
		cout << "Vertex " << "[" << i << "]";	
		os << *it << endl;
		i++;
	}

	for (i = 0; i < obj.size-1; i++) {
		//cout << "Side " << "[" << i+1 << "]: " << obj.side[i] << endl;
		cout << "Side " << "[" << i+1 << "]: " << ((Polygon)obj).datSide(i) << endl;
	}
	cout << "Side " << "[" << obj.size << "]: " << ((Polygon)obj).perimeter() - ((Polygon)obj).lastSide() << endl;

	os << "Circumference: " << ((Polygon)obj).perimeter() << endl;

	return os;
}

istream& operator>> (istream& is, Polygon& obj) {
	cout << "Type: " << obj.type << endl;
	cout << "Enter name: ";
	is >> obj.name;

	do {
		cout << "Enter count of vertexes: ";
		is >> obj.size;

		if (obj.size > 8) {
			cout << endl << "For polygons with more than 8 sides, \nbuy the full version for only $199,99" << endl;
		}

	} while (obj.size > 8);
	
	cout << "Enter vertexes coordinates: " << endl;

	int x = 0, y = 0;
	for (int i = 0; i < obj.size; i++) {
		cout << "Vertex [" << i+1 << "]: " << endl;
		is >> x;
		is >> y;

		Point *p = new Point(x, y);
		obj.vertex.push_back(*p);
	}

	return is;
} 