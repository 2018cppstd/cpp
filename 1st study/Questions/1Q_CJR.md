Question1. CJR
======================
#### 1. 상수와 리터럴의 의미와 차이점에 대하여 설명하세요
 - 상수(constant) : 변하지 않는 변수, 상수뿐 만 아니라 클래스, 객체, 유도형 데이터 값을 넣을 수 있다.(const표현)
 - 리터럴 : 변수에 넣는 변하지 않는 데이터 
 - 차이 :  상수와 달리 동적으로 사용하는 인스턴스는 리터럴이 될수 없다 -> 값이 언제 바뀔지 모르므로

#### 2.  Overloading 과 Overriding의 각각의 의미와 차이점에 대하여 설명하세요
 - 오버로딩은 중복정의이다. 함수의 이름은 같지만 타입과 파라메터 갯수, 타입이 다른 경우를 이야기 한다.
 - 오보라이딩은 재정의이다. 상속관계에서 부모클래스에 있는 멤버함수를 자식 클래스에 있는 멤버함수로 재정의 하는 경우이다.

#### 3. side-effect란 무엇이며 함수에서 side-effect가 발생하는 경우와 문제점을 각각 설명하세요
 - 함수 부작용 : 함수가 비지역변수 혹은 양방향 파라메터의 값을 변경할때 원하는 결과값이 나오지 않을수 있다.

#### 4. pass-by-reference와 pass-by-value에 대하여 설명하고, 각각 c언어와 c++에서의 경우를swap()함수를 예시로 설명하세요

![KakaoTalk_20180716_231138998](C:\Users\Juri Choi\Documents\카카오톡 받은 파일\KakaoTalk_20180716_231138998.jpg)

```
void swap_met(int i, int j){
    int temp;
    temp = i;
    i = j;
    j = temp;
}
void main(){
    int val = 3;
    int val2 = 2;
    printf("origined val : %d, val2 : %d",val,val2)
    swap(val,val2);
    printf("changed val : %d, val2 : %d",val,val2)
}
```

| 결과값 | value | reference |
| :----: | :---: | :-------: |
|   c    | 3, 2  |   2, 3    |
|  c++   | 3, 2  |   2, 3    |



#### 5. 프로그램 실행시간이 0.5초 이상이 되는 연산 및 동작에 대한 예외처리를 디자인 하시오(throw - catch, 및 사용자 정의 exception 사용)

```
try {
    if(...)
    	throw ex
}
catch(timeout-exception ex){

}
```

