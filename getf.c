#include<iostream>
#include<cstdio>
#include<sttring.h>
using namespace std;
int main()
{
	int c;
	FILE *fp;
	fp=fopen("file.txt","r");
	if(fp)
	{
		while(feof(fp)==0)
		{
			c = getc(fp);
			putchar(c);
		}
		while(feof(fp)==0)
		{
			c = fgetc(fp);
			putchar(c);
		}
	}
	else
	{
		perror("file opening failed");
	}
	fclose(fp);
	return 0;
}
