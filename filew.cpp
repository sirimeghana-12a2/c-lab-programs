#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream new_file;
	new_file.open("new_file_write.txt",ios::out);
	if(!new_file)
	{
		cout<<"New file created"<<endl;
		new_file<<"My name is lucky";
		new_file.close();
	}
	return 0;
}
