Project A : Design gameshop

## 과제 설명

우리가 흔히 즐기는 RPG 게임에서는 게임 진행을 위한 필수 품목인 여러가지 장비 및

아이템을 판매하는 상점이 존재한다.

이번 프로그래밍 프로젝트에서는 게임 상점을 구현해보도록 하자.

`Item` 클래스를 생성한다. `Item` 클래스는 다음과 같은 파생클래스들을 가지고 있다.

```c++
class Item {
    public:
    	Item();
    	Item(string name, string description, int weight, int value);
    	virtual void Describe();
    private:
    	string name;
    	string description;
    	int weight;
    	int value;
}

class Weapon : public Item {
    public :
    	Weapon();
    	Weapon(string name, string description, int weight, int value, int damage);
    	void Describe();
    private :
    	int damage;
}

class Armor : public Item {
    public :
    	Armor();
    	Armor(string name, string description, int weight, int value, int defense);
    	void Describe();
    private :
    	int defense;
}

class Potion : public Item {
    public :
    	Potion();
    	Potion();
    	void Describe();
    private :
    	string type;
    	int capacity;
}

/* 

각 파생 클래스는 다음과 같은 파생클래스로 이루어져 있다.

Weapon : Sword, Spear, Bow, Wand, Shield
Armor : HeavyArmor, LightArmor, Robe
Potion : MagicPotion

Weapon 의 파생클래스들은 다음과 같은 멤버 변수를 가지고 있다.
durability : 내구도
grip : 한손/양손 무기
range : 사거리

Armor 의 파생클래스들은 다음과 같은 멤버 변수를 가지고 있다.
type : 방어구 속성
magicdefense : 마법 방어력
physicaldefense : 물리 방어력

Potion 의 파생클래스는 다음과 같은 멤버 변수를 가지고 있다.
effect : 효과
duration : 지속시간

*/
```

각 `Item `의 정보는 파일 입출력을 통해 읽어올 수 있도록 구현한다.

이후 상점을 위한 `Shop` 클래스를 생성한다.

```c++
class Shop {
    public :
    	Shop();
    	Shop(string name, ... );
    	void ShowItemList();
    private :
    	string name;
}

/*
Shop 클래스에서는 ShowItemList()를 통하여 보유하고 있는 아이템 목록을
출력할 수 있어야 한다.

다음은 실행 예시이다.

- Shop Select -
   1. Weapon/Armor Shop
   2. Potion Shop
   3. Exit

Select : 1

Welcome to Weapon/Armor Shop!
- Item List -
Name        = Sword
Description = Medium DMG
Weight      = 3 lbs
Value       = 10 gold coins
Damage      = 10

Name        = Cap
Description = Light Armor
Weight      = 1 lbs
Value       = 5 gold coins
Defense     = 5

*/
```

위의 코드를 이용하여 프로젝트를 완성하시오.

