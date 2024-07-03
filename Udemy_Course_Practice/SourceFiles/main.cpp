#include <iostream>
#include "Headers/Entities.h"


using namespace std;
void inputScores(int& x, int& y, int& z) {
	cout << "Input Scores per game: " << endl;
	cin >> x >> y >> z;
}
float getAverageScore(const int& x, const int& y, const int& z) {

	return (x + y + z) / 3.0f;
}
int main() {


	int demoArray[]{ 23,32,3333,6 };
	int* ptr{ demoArray };         // points to demoarray at index 0
	int& myRef{ *ptr };            // this is a reference to the pointer 
	// setting the reference that is referring to the pointer to reinitialize to 12
	int i = 0;
	cout << "DemoArray Size: " << sizeof(demoArray) << " Bytes" << endl;
	cout << "demoArray Memory: " << &demoArray << endl;

	cout << "\nPtr" << " Value: " << (*ptr) << endl;
	cout << "Size: " << sizeof(*ptr) << " Bytes" << endl;
	cout << "Memory Location: " << &ptr << endl;

	cout << "\nmyRef Var Value : " << myRef << " " << "\nSize: " << sizeof(myRef) << " Bytes" << endl;
	cout << "Memory Location : " << &myRef << endl;
	int q = 12;
	myRef = q;
	cout << "\nREF after being reinitialized  " << myRef << " Size: " << sizeof(myRef) << endl;
	cout << "Memory location of my ref: " << &myRef << endl;
	cout << "Changed value in demoArray[0] " << demoArray[0] << endl;

	int score1{}, score2{}, score3{};

	inputScores(score1, score2, score3);
	float averageScore = getAverageScore(score1, score2, score3);
	cout << "Youre average score was: " << averageScore << endl;





	//bool playing = true;
	//int myNum = 23;
	//PlayerStats player1{ 100, 50,0,0,200, 10, 1 }, player2{ 100,30,0,0,200,100,3 };
	//player1.setLocation(122.2f, 300.3f);
	//player2.setLocation(300.2f, 423.53f);
	//PlayerStats players[] = { player1, player2 };

	//AIStats rat{ 100, 25 }, alien{ 100, 50 };
	//Entity entity{ 13.000 }, entity2{ 100.00 };
	//rat = alien;


	//// POINTERS
	//int* demopntr = nullptr;

	//cout << demopntr << endl;
	//demopntr = &myNum;
	//cout << demopntr << endl;
	//cout << *demopntr << endl;



	/////////



	//// Arrays Pointer example 

	//int demoArray[]{ 1,5555555,3 , 45 };

	//int* i{ demoArray };
	//for (int temp : demoArray) {
	//	cout << "START HERE ---" << endl;

	//	cout << &i << endl;  //memory address of the pointer i;
	//	cout << temp << endl; // close in memory to the pointer but is a reference 
	//	cout << *i << endl; // dereferenced value of the pointer i;

	//	i++;
	//	cout << "----------------" << endl;
	//}

	/////evaluating equality in pointers;
	//int x{ 5 }, * pntr{ &x }, * myPnt{ nullptr };

	//myPnt = pntr;
	//if (myPnt == pntr) { cout << *pntr << " == " << *myPnt << endl; };
	//if (pntr != myPnt) { cout << *myPnt << " != " << *pntr << endl; }

	////This works because player1.location is a Struct entity;
	//printLocation(player1.location);
	//int charCurrent{};
	//int count{};

	//cout << "Player 1: ( Enter: 1 )\nPlayer 2: ( Enter: 2 ) " << endl;
	//cin >> charCurrent;
	//do
	//{
	//	cout << "Player: " << charCurrent << endl;
	//	cin.get();
	//	cout << "Press enter to continue...";
	//	cin.get();
	//	string response;
	//	if (count == 0) {
	//		cout << "Do you want to play?" << endl;
	//		cin >> response;
	//	}
	//	else if (count == 3) {
	//		cout << "\n YOU WERE ATTACKED BY A DRAGON YOU FILTHY BASTARD" << endl;
	//		cout << "\nYou lost 100 coins" << endl;
	//		players[charCurrent - 1].xp -= 100;
	//		cout << "\nDo you want to continue playing?" << endl;
	//		cin >> response;
	//		count = 0;
	//	}
	//	else {
	//		cout << "Do you want to play Again?" << endl;
	//		cin >> response;
	//	}

	//	if (response == "yes") {
	//		cout << "It pays to play 10 XP for you" << endl;
	//		players[charCurrent - 1].xp += 100;
	//		count++;
	//	}
	//	else if (response == "no") {
	//		playing = false;
	//	}
	//	else if (response == "stats") {
	//		players[charCurrent - 1].readStats();
	//	}
	//} while (playing);
	//if (playing == false) {
	//	cout << "Thanks for playing!" << endl;
	//}





	return 0;
}