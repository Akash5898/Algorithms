#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str1[100], str2[100];
	cout<<"Enter first string : ";
	gets(str1);
	cout<<"Enter second string : ";
	gets(str2);
	if(strcmp(str1, str2)==0)
	{
		cout<<"Both the strings are equal";
	}
	else
	{
		cout<<"Both the strings are not equal";
	}
	getch();
}
