#pragma once

using namespace std;

struct Vector3D {
	Vector3D();

	Vector3D(float x1, float y1, float z1);

	float getX() const;
	float getY() const;
	float getZ() const;

	void setValues(float x1, float y1, float z1);

	void compare(const Vector3D& other);

	void disp() const;

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

	//Paramaterized constructor declaration; : also gave the main constructor default fallback values;
	GameStats(int x = 1, int y = 1);
	// overloaded Constructor
	GameStats(int x, int room, float x1, float y1, float z1);
	//destructor declaration;
	~GameStats();

	int getCurrentLevel() const;
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