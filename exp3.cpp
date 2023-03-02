#include<iostream>
using namespace std;
class Rectangle_test
{
	public:
		int length,breadth;
	public:
		void initialize(int len,int bre)
		{
			length = len;
			breadth = bre;
		}
		int getArea()
		{
			return length*breadth;
		}
		void display()
		{
			int area=getArea();
			cout<<"\n Rectangle Information\n";
			cout<<"length="<<length<<endl;
			cout<<"breadth="<<breadth<<endl;
			cout<<"\nArea="<<area<<endl;
		}
};
int main()
{
	Rectangle_test rect,*class_ptr;
	class_ptr=&rect;
	class_ptr->initialize(10,5);
	class_ptr->display();
	return 0;
}
