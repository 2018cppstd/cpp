#pragma once
#include "total.h"

class Shop {
public:
	Shop() {};
	Shop(std::string name);	// ������

	void ShowItemList();
private:
	std::string name;
};