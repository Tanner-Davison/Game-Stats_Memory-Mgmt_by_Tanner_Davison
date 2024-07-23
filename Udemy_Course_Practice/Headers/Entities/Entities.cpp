#include "Entities.h"

// Constructor definition
PlayerStats::PlayerStats() : health{ 0 }, armor{ 0 }, location{ 100, 100 }, weaponDamage{ 0 }, xp{ 0 }, level{ 1 } {}

// Member function definitions
void PlayerStats::setLocation(float p, float q) {
	location.x = p;
	location.y = q;
}

void PlayerStats::setLocation(Vector2D vec) {
	location = vec;
}

Vector2D PlayerStats::getLocation() const {
	return location;
}

void PlayerStats::readStats() const {
	cout << "Current Health: " << health << endl;
	cout << "Armor Rating: " << armor << endl;
	cout << "Current Location: " << getLocation().x << " " << getLocation().y << endl;
	cout << "Weapon Damage Rating: " << weaponDamage << endl;
	cout << "Total XP: " << xp << endl;
	cout << "LEVEL: " << level << endl;
}

// Function to print Vector2D location
void printLocation(Vector2D location) {
	cout << "LOCATION: " << location.x << " " << location.y << endl;
}