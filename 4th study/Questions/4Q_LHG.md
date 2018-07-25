##### 1. c++에서의 functor를 c언어에서도 사용가능한지 조사하고 사용가능하다면 그 예시를 작성하시오.

```c++
functor기능은 c++에만 있다.
c언어에서는 functor는 없지만 함수 포인터를 이용해 함수를 매개 변수로 사용 가능.
#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
void exe((* fp)(int,int)){
     printf("%d \n",fp(1,2));	//결과 값 : 3
}
int main(){
 	exe(sum);	// 매개변수로 함수 호출
    printf("%d \n",sum(1,2));	//결과 값 : 3
    return 0;
}
```

##### 2. Lambda expression 의 특징을 조사하여 서술하시오.

```
람다의 기본 format
[capture](parameter) mutable throw() -> return-type {Lamda body}
1.람다 식은 자체 parmeter 및 capture된 매개 변수만 이용가능.
2.capture는 변수에 의한 캡쳐, 레퍼런스에 의한 캡쳐, 일반화된 캡쳐가 있다.
 1)변수에 의한 캡쳐 : 람다 식이 정의될 때 값을 캡쳐. ex) [x,y]
   그 후, 값이 바뀌어도 람다 식 내에는 영향을 미치지 않는다.
   캡쳐된 매개 변수는 mutable로 한정해주지 않는 이상 값 수정 불가.
   -> const 한정된 operator() / mutable키워드를 쓰면 const로 한정안함.
 2)레퍼런스에 의한 캡쳐 : 람다 함수 호출 시 그때 캡쳐된 매개변수 값을 사용 ex) [&x,&y]
   참조된 값 수정 가능.
 3)일반화된 캡쳐 : var = expr 형식 [&r = x, x = x + 1]
   컨텍스트에 없는 변수는 우 항으로 오지 못함.
3.C++14에서 매개 변수 형식이 제네릭인 경우 형식 지정자로 auto 사용이 가능.
  람다 식은 다른 람다 식을 인수로 사용 가능.
4.반환형식은 자동으로 추론이 된다.
  람다 식은 다른 람다 식을 반환 값으로 생성 가능.
```

##### 3. Lambda expression 을 사용하는 이유와 반대로 Lambda expression의 단점을 서술하시오.

```
람다 표현식을 사용하면 함수를 값으로 사용할 수 있으며,
parameter로 전달할 수 있고, 반환 값으로 받을 수 있다.
또한, 간결한 프로그래밍이 가능하다. 단위 테스트 하기 쉽고 재사용이 용이.
함수를 파라미터로 받는 함수를 다룰때 사용이 용이하다.
단점으로는 코드가 너무 간결하기 때문에 이해가 어려울 수 있고, 모든 원소를 전부 순회하는 경우 단순 반복문 보다 조금 느리다.
```

##### 4. c언어에서 가변 키워드 ... 이 사용되는 경우를 조사하고 예시 코드를 작성하시오.

```c
흔히 쓰는 printf도 가변 키워드가 사용 된다. printf의 함수 원형를 보면,
int printf(const char* format, ...)이다.
사용자가 써도 가능하다.
예시
#include <stdio.h>
#include <stdarg.h>
int sum(int count, ...){
	int res = 0;
	va_list ap;
	int i;
	va_start(ap,count);
    for(i = 0; i < count; i++){
    	res += va_arg(ap,int);
    }
    va_end(ap);
    return res;
}
int main(){
	printf("%d\n",sum(10,1,2,3,4,5,6,7,8,9,10));
	//출력값은 55가 나온다.
}
```

##### 5. Iterator에 대해 조사하고 Iterator를 활용하여 pallindrome 임을 조사하는 function을 구현하시오

```

```

##### 6. linked_list class를 구현하시오 linked_list의 ADT는 다음과 같다.insert_node / delete_node / search 

```

```

##### 7. c언어에서의 난수 생성은 srand를 활용하여 ordered 한 난수를 생성하거나 seed로 time값을 주어서 time에 dependency한 난수를 생성하였다. c++11.0 에서의 난수 생성방식은 어떻게 다른지 조사하고 가위바위보 프로그램을 작성하시오.

```

```

##### 8. c++11.0의 concurrency library를 활용하여 행렬곱셈을 수행하는 multi thread program을 작성하시오 

```

```

