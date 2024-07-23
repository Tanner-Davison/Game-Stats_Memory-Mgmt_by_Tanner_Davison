#pragma once

using namespace std;

struct Vector3D {
	Vector3D();

	Vector3D(int x1, int y1, int z1);

	void setValues(int x1, int y1, int z1);

	void printLocations();

	~Vector3D();

private:
	int* x1;
	int* y1;
	int* z1;
};

class GameStats
{
public:
	//constructor
	GameStats();
	GameStats(int x);
	~GameStats();


	int	getCurrentLevel();

	void setCurrentLevel(int level);
	void readLocation();
private:

	int* currentLevel;
	Vector3D* vec;
};