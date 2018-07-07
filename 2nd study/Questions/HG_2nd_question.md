# 1.struct와 class의 차이점

C++에서는 struct와 class는 동작 방식이 일치한다.

차이점은 struct는 기본 접근 지정자가 public, class는 private이다.

# 2.캡슐화란?

class를 정의할때 관련이 있는 데이터 및 메소드를 하나로 묶는 것이다. 캡슐화를 하면서 정보 은닉도 함께 가져오는 효과가 있다.

캡슐화가 OOP에서 갖는 측면:  객체의 관점에서 캡슐화를 하게 되면, 메소드의 이름만 보여주고, 내부 코드를 보여주지 않아도 된다.

# 3.생성자란

생성자는 클래스의 개체를 초기화하고 멤버 함수의 작업 환경을 만드는 메서드다. 생성자는 클래스의 이름과 같은 이름을 갖는 멤버함수다.

1. money(int new_m,string new_c){

​       m = new_m; c = new_c;

​       }

2. money(int new_m,string new_c) : m(new_m), c(new_c) {}
3. money(int new_m,string new_c) : m(), c() {

​       m = new_m; c = new_c;

​       }

# 4.default 생성자를 정의하지 않았을 때 생기는 문제점

디폴트 생성자를 정의하지 않고 다른 생성자를 정의했을때 컴파일 에러.

디폴트 생성자가 없는 타입의 컨테이너를 구현하기 매우 까다로움.

실행했을때 외부에서는 변수들이 의미없는 값으로 생성이 되어 있음.



# 5. 소멸자(Destructor)에 대하여 설명하고, 소멸자가 필요한 이유와 소멸자를 정의 하지 않았을 경우 발생하는 문제점에 대해 서술하고, 소멸자를 구현할 때 고려해야할 점에 대해 설명하세요.

소멸자는 객체의 메모리 반환을 위해 파괴할 때마다 호출되는 함수이다. 앞에~가 붙으며 리턴타입이 없고 인수가 없다. 정의 하지 않을 경우 컴파일러에서 자동으로 만들지만, 없을 경우 내부 메모리 누수가 일어날 수 있다. 혹시나 예외가 발생하면 모든 할당 받은 리소스를 해제해야한다.

소멸자를 구현 할 때는 예외처리를 하면 안된다. 그리고 클래스에 virtual함수가 포함되어 있으면 소멸자도 virtual이어야 한다.

# 6. Dollars class를 생성하고 Dollars의 덧셈과 뺄셈을 수행하는 +,- 연산자를 오버로딩 하여 구현하시오. 

class Dollars{

private:

​	int d, c;

public:

​	Dollars(int d1 = 0, int c1 = 0) : d(d1), c(c1) {}

​	Dollars operator+(const Dollars& m);

​	Dollars operator-(const Dollars& m);

};

Dollars Dollars::operator+(const Dollars& m)

{

​	if(c+m.c >=100)		

​		Dollars op(d+m.d+1,c+m.c-100);

​	else

​		Dollars op(d+m.d,c+m.c);

​	return op;

}

Dollars Dollars::operator-(const Dollars& m)

{

​	if(c - m.c < 0)		

​		Dollars op(d - m.d - 1,100 +  c - m.c);

​	else

​		Dollars op(d - m.d,c - m.c);

​	return op;

}