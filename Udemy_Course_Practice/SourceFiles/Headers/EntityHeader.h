#pragma once
#include <iostream>
using namespace std;

struct Entity
{
	// Income value of person
	float income;
};
struct Vector2D {
	float x;
	float y;
};
struct PlayerStats
{
	// Player Health;
	int health;
	// PlayerArmor;
	int armor;
	//Player location
	Vector2D location;
	// Player Weapon Damage;
	int weaponDamage;
	// Player xp;
	int xp;
	//Player Level;
	int level;
	void setLocation(float p, float q) {
		location.x = p;
		location.y = q;
	}
	Vector2D getLocation()
		const {
		return location;
	}
	void readStats() const {
		cout << "Current Health: " << health << endl;
		cout << "Armor Rating: " << armor << endl;
		cout << "current Location: " << getLocation().x << " " << getLocation().y << endl;
		cout << "Weapon Damage Rating: " << weaponDamage << endl;
		cout << "Total XP: " << xp << endl;
		cout << "LEVEL: " << level << endl;
	}
};
struct AIStats
{
	// Ai Health 
	int health;
	// Ai Weapon Damage
	int weaponDamage;
};
