#include <iostream>
using namespace std;

struct Entity
{
	// Income value of person
	float income;
};

struct Vector2D {
	Vector2D();

	Vector2D(int x, int y);

	float x;
	float y;
};

struct PlayerStats {
	PlayerStats(); // Constructor
	PlayerStats(int h, int a, float x, float y, int wd, int xp, int l);
	// Member variables
	int health;
	int armor;
	Vector2D location;
	int weaponDamage;
	int xp;
	int level;

	// Member functions
	void setLocation(float p, float q);
	void setLocation(Vector2D vec);
	Vector2D getLocation() const;
	void readStats() const;
};

void printLocation(Vector2D location);

struct AIStats
{
	// Ai Health 
	int health;
	// Ai Weapon Damage
	int weaponDamage;
};



