#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream new_file;
	new_file.open("new_file",ios::out);
	if(!new_file)
	{
		cout<<"file creation failed"<<endl;
	}
	else
	{
		cout<<"New file created"<<endl;
	}
	return 0;
}
