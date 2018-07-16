#pragma once

#include <iostream>
#include <string>


using namespace std;

class Shop {
public:
	Shop();
	Shop(string name, ...);
	void ShowItemList_first();
	void ShowItemList_second();
private:
	string name;
};