#include <iostream>
#include <ctime>
using namespace std;
/*Start Variable*/
srand(time(0));
bool GameOver;
const int width = 26;
const int height = 26;
enum Direction = {UP,DOWN,LEFT,RIGHT,STOP,BOTH};
int score , fruitX = (rand() % width - 1) + 1 ,fruitY = (rand() % height - 1) + 1, X = width / 2 ,Y = height / 2;
/*End Variable*/
/*Start Setup*/
/*====================================================================================*/
void Setup()
{

}
/*End Setup*/
/*====================================================================================*/
/*Start Draw*/
void Draw()
{
 for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
    if (i == 1 || j == 1 || i == height || j ==width)
        cout << "* ";
        else
        cout << "  ";
        }
        cout << endl;
    }
}
/*End Draw*/
/*====================================================================================*/
/*Start Input*/
void Input()
{

}
/*End Input*/
/*====================================================================================*/
/*Start Logic*/
void Logic()
{

}
/*End Logic*/
/*====================================================================================*/
int main()
{
	Setup();
	while(!GameOver)
	{
		system("cls");
		Draw();
		Input();
		Logic();
	}
	return 0;
}
