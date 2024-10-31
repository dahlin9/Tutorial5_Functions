#include <iostream>
using namespace std;

float CountPunctuation(string str)
{
	int counter = 0;

	for (int i = 0; i <= str.size(); i ++)
	{
		if (str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			counter += 1;
		}
	}

	return counter;
}

int main()
{
	string sentence = "ajunhsg, lknouhbioerw! nukhskuhbef. jkbbwsn.";
	cout << CountPunctuation(sentence) << endl;	
}
