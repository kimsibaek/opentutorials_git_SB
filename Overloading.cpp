#include <iostream>

void MyFunc(void){
	std::cout<<"MyFunc(void) called" << std::endl;
}

void MyFunc(char c){
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b){
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void){
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	//test
	//test2
	MyFunc();
	//tlfgja2
	//충돌
	//충돌해결
	//원격저장소
	//push
	//pull
	//testtest
	//push.1
	//push.2
	//1111111
	//3333333
	//2222222
	return 0;
}

/*
C언어에서는 동일한 이름의 함수가 정의되는 것을 허용하지 않는다.

C++에서는 함수의 오버로딩을 허용한다.
- 함수호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분 가능
- 반환형은 함수호출 시, 호출되는 함수를 구분하는 기준이 될 수 없다.

*/
