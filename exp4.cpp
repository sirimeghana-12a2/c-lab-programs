#include<iostream>
using namespace std;
class Employee
{
	int Emp_number;
	char Emp_name[20];
	float Emp_basic;
	float Emp_da;
	float Emp_it;
	float Emp_net_sal;
	public:
	     void get_Emp_details();
	     float find_net_salary(float basic,float da,float it);
	     void show_Emp_details();
};
void Employee::get_Emp_details()
{
	cout<<"\nEnter Employee number:"<<endl;
	cin>>Emp_number;
	cout<<"\nEnter Employee name:"<<endl;
	cin>>Emp_name;
	cout<<"\nEnter Employee basic:"<<endl;
	cin>>Emp_basic;
	cout<<"\nEnter Employee DA:"<<endl;
	cin>>Emp_da;
	cout<<"\nEnter Employee IT:"<<endl;
	cin>>Emp_it;
}
float Employee:: find_net_salary(float basic,float da,float it)
{
	return (basic+da)-it;
}
void Employee::show_Emp_details()
{
	cout<<"\ndetails of Employee"<<endl;
	cout<<"\nEmployee name:"<<Emp_name<<endl;
	cout<<"\nEmployee number:"<<Emp_number<<endl;
	cout<<"\nbasic salary:"<<Emp_basic<<endl;
	cout<<"\nEmployee DA:"<<Emp_da<<endl;
	cout<<"\nIncome Tax:"<<Emp_it<<endl;
	cout<<"\nNet salary:"<<find_net_salary(Emp_basic,Emp_da,Emp_it);
}
int main()
{
	Employee Emp;
	Emp.get_Emp_details();
	Emp.show_Emp_details();
	return 0;
}
