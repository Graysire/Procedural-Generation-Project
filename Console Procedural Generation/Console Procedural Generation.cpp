// Console Procedural Generation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <random>
#include "randnum.h"

using namespace std;

//sets the console window size to x columns and y rows, max 240, 63
void setConsoleSize(SHORT,SHORT);

HANDLE HANDLE_OUT = GetStdHandle(STD_OUTPUT_HANDLE);
SHORT SCREEN_SIZE_X = 180;
SHORT SCREEN_SIZE_Y = 60;
//mt19937_64 RNG(5);
uniform_int_distribution<unsigned long long> dist(4294967296, 4294967299);
uniform_int_distribution<unsigned long long> dist2(0, SCREEN_SIZE_X);
uniform_int_distribution<unsigned long long> dist3(0, SCREEN_SIZE_Y);

int main()
{
    random_device rd;
    mt19937_64 gen(rd());

    char c[5] = { 'h', 'e', 'l', 'l', 'o' };

    setConsoleSize(SCREEN_SIZE_X,SCREEN_SIZE_Y);

    /*while (true)
    {
        
        cout << dist(RNG) << endl;
    }*/
    /*cout << RNG._Max << endl;
    cout << RNG.min;*/

    //RNG::GetDiceRoll

    char e[2] = { '\t', 'x' };

    COORD zero = { 40,37 };
    WriteConsoleA(HANDLE_OUT, e, 2, NULL, NULL);

    SetConsoleCursorPosition(HANDLE_OUT, zero);

    WriteConsoleA(HANDLE_OUT, c, 5, NULL, NULL);
    zero.X = 43;
    SetConsoleCursorPosition(HANDLE_OUT, zero);

    WriteConsoleA(HANDLE_OUT, c, 5, NULL, NULL);

    WORD b = FOREGROUND_BLUE;
    DWORD w = 0;

    WriteConsoleOutputAttribute(HANDLE_OUT, &b, 1, zero, &w);

    char d[1] = { 'a' };
    zero.X = 149;
    zero.Y = 49;
    SetConsoleCursorPosition(HANDLE_OUT, zero);

    WriteConsoleA(HANDLE_OUT, d, 1, NULL, NULL);
    WriteConsoleOutputAttribute(HANDLE_OUT, &b, 1, zero, &w);
    /*while (true)
    {
        zero.X = dist2(gen);
        zero.Y = dist3(gen);
        SetConsoleCursorPosition(HANDLE_OUT, zero);
        WriteConsoleA(HANDLE_OUT, d, 1, NULL, NULL);
        WriteConsoleOutputAttribute(HANDLE_OUT, &b, 1, zero, &w);
    }*/

    int a;
    cin >> a;
}




void setConsoleSize(SHORT x, SHORT y)
{
    //gets the standard output window
    
    //creates the coordiante size of the buffer
    COORD buffer_size = { x,y };
    //creates the console display size
    SMALL_RECT DisplayArea = { 0, 0, x - 1, y - 1 };
    
    //sets the size of the Console Buffer
    SetConsoleScreenBufferSize(HANDLE_OUT, buffer_size);
    //sets the size of the console window
    SetConsoleWindowInfo(HANDLE_OUT, true, &DisplayArea);
}