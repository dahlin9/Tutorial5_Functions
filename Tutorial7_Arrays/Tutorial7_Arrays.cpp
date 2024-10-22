#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaration of 3 integer elements
    int alphaArray[3] = { -5,-10,-15 };
    cout << alphaArray[0] << endl;
    cout << alphaArray[1] << endl;
    cout << alphaArray[2] << endl;

    // Player struct suitable for a 4 player co-op game
    struct playerStats {
        // string playerName[4] = {};
        int playerAge[4];
    };

    // Player ages list
    vector <int> playerStats;
    playerStats.push_back(18);
    playerStats.push_back(24);
    playerStats.push_back(32);
    playerStats.push_back(45);

    for (int ages : playerStats)
        cout << ages << endl;

    // Insertion of data into the elements to check they work
   //playerName[0] = { "Alpha" };
   //playerName[1] = { "Beta" };
   //playerName[2] = { "Charlie" };
   //player Name[3] = { "Delta" };

}

