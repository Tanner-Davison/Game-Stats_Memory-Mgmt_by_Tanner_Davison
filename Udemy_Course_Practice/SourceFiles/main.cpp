#include <iostream>
#include "../Headers/Entities/Entities.h"
#include "../Headers/GameFiles/GameStats.h"
#include <string>
#include <cstdlib> // for rand()
#include <ctime> // for time()
#include <windows.h>
#include <fmt/core.h>
#include <fmt/color.h>
using namespace std;

void inputArr(int* scoresP, int size) {
	cout << "Input Scores: " << size << endl;
	for (int i = 0; i < size; i++) {
		cin >> scoresP[i];
	}
	cout << endl;
}
void printArr(int* scoresP, int size) {

	for (int i = 0; i < size; i++) {
		int show = i + 1;
		cout << "#" << show << " " << scoresP[i] << endl;
	}
}


int modifyValue(int* const ptr) {
	static int changeVar = 0;
	changeVar++;
	return (*ptr) += changeVar;
}

void updateScore(int* scoresP, int size) {
	int numUpdate{};
	int newVal{};
	cout << "\nWhich number would you like to update?" << "\n";
	cin >> numUpdate;
	cout << "\ninput new value to replace" << "\n";
	cin >> newVal;
	(scoresP[numUpdate - 1]) = newVal;
	cout << "Update Success" << "\n";
	printArr(scoresP, size);
}

void verifyList(int* scoresP, int size) {
	string command;
	cout << "\nWould you like to make updates? (yes/stop)\n";
	cin >> command;

	while (command != "stop") {
		if (command == "yes") {
			updateScore(scoresP, size);
		}
		else {
			cout << "Unknown command. Type 'yes' to update or 'stop' to exit.\n";
		}
		cout << "\nWould you like to make more updates? (yes/stop)\n";
		cin >> command;
	}

	cout << "\nThanks! Have a great day!";
}
struct GreatestNum {

	int score;

};


GreatestNum* getTheWinner(GreatestNum* stat1, GreatestNum* stat2) {
	if (stat1->score > stat2->score) {
		return stat1;
	}
	else if (stat2->score > stat1->score) {
		return stat2;
	}
	else {
		return nullptr;
	}
}

unsigned long factorial(unsigned long n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

void checkNum(int ptr, int answer, int tries) {
	cout << " Enter guess #" << ++tries << " ";
	cin >> ptr;

	if (ptr == answer) {
		cout << "\ncongrats you guessed it in " << tries << " trys!" << "\n The Answer was : " << answer;
	}
	else if (ptr < answer) {
		cout << "\nToo Low, Try Again...";
		checkNum(ptr, answer, tries);
	}
	else {
		cout << "\nToo High, Try Again...";
		checkNum(ptr, answer, tries);
	}
}

void printMember(const GameStats& obj) {
	cout << "\nPrinting Current Level with Print Member: " << obj.getCurrentLevel() << '\n';
}

void setColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

int main() {

	GameStats* game = new GameStats;
	GameStats* game2 = new GameStats;
	Vector3D* checkingVec = new Vector3D;

	game->setCurrentLevel(1000).setCurrentRoom(50);
	printMember(*game2);

	cout << "\nCurrent Level: " << game->getCurrentLevel() << "\n";
	cout << "\nCurrent ROOM: " << game->getCurrentRoom() << "\n";

	game->dispLoc();
	game->vec->setValues(200, 300.55f, 400.54f);

	game->dispLoc();
	cout << '\n';

	cout << "\n CHECKING VEC: ";
	checkingVec->compare(*game->vec);

	cout << "\n CHECKING VEC: ";
	game->vec->compare(*game->vec);

	cout << "\nvalue of location X: " << " " << game->vec->getX() << "\n";
	int demoInt{};
	{
		int x = 100;
		int y = 50;
		demoInt = x > y ? x : y;
	}

	cout << "\nDEMO INT: " << demoInt << '\n';

	// created a dynamic way of showing how many instances of class objects that are created and currently running without being removed;
	// using the static declarartion in class;

	cout << "\n # Of game instances running: " << game->s_Instances << "\n";
	fmt::print(fmt::fg(fmt::color::red), "this is red\n");
	delete game, game2, checkingVec;

	const int myVar = 10;

	int const* myPtr = &myVar;

	return 0;
}