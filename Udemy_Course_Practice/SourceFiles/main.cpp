#include <iostream>
#include "Headers/EntityHeader.h"


using namespace std;

int main() {
	bool playing = true;

	PlayerStats player1{ 100, 50,0,0,200, 10, 1 };
	player1.setLocation(122.2f, 300.3f);
	AIStats rat{ 100, 25 }, alien{ 100, 50 };
	Entity entity{ 13.000 }, entity2{ 100.00 };
	rat = alien;
	player1.readStats();

	int count{};
	do
	{
		string response;
		if (count == 0) {
			cout << "Do you want to play?" << endl;
			cin >> response;
		}
		else if (count == 3) {
			cout << "\n YOU WERE ATTACKED BY A DRAGON YOU FILTHY BASTARD" << endl;
			cout << "\nYou lost 100 coins" << endl;
			player1.xp -= 100;
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
			player1.xp += 100;
			player1.readStats();
			count++;
		}
		else if (response == "no") {
			playing = false;
		}
	} while (playing);
	if (playing == false) {
		cout << "Thanks for playing!" << endl;
	}

	return 0;
}