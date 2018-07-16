#pragma once

#include <iostream>
#include <string>
#include "Item.h"

using namespace std;



class Armor : public Item {
public:
	Armor();
	Armor(string name, string description, int weight, int value, int defense);
	void Describe();
private:
	int defense;
};