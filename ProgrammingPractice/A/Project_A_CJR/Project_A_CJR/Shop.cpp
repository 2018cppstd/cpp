#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Shop.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"

using namespace std;

Shop::Shop() {
}

void Shop::ShowItemList_first() {

	Weapon wea;
	wea.Describe();

	Armor arm;
	arm.Describe();

};


void Shop::ShowItemList_second() {

	Potion pot;
	pot.Describe();
	
};