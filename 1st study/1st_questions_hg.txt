1. 상수란? 변하지 않는 데이터 값. -> 숫자 뿐만 아닌 클래스나 구조체 같이 기본형에서 파생된 객체나 유도형같은 데이터를 넣을 수 있다.
   => const 제어자를 씀. 참조 변수가 상수가 된다는 의미지 그 주소가 가르키는 데이터들까지 상수라는 의미는 아님.
   요약: 참조 변수나 객체 자체가 상수지 그 안의 데이터는 바뀔 수 있음. 제어자는 const. 변수의 메모리 값을 변경 할 수 없음.

   리터럴이란? 데이터 그 자체를 뜻함. 데이터를 변경 할 수 없음. 인스턴스는 동적으로 사용되려고 설계가 되었기 때문에 리터럴이 될 수 없음.
   하지만, immutable 클래스라는 불변 클래스는 객체 리터럴이라고 불림. 한번 클래스를 생성하면 그 안의 데이터가 변하지 않음. 만약, 변해야 할 상황이면 새로운 객체를 만듬.
   요약: 변수의 값이 변하지 않는 데이터를 의미. 보통은 기본형의 데이터를 의미하지만 특정 객체 한에서는 리터럴이 될 수 있다.

2. Overlading : 같은 이름의 함수에 매개변수를 다르게 사용해서 매개 변수에 따라 다른 함수가 실행 됨.
   Overriding : 상속 받았을때 부모 클래스의 함수를 사용하지 않고 다른 기능을 실행할때 함수를 자식클래스에서 같은 이름, 매개변수로 재정의해서 사용하는 것
   차이점: 오버로딩은 함수의 이름이 같지만 매개변수의 갯수를 통해 해당하는 함수를 호출. 상속관계가 아님. 오버라이딩은 상속받은 클래스에서 부모의 클래스에 있는 함수를 쓰지 않고 다른 기능으로 자식 클래스내에 부모 클래스에 있는 함수의 이름과 매개 변수를 재정의 해서 사용함.

3. side-effect란? 프로그램 실행 중에 어떤 객체를 접근해서 변화가 일어나는 행위. 
   함수에서 side-effect가 발생하는 경우: y = x++;을 했을경우 x와 y값이 변하므로 side-effect가 두 번 발생한다.
   문제점: 의도치 않은 결과가 나올 수 있음. 매크로를 사용했을때 연산결과가 달라질 수 있음. #define mul(x) x*x / mul(a+b) 연산자 우선순위 위배. && || 연산자 뒤에 side effect 식이 온다면 && ||의 앞의 식이 false일 경우, 뒤의 side effect 식이 실행이 되지 않음.

4. pass-by-reference : 함수 호출 시 전달하려는 인자를 참조 자료형을 사용한 경우.(주소에 의한 전달)
   pass-by-value : 함수 호출 시 자료형의 값을 인자로 전달.(값에 의한 전달)

  => C언어 pass-by-value
  void main()
 {
    int a,b;
    swap(a,b);
 }
 void swap(int a1, int b1)
{
  int temp;
  temp = a1;
  a1 = b1;
  b1 = temp;
}
------------------------------------
 => C언어 pass-by-reference - 포인터형을 전달하기 때문에 reference처럼 행동하지만 결국 c언어에는 pass-by-value밖에 없음.
  void main()
 {
    int a,b;
    swap(&a,&b);
 }
 void swap(int *a1, int *b1)
{
  int temp;
  temp = *a1;
  *a1 = *b1;
  *b1 = temp;
}
----------------------------------
 => C++ pass-by-value - c와 같음
  void main()
 {
    int a,b;
    swap(a,b);
 }
 void swap(int a1, int b1)
{
  int temp;
  temp = a1;
  a1 = b1;
  b1 = temp;
}
------------------------------------
 => C++ pass-by-reference
  void main()
 {
    int a,b;
    swap(a,b);
 }
 void swap(int &a1, int &b1)
{
  int temp;
  temp = a1;
  a1 = b1;
  b1 = temp;
}
-----------------------------------

5. 의문점: timer interrupt를 쓰면 될 것 같은데 찾지 못함.
int main(){
  clock_t begin, end;
  try{
    begin = clock();
	/*수행 코드*/
    end = clock();
    if((double)((end-begin) / CLOCKS_PER_SEC) >= 0.5)
       throw timeoutException;
  }
  catch(const timeoutException& e){
  	cout << "time over" <<endl;
  }
   
















