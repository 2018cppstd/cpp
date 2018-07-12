#pragma once
#include "total.h"

class Shop {
public:
	Shop() {};
	Shop(std::string name);	// »ý¼ºÀÚ

	void ShowItemList();
private:
	std::string name;
};