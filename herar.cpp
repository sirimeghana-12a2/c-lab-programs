#include<iostream>
using namespace std;
class Bank
{
	public:
		float salary=80000;
};
class derived1:public Bank
{
	public:
		float bonus=10000;
};
class derived2:public Bank
{
	public:
		float tax=20000;
};
class Netprofit:public Bank
{
	public:
		float income=50000;
};
int main()
{
	derived1 ob1;
	derived2 ob2;
	Netprofit ob;
	cout<<ob1.salary<<endl;
	cout<<ob1.bonus<<endl;
	cout<<ob2.tax<<endl;
	cout<<ob.income<<endl;
	return 0;
}
