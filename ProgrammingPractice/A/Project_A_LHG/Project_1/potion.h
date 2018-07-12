#pragma once
#include "total.h"

class Potion : public Item {
public:
	Potion() {};
	Potion(std::string name, std::string description, int weight, int value, std::string type, int capacity);
	void Describe();
protected:
	std::string type;
	int capacity;
};

class MagicPotion : public Potion {
public:
	MagicPotion(std::string name, std::string description, int weight, int value, 
				std::string type, int capacity, std::string effect, int duration);
	void Describe();
private:
	std::string effect;
	int duration;
};