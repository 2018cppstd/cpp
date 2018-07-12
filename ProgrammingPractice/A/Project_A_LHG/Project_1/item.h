#pragma once
#include "total.h"

class Item {
public:
	Item() {};
	Item(std::string name, std::string description, int weight, int value);
	virtual void Describe()=0;
protected:
	std::string name;
	std::string description;
	int weight;
	int value;
};