#include "total.h"

Weapon::Weapon(std::string name, std::string description, int weight, int value, int damage) : Item(name, description, weight, value),damage(damage) {}

void Weapon::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "damage = " << this->damage << std::endl << std::endl;
}

Sword::Sword(std::string name, std::string description, int weight, int value, int damage,
	int durability, std::string grip, int range):Weapon(name, description, weight, value, damage),durability(durability), grip(grip), range(range) {}

void Sword::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "damage = " << this->damage << std::endl;
	std::cout << "durability = " << this->durability << std::endl;
	std::cout << "grip = " << this->grip << std::endl;
	std::cout << "range = " << this->range << std::endl << std::endl;
}

Spear::Spear(std::string name, std::string description, int weight, int value, int damage,
	int durability, std::string grip, int range) : Weapon(name, description, weight, value, damage), durability(durability), grip(grip), range(range) {}

void Spear::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "damage = " << this->damage << std::endl;
	std::cout << "durability = " << this->durability << std::endl;
	std::cout << "grip = " << this->grip << std::endl;
	std::cout << "range = " << this->range << std::endl << std::endl;
}

Bow::Bow(std::string name, std::string description, int weight, int value, int damage,
	int durability, std::string grip, int range) : Weapon(name, description, weight, value, damage), durability(durability), grip(grip), range(range) {}

void Bow::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "damage = " << this->damage << std::endl;
	std::cout << "durability = " << this->durability << std::endl;
	std::cout << "grip = " << this->grip << std::endl;
	std::cout << "range = " << this->range << std::endl << std::endl;
}

Wand::Wand(std::string name, std::string description, int weight, int value, int damage,
	int durability, std::string grip, int range) : Weapon(name, description, weight, value, damage), durability(durability), grip(grip), range(range) {}

void Wand::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "damage = " << this->damage << std::endl;
	std::cout << "durability = " << this->durability << std::endl;
	std::cout << "grip = " << this->grip << std::endl;
	std::cout << "range = " << this->range << std::endl << std::endl;
}

Shield::Shield(std::string name, std::string description, int weight, int value, int damage,
	int durability, std::string grip, int range) : Weapon(name, description, weight, value, damage), durability(durability), grip(grip), range(range) {}

void Shield::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "damage = " << this->damage << std::endl;
	std::cout << "durability = " << this->durability << std::endl;
	std::cout << "grip = " << this->grip << std::endl;
	std::cout << "range = " << this->range << std::endl << std::endl;
}