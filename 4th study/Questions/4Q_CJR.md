Question4. CJR
======================
#### 1.  c++에서의 functor를 c언어에서도 사용가능한지 조사하고 사용가능하다면 그 예시를 작성하시오.
 - Functor는 함수처럼 동작하는 클래스를 가리켜(Functor)라고 하며 함수오브젝트(Funtion Object)'라고도 불린다. 이는 보통 객체의 동작방식에 유연함을 제공할 때 주로 사용된다. C는 불가하다. 스택변수 저장하거나 힙에 복사본을 만들 수 없다.(필요한 가비지 컬렉션이 없기 때문이다. 여기서 가비지콜렉션은 프로그램이 동적으로 할당했던 메모리 영역 중에서 필요없게 된 영역을 해제하는 기능이다.)

#### 2.  Lambda expression 의 특징을 조사하여 서술하시오.
 - 일반적으로 람다는 알고리즘이나 비동기 메서드에 전달되는 몇 줄의 코드를 캡슐화하는 데 사용된다.   

   ```
   #include <algorithm>  
    #include <cmath>  
      
    void abssort(float* x, unsigned n) {  
        std::sort(x, x + n,  
            // Lambda expression begins  
            [](float a, float b) {  
                return (std::abs(a) < std::abs(b));  
            } // end of lambda expression  
        );  
    }  
   ```

   lambda의 문법은 크게 캡처(capture), 인자(parameter), 반환형(return type), 몸통(body)로 이루어져 있습니다. 

   ```
   [captures](parameters) -> return type { body }
   
   /*
   * captures: comma(,)로 구분된 캡처들이 들어갑니다.
   * parameters: 함수의 인자들이 들어갑니다.
   * return type: 함수의 반환형입니다.
   * body: 함수의 몸통입니다.
   */
   ```

   

#### 3. Lambda expression 을 사용하는 이유와 반대로 Lambda expression의 단점을 서술하시오.
 - 람다를 사용하는 이유는 함수나 함수 객체를 별도로 작성하지 않아도 되기 때문에 코드 작성이 간결해지고 가독성도 높아진다.
 - 단점은 람다식을 너무 남발하여 사용하게되면 오히려 코드를 이해하기 어려울 수 도 있다. 익명함수의 특성상 함수 외부의 캡처를 위해 캡처를 하는 시간과 논리제약적인 요소도 고려해야 한다. 

#### 4.  c언어에서 가변 키워드 ... 이 사용되는 경우를 조사하고 예시 코드를 작성하시오.

```
void printNumbers(int args, ...)
{
    printf("%d ", args);
}

int main()
{
    printNumbers(1, 10);
    printNumbers(2, 10, 20);
    printNumbers(3, 10, 20, 30);
    printNumbers(4, 10, 20, 30, 40);

    return 0;
}
```



#### 5. Iterator에 대해 조사하고 Iterator를 활용하여 palindrome 임을 조사하는 function을 구현하시오.

반복자는 컨테이너에 저장된 원소를 순회하고 접근하는 일반화된 방법을 제공한다. 반복자는 컨테이너와 알고리즘이 하나로 동작하게 묶어주는 인터페이스 역할을 한다.

```
#include<iostream>
#include<string>

using namespace std;

void main()
{
	string str;
	cout << "Enter the string: ";
	cin >> str;
	string::reverse_iterator ri = str.rbegin();	//반복자를 이용하여 역방향확인
	if (equal(str.begin(), str.end(), ri))			// pallindrome 확인
		cout << str << " is a Pallindrome!" << endl;
	else
		cout << str << " is not a Pallindrome!" << endl;
}
```

#### 6. linked_list class를 구현하시오 linked_list의 ADT는 다음과 같다. insert_node / delete_node / search 



#### 7.  c언어에서의 난수 생성은 srand를 활용하여 ordered 한 난수를 생성하거나 seed로 time값을 주어서 time에 dependency한 난수를 생성하였다. c++11.0 에서의 난수 생성방식은 어떻게 다른지 조사하고 가위바위보 프로그램을 작성하시오.



#### 8. c++11.0의 concurrency library를 활용하여 행렬곱셈을 수행하하는 multi thread program을 작성하시오 

