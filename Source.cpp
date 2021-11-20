#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Name_Value.h"
using namespace std;


int main()
{
	vector<Name_value> namesAndValues;
	string name;
	int value;

	while (true)
	{
		cin >> name >> value;
		if (name == "NoName" && value == 0)
		{
			break;
		}
		for (Name_value const& n : namesAndValues)
		{
			if (n.getName() == name)
			{
				cerr << "The name " << name << " is duplicated!" << endl;
				exit(1);
			}
		}
		namesAndValues.push_back(Name_value{ name, value });
	}
	for (Name_value const& n : namesAndValues)
	{
		cout << n.getName() << " " << n.getValue() << endl;
	}
	return 0;
}