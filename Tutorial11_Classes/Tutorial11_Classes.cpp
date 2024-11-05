#include <iostream>
using namespace std;

class Enemy
{
public:

    string anEnemy;
};

int main()
{
    Enemy anEnemy;
    anEnemy.name = "Monster";
    anEnemy.name = "Guard";

    cout << anEnemy.name << ": " << anEnemy.damageAmount << endl;
}
