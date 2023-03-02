#include<iostream>
using namespace std;
class A
{
	public:
		void fun();
};
void A:: fun()
{
	cout<<"fun()callesd"<<endl;
}
int main()
{
	A a;
	a.fun();
	return 0;
}
