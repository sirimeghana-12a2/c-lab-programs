#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"Enter number:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of number is"<<fact<<endl;
	return 0;
}
