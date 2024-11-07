#include <iostream>
using namespace std;

class Enemy
{
private:
    bool inRadiusOfPlayer;
    bool isDead;
public:
    string anEnemy = string();
    string name = string();
    float damageAmount = float();
};

int main()
{
    Enemy anEnemy;
    anEnemy.name = "Abberation";
    anEnemy.damageAmount = 14.0f;

    cout << anEnemy.name << " has dealt " << anEnemy.damageAmount << " damage!" << endl;
    // cout << anEnemy.inRadiusOfPlayer -> You cannot print either of the booleans as they are Private members/inacessible
}
