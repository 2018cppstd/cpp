#include "total.h"

int main() {
	int btn;
	std::cout << "-Shop Selct -" << std::endl << "1. Weapon/Armor Shop" << std::endl << "2. Potion shop" << std::endl << "3. exit" << std::endl;
	std::cin >> btn;
	if (btn == 1) {
		Shop s1("WA");
		std::cout << "Select : 1" << std::endl;
		std::cout << "- Welcome to Weapon/Armor Shop! -" << std::endl << "- Item List -" << std::endl << std::endl;
		s1.ShowItemList();
	}
	else if (btn == 2) {
		Shop s2("P");
		std::cout << "Select : 2" << std::endl;
		std::cout << "- Welcome to Potion Shop! -" << std::endl << "- Item List -" << std::endl << std::endl;
		s2.ShowItemList();
	}
	else if (btn == 3) {
		exit;
	}
	else
	{
		std::cout << "잘못 선택 했습니다." << std::endl;
	}

	return 0;
}