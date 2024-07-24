#include <iostream>
#include "GameStats.h"

using namespace std;

//constructor definition;


int GameStats::s_Instances = 0;

//overloaded constructor definition;
GameStats::GameStats(int x, int y) : currentLevel(new int(x)), currentRoom(new int(y)), vec(new Vector3D) {
	s_Instances++;
}


GameStats::GameStats(int x, int room, float x1, float y1, float z1) : currentLevel(new int(x)), currentRoom(new int(room)), vec(new Vector3D{ x1,y1,z1 }) {
	s_Instances++;
}

//destructor definition;
GameStats::~GameStats() {
	cout << "\nDestructoring GameStats";
	delete currentLevel;
	delete vec;
	delete currentRoom;
	s_Instances--;
}

//member functions;
int GameStats::getCurrentLevel() const {
	return *currentLevel;
}
int GameStats::getCurrentRoom() {
	return *this->currentRoom;
}
void GameStats::dispLoc() {
	this->vec->disp();
}
GameStats& GameStats::setCurrentRoom(int room) {
	*this->currentRoom = room;
	return *this;
}
GameStats& GameStats::setCurrentLevel(int level) {
	*currentLevel = level;
	return *this;
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
void Vector3D::disp()const {
	cout << "\nGame 3D Location: ";
	cout << "\nX1: " << *x1;
	cout << "\nY1: " << *y1;
	cout << "\nZ1: " << *z1;
}
float Vector3D::getX()const {
	return *x1;
}
float Vector3D::getY()const {
	return *y1;
}
float Vector3D::getZ()const {
	return *z1;
}
void Vector3D::compare(const Vector3D& other) {
	if (this == &other) {
		cout << "This object is of Struct Vector3D";
	}
	else {
		cout << "\n This is not an original Vector3D";
	}
}
// vector3d Destructor
Vector3D::~Vector3D() {
	cout << "\nDestructoring Vector3D";
	delete x1;
	delete y1;
	delete z1;
}