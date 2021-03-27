// Console Procedural Generation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using namespace std;

//sets the console window size to x columns and y rows, max 240, 63
void setConsoleSize(SHORT,SHORT);

SHORT SCREEN_SIZE_X = 150;
SHORT SCREEN_SIZE_Y = 50;

int main()
{
    setConsoleSize(SCREEN_SIZE_X,SCREEN_SIZE_Y);
    for (int i = 0; i < 150; i++)
    {
        cout << 2;
    }
    int a;
    cin >> a;
    system("cls");
    for (int i = 0; i < 49; i++)
    {
        cout << i << endl;
    }
    cin >> a;
}


void setConsoleSize(SHORT x, SHORT y)
{
    //gets the standard output window
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    //creates the coordiante size of the buffer
    COORD buffer_size = { x,y };
    //creates the console display size
    SMALL_RECT DisplayArea = { 0, 0, x - 1, y - 1 };
    
    //sets the size of the Console Buffer
    SetConsoleScreenBufferSize(hOut, buffer_size);
    //sets the size of the console window
    SetConsoleWindowInfo(hOut, true, &DisplayArea);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
