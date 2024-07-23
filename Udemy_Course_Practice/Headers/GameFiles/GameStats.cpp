#include <iostream>
#include "GameStats.h"

using namespace std;

//constructor definition;
GameStats::GameStats() : currentLevel(new int(1)), vec(new Vector3D) {
	instances++;
}

int GameStats::instances = 0;

//overloaded constructor definition;
GameStats::GameStats(int x) : currentLevel(new int(x)), vec(new Vector3D) {}

GameStats::GameStats(int x, float x1, float y1, float z1) : currentLevel(new int(x)), vec(new Vector3D{ x1,y1,z1 }) {}
//destructor definition;
GameStats::~GameStats() {
	cout << "\nDestructoring GameStats";
	delete currentLevel;
	delete vec;
	instances--;
}

//member function;
int GameStats::getCurrentLevel() {
	return *currentLevel;
}

//member function;
void GameStats::dispLoc() {
	vec->disp();
}

//member function;
void GameStats::setCurrentLevel(int level) {
	*currentLevel = level;
}

//constructor definition;
Vector3D::Vector3D() : x1(new float{}), y1(new float{}), z1(new float{}) {}
// overloaded constructor definition;
Vector3D::Vector3D(float x, float y, float z) : x1(new float(x)), y1(new float(y)), z1(new float(z)) {}

void Vector3D::setValues(float x, float y, float z) {
	*x1 = x;
	*y1 = y;
	*z1 = z;
}
void Vector3D::disp() {
	cout << "\nGame 3D Location: ";
	cout << "\nX1: " << *x1;
	cout << "\nY1: " << *y1;
	cout << "\nZ1: " << *z1;
}
float Vector3D::getX() {
	return *x1;
}
float Vector3D::getY() {
	return *y1;
}
float Vector3D::getZ() {
	return *z1;
}
// vector3d Destructor
Vector3D::~Vector3D() {
	cout << "\nDestructoring Vector3D";
	delete x1;
	delete y1;
	delete z1;
}