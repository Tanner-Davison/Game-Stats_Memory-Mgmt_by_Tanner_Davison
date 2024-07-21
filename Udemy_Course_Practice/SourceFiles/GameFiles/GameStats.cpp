#include <iostream>
#include "GameStats.h"

using namespace std;

int GameStats::getCurrentLevel() {
	return currentLevel;
}
void GameStats::setCurrentLevel(int level) {
	currentLevel = level;
}
