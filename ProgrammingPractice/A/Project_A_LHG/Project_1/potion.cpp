#include "total.h"

Potion::Potion(std::string name, std::string description, int weight, int value, std::string type, int capacity) :Item(name,description,weight,value), type(type), capacity(capacity) {}

void Potion::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "Type = " << this->type << std::endl;
	std::cout << "Capacity = " << this->capacity << std::endl << std::endl;
}

MagicPotion::MagicPotion(std::string name, std::string description, int weight, int value,
	std::string type, int capacity, std::string effect, int duration): Potion(name,description,weight,value,type,capacity), effect(effect), duration(duration) {}

void MagicPotion::Describe() {
	std::cout << "Name = " << this->name << std::endl;
	std::cout << "Description = " << this->description << std::endl;
	std::cout << "Weight = " << this->weight << " lbs" << std::endl;
	std::cout << "Value = " << this->value << " gold" << std::endl;
	std::cout << "Type = " << this->type << std::endl;
	std::cout << "Capacity = " << this->capacity << std::endl;
	std::cout << "effect = " << this->effect << std::endl;
	std::cout << "duration = " << this->duration << std::endl << std::endl;
}