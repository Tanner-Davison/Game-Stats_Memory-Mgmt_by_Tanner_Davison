#include <iostream>
#include "GameStats.h"

using namespace std;
//constructor
GameStats::GameStats() {
	currentLevel = new int(1);
	vec = new Vector3D;
}
//overloaded constructor
GameStats::GameStats(int x) {
	currentLevel = new int(x);
	vec = new Vector3D{ 25,50,43 };
}
//destructor
GameStats::~GameStats() {
	delete currentLevel;
	delete vec;
}

int GameStats::getCurrentLevel() {
	return *currentLevel;
}
void GameStats::readLocation() {
	vec->printLocations();
}
void GameStats::setCurrentLevel(int level) {
	*currentLevel = level;
}

//constructor
Vector3D::Vector3D() {
	x1 = new int(1);
	y1 = new int(1);
	z1 = new int(1);
}
// overloaded constructor 
Vector3D::Vector3D(int x, int y, int z) : x1(new int(x)), y1(new int(y)), z1(new int(z)) {};

void Vector3D::setValues(int x, int y, int z) {
	*x1 = x;
	*y1 = y;
	*z1 = z;
}
void Vector3D::printLocations() {
	cout << "\nX1: " << *x1;
	cout << "\nY1: " << *y1;
	cout << "\nZ1: " << *z1;
}
Vector3D::~Vector3D() {
	delete x1;
	delete y1;
	delete z1;
}