#include<iostream>
using namespace std;
class base
{
	public:
		int i;
};
class derived1:public base
{
	public:
		int j;
};
class derived2:public base
{
	public:
		int k;
};
class derived3:public derived1,public derived2
{
	public:
		int sum;
};
int main()
{
	derived1 o;
	derived3 ob;
	o.i=10;
	ob.j=20;
	ob.k=30;
	ob.sum=o.i+ob.j+ob.k;
	cout<<o.i<<""<<endl;
	cout<<ob.j<<""<<endl;
	cout<<ob.k<<""<<endl;
	cout<<ob.sum<<""<<endl;
	return 0;
}
