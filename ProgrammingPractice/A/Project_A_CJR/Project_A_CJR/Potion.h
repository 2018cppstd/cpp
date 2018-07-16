#pragma once


#include <iostream>
#include <string>
#include "Item.h"

using namespace std;


class Potion : public Item {
public:
	Potion();
	void Describe();
private:
	string type;
	int capacity;
};