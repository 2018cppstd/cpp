// Project_A_CJR.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//


#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Shop.h"

using namespace std;

int main() {

	Shop store;

	// 메뉴판 출력 	
	cout << "-------- Shop Select ---------" << endl;
	cout << "   1. Weapon / Armor Shop" << endl;
	cout << "   2. Potion Shop" << endl;
	cout << "   3. Exit \n" << endl;
	cout << "   Select : ";

	int select;		// select the num
	cin >> select;
	cout << endl;

	// 입력받은 상점에 맞게 switch문으로 select
	switch (select) {
		case 1: 	
			cout << "Welcome to Weapon/Armor Shop!" << endl;
			cout << "- Item List -" << endl;
			store.ShowItemList_first();
			cout << endl;
			break;
		case 2 :
			cout << "Welcome to Potion Shop!" << endl;
			cout << "- Item List -" << endl;
			store.ShowItemList_second();
			cout << endl;
			break;
		defalt:  exit(0); break;	// 3과 그 다른 단어들을 입력했을때 프로그램 종료

	}

	return 0;

}
