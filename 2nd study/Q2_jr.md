Question2. JR
======================
# 1. 클래스와 구조체의 차이에 대하여 설명하세요.
## - 접근 지정자의 차이이다. 구조체는 public 으로 가능하지만 클래스는 public과 private, protected로도 가능하다.

# 2. 캡슐화(encapsulation)에 대하여 설명하고, 캡슐화가 OOP에서 갖는 측면에 대하여 서술하세요.
## - 캡슐화란 클래스를 정의하는데 있어서 관련있는 데이터 및 함수를 하나로 묶는 것. OOP 언어에서는 데이터와 기능을 하나로 캡슐화할 수 있습니다.

# 3. 생성자란 무엇인지 설명하고, Money class의 Object를 생성할 때 여러 국가의 화폐로 초기화 할 수 있는 생성자를 3개 이상 구현하시오. (초기화 섹션을 이용할 것)
## - 생성자란, 클래스의 객체를 초기화하고 멤버함수의 작업환경을 만드는 메서드 이다. 
   class Money{
	public : 
		Money( float dollar_new, float euro_new, float won_new)
			 : dollar(dollar_new), euro(euro_new), won(won_new){} 
	};
# 4. default 생성자를 정의하지 않았을 때 생기는 문제점에 대해 서술하시오.
## - 변수의 의미없는 값이 생성될 수있다. 또, 디폴트 생성자가 없는 타입을 구현하기가 어려움.

# 5. 소멸자(Destructor)에 대하여 설명하고, 소멸자가 필요한 이유와 소멸자를 정의 하지 않았을 경우 발생하는 문제점에 대해 서술하고, 소멸자를 구현할 때 고려해야할 점에 대해 설명하세요.
## - 소멸자는 객체를 소멸시 호출하는 함수이다. 불필요한 메모리 사용을 줄이기 위해서 필요하다. 문제점은 메모리 누수가 있다. 소멸자의 예외처리하지 않는다. 가상함수가 포함되어있으면 가상소멸자이여야한다.

# 6. Dollars class를 생성하고 Dollars의 덧셈과 뺄셈을 수행하는 +,- 연산자를 오버로딩 하여 구현하시오. 
## ex) 
     $ 23.99 + $ 40.56 = $ 64.55

     단 dollars에서 Cents와 Dolloars는 각각의 변수로 구분되어 져야 한다.

     class Dollar : Money{
     public : 
	double amount;
	inline Dollar operater+(Dollar& o1, Dollar& o2){
		retutn o1.amount + o2.amount;
	}
	inline Dollar operator-(Dollar& o1, Dollar& o2){
		retutn o1.amount - o2.amount;
	}
    };