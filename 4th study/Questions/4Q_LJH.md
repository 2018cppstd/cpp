#Chapter 4



1. c++에서의 functor를 c언어에서도 사용가능한지 조사하고 사용가능하다면 그 예시를 작성

   - 함수포인터가 functor의 역할을 수행할 수 있다.

   ```
   #include <stdio.h>  /* for printf */
   #include <string.h> /* for strchr */
   
   double cm_to_inches(double cm) {
   	return cm / 2.54;
   }
   
   int main(void) {
   	double (*func1)(double) = cm_to_inches;
   	char * (*func2)(const char *, int) = strchr;
   	printf("%f %s", func1(15.0), func2("Wikipedia", 'i'));
   		/* prints "5.905512 wikipedia" */
           return 0;
   }
   ```

   

2. Lambda expression 의 특징을 조사하여 서술

   - Lambda는 함수 객체 클래스를 암시적으로 정의하고 함수 객체를 생성한다. Lambda로 생성된 함수 객체는 타입을 가지고 있긴 하지만 decltype이나 sizeof 를 사용할 순 없다.

   - 사용법

     - [ captures ] ( parameter ) -> return type {body}

        

   - Lambda는 함수 포인터와 함수 객체의 장점을 모두 가지고 있다.

   - 함수에서 반환할 수도 있고, 함수의 파라미터로 전달할 수도 있다.

   

3. Lambda expression을 사용하는 이유와 반대로 Lambda expression의 단점을 서술

   - 모든 원소를 전부 순회하는 경우는 람다식이 느릴 수 밖에 없다. ( 최종 출력되는 bytecode나 어셈블리 코드는 단수 while(또는 for)문보다 몇 단계를 더 거치게 되므로)
   - 함수 외부의 캡처를 하는 시간제약 논리제약적인 요소도 고려해야 한다.
   - 너무 남발하여 사용하면 코드의 이해도가 더 떨어질 수 있다.

   

4. c언어에서 가변 키워드 ... 이 사용되는 경우를 조사하고 예시코드를 작성

   ```
   #include <stdio.h>
   #include <stdarg.h>    // va_list, va_start, va_arg, va_end가 정의된 헤더 파일
   
   void printNumbers(int args, ...)    // 가변 인자의 개수를 받음, ...로 가변 인자 설정
   {
       va_list ap;    // 가변 인자 목록 포인터
   
       va_start(ap, args);    // 가변 인자 목록 포인터 설정
       for (int i = 0; i < args; i++)    // 가변 인자 개수만큼 반복
       {
           int num = va_arg(ap, int);    // int 크기만큼 가변 인자 목록 포인터에서 값을 가져옴
                                         // ap를 int 크기만큼 순방향으로 이동
           printf("%d ", num);           // 가변 인자 값 출력
       }
       va_end(ap);    // 가변 인자 목록 포인터를 NULL로 초기화
   
       printf("\n");    // 줄바꿈
   }
   
   int main()
   {
       printNumbers(1, 10);                // 인수 개수 1개
       printNumbers(2, 10, 20);            // 인수 개수 2개
       printNumbers(3, 10, 20, 30);        // 인수 개수 3개
       printNumbers(4, 10, 20, 30, 40);    // 인수 개수 4개
   
       return 0;
   }
   ```

   scanf, printf 와 같이 매개변수의 개수가 정해지지 않은 함수가 있는데 이렇게 매번 함수에 들어가는 인수의 개수가 변하는 것을 가변인자 라고 한다. ... 을 사용하여 가변 인자를 표현하려면 stdarg.h 헤더 파일을 포함해줘야 한다.

   

5. Iterator에 대해 조사하고 Iterator를 활용하여 pallindrome임을 조사하는 functor구현

   - 컨테이너에 저장되어 있는 원소들을 참조할 때 사용하는 일종의 포인터와 비슷한 객체
   - 입력, 출력, 순방향, 양방향, 임의 접근 5가지의 종류가 있다.
   - 

6. linked_list class를 구현하시오. linked_list의 ADT는 다음과 같다.

   insert_node / delete_node / search

7. c언어에서의 난수 생성은 srand를 활용하여 ordered한 난수를 생성하거나 seed 로 time 값을 주어 dependency한 난수를 생성하였다. c++11.0에서의 난수 생성방식은 어떻게 다른지 조사하고 가위바위보 프로그램을 작성하시오.

   - MT(Mersenne Twister : 메르센 트위스터) 를 사용하여 난수를 발생한다.
   - 기존 난수 생성기의 문제점을 피하며 매우 질 좋은 난수를 빠르게 생성가능하다.
   - 난수의 특성(주기, 난수의 범위 등) 을 알고 있으면 그 뒤에 나올 난수를 예측 가능하기 때문에 암호학적으로 안전한 생성기는 아니다.

   ```
   #include <iostream>
   #include <String>
   #include <iomanip>
   #include <chrono>
   #include <random>
   #include <functional>
   using namespace std;
   
   int main()
   {
   	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
   	std::mt19937_64 ranNum(seed);
   	std::uniform_int_distribution<int> dist(1, 3);
   	auto generator = std::bind(dist, ranNum);
   	int user_input;
   	int W_count = 0, L_count = 0, D_count = 0;
   	string c_rsp, u_rsp;
   
   
   
   	do {
   		cout << "1~4의 숫자를 입력하시오 (1: 가위, 2: 바위, 3: 보, 4:끝내기) : ";
   		cin >> user_input;
   		
   		std::cout << std::setw(3) << generator() % 100;
   		if (generator() == 1)
   		{
   			c_rsp = "가위";
   		}
   		else if (generator() == 2) {
   			c_rsp = "바위";
   		}
   		else {
   			c_rsp = "보";
   		}
   		
   		if (c_rsp == "가위" && user_input == 1) {
   			cout << "컴퓨터 : " << c_rsp <<endl;
   			cout << "무승부!"<<endl;
   			D_count++;
   		}
   		else if (c_rsp == "가위" && user_input == 2) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "승리!" << endl;
   			W_count++;
   		}
   		else if (c_rsp == "가위" && user_input == 3) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "패배!" << endl;
   			L_count++;
   		}
   		else if (c_rsp == "바위" && user_input == 1) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "패배!" << endl;
   			L_count++;
   		}
   		else if (c_rsp == "바위" && user_input == 2) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "무승부!" << endl;
   			D_count++;
   		}
   		else if (c_rsp == "바위" && user_input == 3) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "승리!" << endl;
   			W_count++;
   		}
   		else if (c_rsp == "보" && user_input == 1)
   		{
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "승리!" << endl;
   			W_count++;
   		}
   		else if (c_rsp == "보"&& user_input == 2) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "패배!" << endl;
   			L_count++;
   		}
   		else if (c_rsp == "보" && user_input == 3) {
   			cout << "컴퓨터 : " << c_rsp << endl;
   			cout << "무승부!" << endl;
   			D_count++;
   		}
   
   	} while (user_input != 4);
   	cout << endl;
   	cout << "당신의 전적은 " << W_count << "번 승리 " << " " << L_count << " 번 패배" << " " << D_count << " 번 무승부 " << " 입니다." << endl;
   
   
   	return 0;
   }
   ```

   

8. c++11.0의 concurrency library를 활용하여 행렬곱셈을 수행하는 multi thread program을 작성하시오.

