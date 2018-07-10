#### 1. class 내부에서 1개 이상의 static 또는 const 멤버 선언이 가능한지 여부를 조사하고 이유를 서술하시오.

```
한 Class 내부에 static 멤버 변수,함수와 const 멤버 변수,함수는 여러개 선언 가능하다.
클래스마다 static 멤버는 1개다라고 적혀있는 뜻은 클래스 인스턴스를 여러개 생성해도 static 멤버는 공통되게 사용된다는 뜻(한 인스턴스의 static 변수 값을 바꾸면 다른 인스턴스의 static 변수 값도 같이 바뀜)으로 class 정의 시 한개를 쓰든 여러개를 쓰든 영향이 가지 않는다.
const는 한번 초기화 하면 바뀌지 않는 상수이므로 한개든 여러개든 상관없음.
```
