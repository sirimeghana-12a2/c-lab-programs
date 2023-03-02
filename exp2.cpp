#include<iostream>
using namespace std;
struct college_info
{
	char college_name[15];
	char college_code[2];
	char dept[50];
	int intake;
};
int main()
{
	struct college_info college;
	cout<<"college information";
	cout<<"\nname of the college:";
	cin>>college.college_name;
	cout<<"\ncollege code:";
	cin>>college.college_code;
	cout<<"\ndepartment:";
	cin>>college.dept;
	cout<<"\ndepartment intake:";
	cin>>college.intake;
	cout<<"\nCollege information";
	cout<<"\nName of the college:"<<college.college_name;
	cout<<"\nCollege university code:"<<college.college_code;
	cout<<"\nName of the department:"<<college.dept;
	cout<<"\nThe department of"<<college.dept<<"has intake"<<college.intake;
	return 0;
}
