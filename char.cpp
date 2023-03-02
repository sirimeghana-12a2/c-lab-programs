#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character:"<<endl;
	ch = getchar();
	cout<<"You have entered:"<<endl;
	putchar(ch);
	cout<<"uppercase letter:"<<endl;
	putchar(ch-32);
	return 0;
}

