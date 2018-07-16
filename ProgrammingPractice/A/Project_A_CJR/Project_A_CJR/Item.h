#pragma once

#include <iostream>
#include <string>

using namespace std;

class Item {
public:
	Item();
	Item(string name, string description, int weight, int value);
	virtual void Describe();
private:
	string name;
	string description;
	int weight;
	int value;

};
