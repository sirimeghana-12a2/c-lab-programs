#include<iostream>
using namespace std;
int x;
int main()
{
	int x=5;
	cout<<"value of global x is:"<<::x<<endl;
	cout<<"value of local x is:"<<x<<endl;
	return 0;
}
