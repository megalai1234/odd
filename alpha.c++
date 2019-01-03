#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	char cha;
	cout<<"Enter a character: ";
	cin>>ch;
	if((cha>='a'&& cha<='z') || (cha>='A' && cha<='Z'))
	{
		cout<<cha<<" is an alphabet";
	}
	else
	{
		cout<<cha<<" is not an alphabet";
	}
	return 0;
}
