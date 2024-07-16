#include <iostream>
#include "Headers/Entities.h"
#include <string>

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


int main() {
	int size;
	GreatestNum* stat1 = new GreatestNum{ 50 };
	GreatestNum* stat2 = new GreatestNum{ 25 };


	cout << "How many scores would you like to track?\n";
	cin >> size;
	cout << endl;

	int* scoresP = new int[size];


	inputArr(scoresP, size);
	printArr(scoresP, size);
	verifyList(scoresP, size);
	GreatestNum* winner = getTheWinner(stat1, stat2);
	cout << "\n\nAnd the winner is " << winner->score << endl;
	delete[] scoresP;
	return 0;
}
