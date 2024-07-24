#include "Entities.h"

// Constructor definition
PlayerStats::PlayerStats() : health{ 0 }, armor{ 0 }, location{ Vector2D() }, weaponDamage{ 0 }, xp{ 0 }, level{ 1 } {}
//health, armor, location x, location y, weapon damage, xp, level; 
PlayerStats::PlayerStats(int h, int a, float x, float y, int wd, int xp, int l) :health(h), armor(a), location(x, y), weaponDamage(wd), xp(xp), level(l) {}
// Member function definitions
void PlayerStats::setLocation(float p, float q) {
	location.x = p;
	location.y = q;
}

void PlayerStats::setLocation(Vector2D vec) {
	location = vec;
}
Vector2D::Vector2D() : x(0), y(0) {
	cout << "Vector 2D initialized";
}

Vector2D::Vector2D(int xP, int yP) : x(xP), y(yP) {
	cout << "\n Vector2D Initialized with Params! X: " << this->x << " and Y: " << this->y << "\n";
}

Vector2D PlayerStats::getLocation() const {
	return this->location;
}

void PlayerStats::readStats() const {
	cout << "Current Health: " << this->health << endl;
	cout << "Armor Rating: " << this->armor << endl;
	cout << "Current Location: " << this->getLocation().x << " " << this->getLocation().y << endl;
	cout << "Weapon Damage Rating: " << this->weaponDamage << endl;
	cout << "Total XP: " << this->xp << endl;
	cout << "LEVEL: " << this->level << endl;
}

// Function to print Vector2D location
void printLocation(Vector2D location) {
	cout << "LOCATION: " << location.x << " " << location.y << endl;
}