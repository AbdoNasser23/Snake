#include <iostream>
#include <vector>
#include <ctime>
#include <random>

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::srand;
using std::string;
using std::vector;
using std::to_string;

/*Start Variable*/
char Board[25][25];
enum Buttons { UP, DOWN, LEFT, RIGHT, PUSE, EXIT };
int score;
bool GameOver;
/*End Variable*/

/*Start Tools*/
int randNum(const short int min, const short int max)
{
	std::random_device rd;
	std::uniform_int_distribution<int> dist(min,max);
	return dist(rd);
}
/*End Tools*/


/*TODO: Board  -----   == Drawing ==   ----------------*/
void Board_Drawing() { // (Name) Working on

}
/*====================================================================================*/


/*TODO: Snake  -----   == Drawing ==   ----------------*/
void Snake_Drawing() { // (Name) Working on

}
/*------------------   == Moving  ==  ----------------*/
void Snake_Moving() { // (Name) Working on

}

/*------------------   == Valid   ==  ----------------*/
void Snake_Valid() { // (Name) Working on

}

/*-----------------   == Score   ==  ----------------*/
void Snake_Score() { // (Name) Working on

}
/*====================================================================================*/


/*TODO: Fruits -----   == Drawing ==   --------------------------------*/
void Fruits_Draeing() { // (Name) Working on

}
/*====================================================================================*/



int main()
{
	// Setup();
	// while(!GameOver)
	// {
	// 	system("cls");
	// 	// Todo: add the Body
	// }

	return 0;
}
