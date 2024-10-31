#include <iostream>
using namespace std;

float CountPunctuation()
{
	int counter;

	for (int i = 0; i <= str.size(); i + 1)
	{
		if (str[i] == '.' || '!' || '?')
			counter += 1;
	}

	return counter;
}

