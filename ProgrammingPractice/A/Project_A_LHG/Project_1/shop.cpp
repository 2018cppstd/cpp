#include "total.h"

using namespace std;
using std::string;
template<typename Out>
void split(const std::string &s, char delim, Out result) {   // txt파일에 있는 자료를 split하기 위해 stack over flow에서 참조함.
	std::stringstream ss;
	ss.str(s);
	std::string item;
	while (std::getline(ss, item, delim)) {
		*(result++) = item;
	}
}
std::vector<std::string> split(const std::string &s, char delim) {   // txt파일에 있는 자료를 split하기 위해 stack over flow에서 참조함.
	std::vector<std::string> elems;
	split(s, delim, std::back_inserter(elems));
	return elems;
}

Shop::Shop(std::string name) : name(name) {}


void Shop::ShowItemList() {
	if (name == "WA") {
		string buffer,buffer2;
		vector<string> readline,readline2;
		ifstream infile1, infile2;
		infile1.open("Armor.txt");
		while (getline(infile1, buffer)) {
			readline.push_back(buffer);
		}

		for (auto s : readline) {
			vector<string>splitData = split(s, ',');	//index 8개
			if (splitData[0] == "HeavyArmor") {
				HeavyArmor H_armor(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), stoi(splitData[7]));
				H_armor.Describe();
			}
			else if (splitData[0] == "LightArmor") {
				LightArmor L_armor(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), stoi(splitData[7]));
				L_armor.Describe();
			}
			else{	//Robe
				Robe robe(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), stoi(splitData[7]));
				robe.Describe();
			}
		}
		infile1.close();

		infile2.open("Weapon.txt");
		while (getline(infile2, buffer2)) {
			readline2.push_back(buffer2);
		}

		for (auto s : readline2) {
			vector<string>splitData = split(s, ',');	//index 9개
			if (splitData[0] == "Sword") {
				Sword sword(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), splitData[7], stoi(splitData[8]));
				sword.Describe();
			}
			else if (splitData[0] == "Spear") {
				Spear spear(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), splitData[7], stoi(splitData[8]));
				spear.Describe();
			}
			else if (splitData[0] == "Bow") {
				Bow bow(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), splitData[7], stoi(splitData[8]));
				bow.Describe();
			}
			else if (splitData[0] == "Wand") {
				Wand wand(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), splitData[7], stoi(splitData[8]));
				wand.Describe();
			}
			else {	//shield
				Shield shield(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), stoi(splitData[5]), stoi(splitData[6]), splitData[7], stoi(splitData[8]));
				shield.Describe();
			}
		}
		infile2.close();
	}
	if (name == "P") {
		string buffer;
		vector<string> readline;
		ifstream infile("Potion.txt");
		while (getline(infile, buffer)) {
			readline.push_back(buffer);
		}
		for (auto s : readline) {
			vector<string>splitData = split(s, ',');	//index 6개
			if (splitData[0] == "Potion") {
				Potion potion(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), splitData[5], stoi(splitData[6]));
				potion.Describe();
			}
			else {
				MagicPotion M_potion(splitData[1], splitData[2], stoi(splitData[3]), stoi(splitData[4]), splitData[5], stoi(splitData[6]), splitData[7], stoi(splitData[8]));
				M_potion.Describe();
			}
		}
		infile.close();

	}
}