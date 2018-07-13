##2RQ_LJH

1. class 내부에서 1개 이상의 static 또는 const 멤버 선언이 가능한지 여부를 조사하고 이유를 서술

- static은 1개 이상 사용가능하다. 다만 멤버 변수로 선언시 class 안에서 초기화를 하진 못하고 클래스 외부에서 초기화를 해주어야 한다.

  ```
  #include <iostream>
  using namespace std;
  
  class LED {
  public:
  	void turnOn();
  	void turnOff();
  	static int count_on;
  	static int count_off;
  
  private:
  };
  
  int LED::count_on = 0;
  int LED::count_off = 0;
  
  int main() {
  	LED led;
  	
  	led.turnOn();
  	led.turnOff();
  	led.turnOn();
  	cout << "LED 동작 횟수는 : " << led.count_on << " " << led.count_off;
  	return 0;
  }
  
  void LED::turnOn(){
  	cout << "불이 켜지다" <<endl;
  	LED::count_on++;
  };
  
  void LED::turnOff() {
  	cout << "불이 꺼지다"<<endl;
  	LED::count_off++;
  };
  ```

- const 역시 class 내부에서 사용 가능하다.  클래스 멤버 함수에 const가 붙는다면 멤버 변수의 값의 변경을 허용하지 않음은 물론이고, 멤버 변수값의 변경에 대한 기회도 제공하지 않는 것을 의미한다.



2. 초기화 섹션을 사용하는 이유에 대해 조사하고 초기화 섹션을 사용할 때와 사용하지 않았을 때의 차이점 서술

- 반드시 초기화 섹션(초기화 리스트)를 사용해야 하는 경우

  1) 상수 멤버 변수 초기화

  	- class를 정의한 것은 모양만을 명시하는 것이지 메모리를 할당하는 것은 아니다. 따라서 class 내에서 직접 값을 넣는 것은 불가능하다. 이때 초기화 리스트를 사용하는 것이다.

  2) 레퍼런스 멤버 변수 초기화

  - 레퍼런스는 변수에 대한 또 다른 이름이기 때문에 반드시 그 대상이 존재해야 하는데 레퍼런스는 생성시에 해당되는 짝이 있다. 이것을 해주는 것이 초기화 리스트이다.

  3) 포함된 객체의 초기화

  4) 상속받은 멤버 변수를 초기화 할때

  - 상속받은 멤버는 자식 클래스에서 직접 초기화 할 수 없기 때문에 초기화하는 작업을 부모 클래스에 요청을 해야한다. 이때 사용된다.

    

3. default 생성자의 동작에 대해 설명

- 기본적인 생성자의 작업 순서

  1) 생성자는 선언 순서대로 기본 클래스 및 멤버 생성자를 호출

  2) 클래스가 가상 기본 클래스에서 파생된 경우 해당 클래스는 개체의 가상 기본  포인터를 초기화

  3) 클래스가 가상 함수를 포함하거나 상속하는 경우 해당 클래스는 개체의 가상 함수 포인터를 초기화

- default 생성자

  1) 매개 변수가 없다.

  2) 실질적으로 수행하는 작업은 없지만 형식 외부에서 개체를 생성하거나 소멸할 수 있게 가시성을 제공하는 역할

  

4. default 복사 생성자의 동작에 대해 설명

```
#include <iostream>
using namespace std;

class AAA
{
public:
	int n;
};

void main() {
	AAA a;
	a.n = 10;
	AAA b(a);			//default 복사 생성자
	cout << a.n << endl;
	cout << b.n << endl;	
}
```

- 복사생성자가 자동으로 생성되어 b.n 에 a.n 의 값을 넣어준다

```
AAA (AAA& a)
{
    n = a.n;
}
```

실제 코드에서 위의 동작을 실행하게 된다.

문제점 : default 생성자는 클래스 내부에 생성자가 1개라도 있으면 생성이 안된다. 하지만 default 복사 생성자는 그렇지 않다. AAA b(a); 의 상황이 생기면 생성자가 있던 없던 디폴트 복사생성자를 만든다. -> 같은 메모리를 2곳에서 사용하는 경우가 생겨 소멸자로 메모리를 삭제해도 똑같은 곳을 삭제해야 하는 경우가 생기는 것. 깊은 복사를 할 수 있도록 처리 해주어야 한다.



