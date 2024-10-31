// Tutorial8_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float player1Health = 50.0f;
    float player2Health = 25.0f;
    //float* currentHealth = &player1Health;
    float* currentHealth = &player2Health;

    currentHealth = &player2Health;
    cout << "Address of Player 1 Health: " << &player1Health << endl;
    cout << "Address of Player 2 Health: " << &player2Health << endl;
    cout << "Address of Current Health: " << currentHealth << endl;
}
