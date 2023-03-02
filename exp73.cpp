#include<iostream>
using namespace std;
class test
{
	static int a;
	public:
	       static int b;
	       void func(int a)
	       {
		       cout<<"value of static a is:"<<test::a<<endl;
		       cout<<"value of local b is:"<<b<<endl;
	       }
};
int test:: a=2;
int test:: b=4;
int main()
{
	test obj;
	int a=6;
	int b=2;
	obj.func(a);
	cout<<"test::b="<<test::b<<endl;
	return 0;
}