5. default 소멸자가 존재하는지 조사하고 생성자와 소멸자의 호출관계에 대하여 설명

- 디폴트 생성자가 있드시 디폴트 소멸자도 있다.  AAA 라는 클래스가 정의가 되어있다면 ~AAA(){...}의 소멸자도 생성이 된다.  

  - 호출 관계

    - 전역으로 객체가 있을 경우

       -main보다 먼저 생성자가 호출이 된 후 main함수가 끝나면 소멸자가 호출된다

    - main 안에 객체가 있을 경우

       -객체가 선언이 될 때 생성자가 호출이 되고 객체를 해제 할 때 소멸자가 호출된다.

      

  6.복사 생성자가 필요한 이유에 대해 설명

  생성자는 메모리 할당과 관련이 있는데 이 때 할당의 횟수와 해제의 횟수가 다르면 문제가 생길 수 있다. 이것을 예방하고자 생성자가 필요한 것이다.

  

  7.this 포인터에 대해 설명하고 this 포인터를 사용하는 예시를 3가지 이상 작성

- this 포인터 : this 는 객체 자신에 대한 포인터로서 클래스의 멤버 함수 내에서만 사용된다. this는 객체의 멤버함수가 호출될 때 컴파일러에 의해 보이지 않게 전달되는 객체에 대한 주소이다.

  - this는 객체 자신을 가리키는 포인터이다.
  - 객체마다 있다
  - 클래스의 멤버함수에서만 사용할 수 있다
  - static 멤버함수에서는 사용할 수 없다.

- 제약 조건

  - this는 클래스의 멤버 함수에서만 사용할 수 있다. 멤버가 아닌 함수에서는 this를 사용 할 수 없다.

    (why?) 그 함수들은 어떤 객체에도 속하지 않기 때문

  - 멤버 함수라도 정적 멤버 함수에는 this를 사용할 수 없다. 정적 멤버 함수는 객체가 생성되기 전에 호출될 수 있으며, 정적 멤버 함수가 실행해지는 시점에서 현재 객체는 존재하지 않을 수 있기 때문

- this를 반드시 필요한 경우

  - 멤버 변수의 이름과 동일한 이름으로 매개 변수 이름을 짓고자 하는 경우
  - 객체의 멤버함수에서 객체 자신의 주소를 리턴 할 때

```
#include <iostream>
using namespace std;

class aaa
{
	int num;
public:
	int add(int num, int num2);
};

void main() {
	int n1, n2;
	aaa a;
	n1 = 10, n2 = 20;
	
	cout << a.add(n1, n2) << endl; 

}

int aaa::add(int num, int num2)
{
	this->num = num + num2;

	return this -> num;
}
========================================================
결과 : 30
```



```
#include <iostream>
using namespace std;

class ThisPointer
{
private:
	int num1;
	int num2;
public:
	ThisPointer(int num1, int num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	void printNumber() {
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};


int main()
{
	ThisPointer num(2, 4);		//int 형인 2,4를 ThisPointer의 변수 num1,num2 로 넘겨줌
	num.printNumber();			
	return 0;
}
======================================================
결과 : 2
	  4
```

```
#include <iostream>
using namespace std;

class SelfReferance
{
private:
	int num;
public:
	SelfReferance(int n)
		:num(n)
	{
		cout << "인스턴스 생성 " << endl;
	}
	SelfReferance& add(int n)
	{
		num += n;
		cout << "num :" << num << endl;
		return *this;
	}
	SelfReferance& min(int n)
	{
		num -= n;
		cout << "num :" << num << endl;
		return *this;
	}
};

void main() {
	SelfReferance srf(3);
	SelfReferance& ref = srf.add(2);

	srf.add(2);
	ref.min(2);

	ref.add(2).min(2).add(2).min(2);

}
================================================
결과:
인스턴스 생성
num :5
num :7
num :5
num :7
num :5
num :7
num :5
```

