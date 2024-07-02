#include <iostream>
#include "Headers/Entities.h"


using namespace std;

int main() {
	bool playing = true;

	PlayerStats player1{ 100, 50,0,0,200, 10, 1 }, player2{ 100,30,0,0,200,100,3 };
	player1.setLocation(122.2f, 300.3f);
	player2.setLocation(300.2f, 423.53f);
	PlayerStats players[] = { player1, player2 };

	AIStats rat{ 100, 25 }, alien{ 100, 50 };
	Entity entity{ 13.000 }, entity2{ 100.00 };
	rat = alien;


	//This works because player1.location is a Struct entity;
	printLocation(player1.location);
	int charCurrent{};
	int count{};
	cout << "Player 1: ( Enter: 1 )\nPlayer 2: ( Enter: 2 ) " << endl;
	cin >> charCurrent;
	do
	{
		cout << "Player: " << charCurrent << endl;
		cin.get();
		cout << "Press enter to continue...";
		cin.get();
		string response;
		if (count == 0) {
			cout << "Do you want to play?" << endl;
			cin >> response;
		}
		else if (count == 3) {
			cout << "\n YOU WERE ATTACKED BY A DRAGON YOU FILTHY BASTARD" << endl;
			cout << "\nYou lost 100 coins" << endl;
			players[charCurrent - 1].xp -= 100;
			cout << "\nDo you want to continue playing?" << endl;
			cin >> response;
			count = 0;
		}
		else {
			cout << "Do you want to play Again?" << endl;
			cin >> response;
		}

		if (response == "yes") {
			cout << "It pays to play 10 XP for you" << endl;
			players[charCurrent - 1].xp += 100;
			count++;
		}
		else if (response == "no") {
			playing = false;
		}
		else if (response == "stats") {
			players[charCurrent - 1].readStats();
		}
	} while (playing);
	if (playing == false) {
		cout << "Thanks for playing!" << endl;
	}

	return 0;
}