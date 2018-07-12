#pragma once
#include "total.h"

class Weapon : public Item {
public:
	Weapon() {};
	Weapon(std::string name, std::string description, int weight, int value, int damage);
	void Describe();
protected:
	int damage;
};

class Sword : public Weapon {
public:
	Sword(std::string name, std::string description, int weight, int value, int damage,
		int durability, std::string grip, int range);
	void Describe();
private:
	int durability;
	std::string grip;
	int range;
};

class Spear : public Weapon {
public:
	Spear(std::string name, std::string description, int weight, int value, int damage,
		int durability, std::string grip, int range);
	void Describe();
private:
	int durability;
	std::string grip;
	int range;
};

class Bow : public Weapon {
public:
	Bow(std::string name, std::string description, int weight, int value, int damage,
		int durability, std::string grip, int range);
	void Describe();
private:
	int durability;
	std::string grip;
	int range;
};

class Wand : public Weapon {
public:
	Wand(std::string name, std::string description, int weight, int value, int damage,
		int durability, std::string grip, int range);
	void Describe();
private:
	int durability;
	std::string grip;
	int range;
};

class Shield : public Weapon {
public:
	Shield(std::string name, std::string description, int weight, int value, int damage,
		int durability, std::string grip, int range);
	void Describe();
private:
	int durability;
	std::string grip;
	int range;
};