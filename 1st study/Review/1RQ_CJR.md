1RQ _ CJR

1. ##### namespace란 무엇인가? header와 namespace를 비교하시오

   - namespace는 변수 이름이나 함수 이름과 같이 명칭을 사용하는 공간으로 소속을 나타냄.
      header는 자주사용하는 상수와 함수를 저장해둔것이다.

      

2. ##### auto type으로 casting 가능한 data type은 어디까지 인지조사하시오

   - 기본 자료형 과 그외의 구조체 클래스도 될수있습니다. 다만, 매개변수나 멤버 변수로는 사용 불가

   

3. ##### non-local variable에 대하여 설명하고 c++에서 non-local variable이 존재하는지 여부에 대하여 설명하시오

   - 현재 스코프에서 선언하지 않은 변수, 

     

4. ##### 범위기반 for statements와 for-each statements를 비교하시오

   범위기반 for 문 : 

   ```
   int n[] = {1,2,3,4,5};
   for(int num : n){ 
   	printf("%d\n", num); 
   	}  // 인수가 정수타입.
   ```

   for - each 문 : 

   ```
   int n[] = {1,2,3,4,5}; 
   for each(int num in n){ 
   	printf("%d\n", num); 
   	}
   ```

   

5. ##### 범위기반 for statements에서 string 객체의 원소인 하나의 char type의 인스턴스를 추출하고 싶을 때 다음과 같은 for statements를 완성하시오 

   /* 
   	String = "HELLO CPP"
   	Out Result = H E L L O C P P 
   */

   ```
   char a[8];
   int i = 0;
   string he = "HELLO CPP";
   for(char b : he){
   	a[i] = b;
   	i++;
   	}
   ```

   

6. ##### Overloading, Overriding, Virtual, Abstract를 각각 비교하여 설명하시오

   Overloading : 이름이 같은 함수가 인자수, 인자 타입, 반환값 다름으로 구별
   Overriding : 상속 관계에서 자식클래스가 부모클래스 무시하고 재정의
   Virtual  : 상속하는 클래스 내에서 오버라이딩 될수 있는 함수 또는 메소드 
   Abstract : 성격이 비슷한 클래스들 끼리 묶기 위한 수단

   

7. ##### try-catch throw에 대하여 설명하고, throw 구문에서 다시 throw가 발생했을때 처리 방법에 대하여 설명하시오

   try블록에서 예외 발생하면 catch로 가서 예외처리를 해준다. throw는 특정 예외를 정의하여 그 예외에 대해서 catch가 처리해줌.
   throw를 하나만 써준다.

8. ##### NULL 과 nullptr을 비교하여 설명하시오

   null : 데이터 타입니다. (0 or nullptr )
   nullptr : null pointer. 항상 포인터 유형이다.
