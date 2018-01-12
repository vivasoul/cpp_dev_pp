#include <iostream>

int main(void)
{
	int num;
	
	std::cout<<"구구단 출력을 위한 숫자를 입력해주십시오.: ";
	std::cin>>num; 
	for(int i=1;i<10;i++)
		std::cout<<num<<" X "<<i<<" = "<<num*i<<std::endl;
	return 0;
}
