# 1. namespace란 무엇인가? header와 namespace를 비교하시오

```c++
namespace는 내부 식별자에 범위를 제공하는 선언적 영역. 여러 라이브러리가 포함된 경우 발생할 수 있는 이름 충돌을 방지하기 위해 사용됨. 헤더 파일안에 네임스페이스가 포함이 되어있다. 
    // 개이덕
```

#  2.auto type으로 casting 가능한 data type은 어디까지 인지 조사하시오

```
기본 자료형 및 구조체, 공용체, 클래스, 템플릿도 가능. 포인터 사용도 가능.
함수의 매개변수, 클래스나 구조체의 맴버 변수로 사용 불가.
```

# 3. non-local variable에 대하여 설명하고 c++에서 non-local variable이 존재하는지 여부에 대하여 설명하시오

```
글로벌은 논로컬일 수 있지만 논로컬은 글로벌이 될 수 없다. c++에서는 논로컬 변수가 존재 x 파이썬같은 언어에는 존재한다.
```

# 4. 범위기반 for statements와 for-each statements를 비교하시오

```c++
for(초기화 인수;범위 인수; 조건 인수 ){
    /*code*/
}
for(인수 in 범위){
    /*code*/
}
// 위에 for문은 인수의 초기화 범위 증감 조건이 다 필요하고 밑에 for-each문은 범위만 지정해주면 된다. 범위는 문자열 객체를 넣으면 그 객체의 range만큼 자동으로 실행된다.
```

## 5. 범위기반 for statements에서 string 객체의 원소인 하나의 char type의 인스턴스를 추출하고 싶을 때 다음과 같은 for statements를 완성하시오

```
String s = "asdfasdf";
for (auto a : s){
    cout << a << endl;
}
```

## 6. Overloading, Overriding, Virtual, Abstract를 각각 비교하여 설명하시오

```
오버로딩 : 참조 변수 갯수에 따라 메소드 명이 같아도 메소드가 사용 가능.
오버라이딩 : 부모에 있는 메소드와 이름은 같지만 다른 기능으로 구현할때 자식클래스에서 재정의.
가상함수 : 파생 클래스에서 다시 정의할수 있는 멤버 함수. -> 부모에서도 정의 가능하고 자식에서도 재정의 가능.
추상 클래스 : 가상함수로 이루어져있는 클래스. 파생클래스에서 모든 가상 함수가 정의되지 않으면 인스턴스 생성 불가.
```

## 7. try-catch throw에 대하여 설명하고, throw 구문에서 다시 throw가 발생했을때 처리 방법에 대하여 설명하시오

```c++
try{
   if()	throw a;
}catch(IOERROR : exception){
    if() throw b;
    catch(XXERROR : exception){
        /*code*/
    }
}
```

## 8. NULL 과 nullptr을 비교하여 설명하시오

```
기존의 NULL의 정의 : #define NULL 0 -> 상수 형.
nullptr은 pointer 형.
```

