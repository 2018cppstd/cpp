#pragma once
#include "total.h"

class Armor : public Item {
public:
	Armor() {};
	Armor(std::string name, std::string description, int weight, int value, int defense);
	void Describe();
protected:
	int defense;
};

class HeavyArmor : public Armor {
public:
	HeavyArmor(std::string name, std::string description, int weight, int value, int defense, 
				int magicdefense, int physicaldefense);
	void Describe();
private:
	const std::string type = "HeavyArmor";
	int magicdefense;
	int physicaldefense;
};

class LightArmor : public Armor {
public:
	LightArmor(std::string name, std::string description, int weight, int value, int defense, 
				int magicdefense, int physicaldefense);
	void Describe();
private:
	const std::string type = "LightArmor";
	int magicdefense;
	int physicaldefense;
};

class Robe : public Armor {
public:
	Robe(std::string name, std::string description, int weight, int value, int defense,
		int magicdefense, int physicaldefense);
	void Describe();
private:
	const std::string type = "Robe";
	int magicdefense;
	int physicaldefense;
};