
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Potion.h"

using namespace std;

Potion::Potion() {
}

void Potion::Describe() {

	ifstream read;				// 파일입출력을 위한 객체 선언
	read.open("potion.txt");		// 파일 읽기

	char str[sizeof(read)] = { '\0' };		// 읽은 파일의 전체 크기 만큼의 char 배열 생성

	int i = 0;			// 스트링 스플릿한 순서를 매기기 위한 변수

	if (read.good()) {		// 파일이 열리면
		while (!read.eof()) {	// 파일 내용 마지막까지
			read.getline(str, sizeof(read));	// 문자열을 읽어와 str에 삽입

			string str1 = str;			// 스트링 스플릿을 위한 char배열을 string으로 변환

			istringstream iss(str1);		// 변환한 string str1을 iss 넣음

			do
			{
				i++;			// 순서대로 값에 맞춰 출력하기위해 
				string sub;		// 스플릿한 일부분의 스트링을 저장하기위한 sub 스트링
				iss >> sub;		// 잘라낸 부분을 넣어줌
				switch (i) {		// 순서를 찾아 출력한다
				case 1: cout << "Name = " << sub << endl;break;
				case 2: cout << "Description = " << sub << endl;break;
				case 3: cout << "Value = " << sub << endl;break;
				default: break;
				}
			} while (iss);
		}
	}

	read.close();			// 파일 읽기 마침


	read.close();

}