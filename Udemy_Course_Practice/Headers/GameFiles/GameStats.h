#pragma once

using namespace std;

struct Vector3D {
	Vector3D();

	Vector3D(float x1, float y1, float z1);

	float getX(), getY(), getZ();

	void setValues(float x1, float y1, float z1);

	void compare(const Vector3D& other);

	void disp();

	~Vector3D();

private:
	float* x1;
	float* y1;
	float* z1;
};

class GameStats
{
public:
	//constructor declaration;
	GameStats();
	//Paramaterized constructor declaration;
	GameStats(int x);
	// overloaded Constructor
	GameStats(int x, int room, float x1, float y1, float z1);
	//destructor declaration;
	~GameStats();

	int getCurrentLevel();
	int getCurrentRoom();
	GameStats& setCurrentRoom(int room);
	GameStats& setCurrentLevel(int level);

	void dispLoc();

	Vector3D* vec;
	static int s_Instances;

private:

	int* currentLevel;
	int* currentRoom;
};