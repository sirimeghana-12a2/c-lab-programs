#include<iostream>
using namespace std;
int main()
{
	int n,t1,t2,next_term,i;
	cout<<"Enter number:"<<endl;
	cin>>n;
	t1=0;
	t2=1;
	next_term=t1+t2;
	cout<<"fib series:"<<t1<<t2;
	for(i=3;i<=n;i++)
	{
		cout<<next_term;
		t1=t2;
		t2=next_term;
		next_term=t1+t2;
	}
	return 0;
}

