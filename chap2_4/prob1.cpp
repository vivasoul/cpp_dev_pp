#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	
	char s[20] = "abcde";
	char ss[20];	
	
	cout<<s<<"="<<strlen(s)<<endl;	
	strcpy(ss, s);	
	cout<<ss<<"="<<strlen(ss)<<endl;	
	strcat(ss, "fgh");
	cout<<ss<<"="<<strlen(ss)<<endl;	
	
	if(strcmp(ss, s)==0)	cout<<"same"<<endl;
	else					cout<<"different"<<endl;	
	
	return 0;
}
