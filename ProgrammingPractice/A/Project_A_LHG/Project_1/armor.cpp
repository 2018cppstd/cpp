#include "total.h"
#include <string>
Armor::Armor(std::string name, std::string description, int weight, int value, int defense) : Item(name,description,weight,value), defense(defense) {}

void Armor::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "Defense = " << this->defense << std::endl << std::endl;
}

HeavyArmor::HeavyArmor(std::string name, std::string description, int weight, int value, int defense,
	int magicdefense, int physicaldefensee) :Armor(name,description,weight,value,defense),
	magicdefense(magicdefense), physicaldefense(physicaldefense) {}

void HeavyArmor::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "Defense = " << this->defense << std::endl;
	std::cout << "MagicDefense = " << this->defense << std::endl;
	std::cout << "PhysicalDefense = " << this->defense << std::endl << std::endl;
}

LightArmor::LightArmor(std::string name, std::string description, int weight, int value, int defense,
	int magicdefense, int physicaldefensee) : Armor(name, description, weight, value, defense),
	magicdefense(magicdefense), physicaldefense(physicaldefense) {}

void LightArmor::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "Defense = " << this->defense << std::endl;
	std::cout << "MagicDefense = " << this->defense << std::endl;
	std::cout << "PhysicalDefense = " << this->defense << std::endl << std::endl;
}

Robe::Robe(std::string name, std::string description, int weight, int value, int defense,
	int magicdefense, int physicaldefensee) : Armor(name, description, weight, value, defense),
	magicdefense(magicdefense), physicaldefense(physicaldefense) {}

void Robe::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "Defense = " << this->defense << std::endl;
	std::cout << "MagicDefense = " << this->defense << std::endl;
	std::cout << "PhysicalDefense = " << this->defense << std::endl << std::endl;
}