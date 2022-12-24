#include<iostream>
#include<Windows.h>


using namespace std;
//The gotoxy() function places the cursor at the desired location on the screen.

void gotoxy(int x, int y){
//Defines the coordinates of a character cell in a console screen buffer.
COORD coord ={0, 0};


 //COORD coord;
 coord.X = x;
 coord.Y = y;
 //GetStdHandle func. returns a handle to standard device
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);}

/////////////////////////////////////////////////////////////////////////////////
void animation()
{
	for (int i=45; i>=1; i--)
	{
		//The sleep() function stop execution of the current thread for a given number of seconds.
		Sleep(30);
		gotoxy(1,i);
		//clreol();
	}
	for (int i=1; i<=20; i++)
	{
		//clreol();
		Sleep(40);
		gotoxy(1,i);
	}
}

