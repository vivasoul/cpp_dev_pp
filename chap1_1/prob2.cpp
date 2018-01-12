#include <iostream>

int main(void)
{
	char name[20];
	char tel[20];
	
	std::cout<<"이름: ";
	std::cin>>name;
	std::cout<<"전화번호: ";
	std::cin>>tel;
	
	std::cout<<"입력하신 정보는 다음과 같습니다."<<std::endl;
	std::cout<<"이름: "<<name<<", 전화번호: "<<tel<<std::endl;
	
	return 0;
}
