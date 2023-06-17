#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
	float m=3.14672;
	clrscr();
	cout <<setw(10) <<setfill('&') <<m <<endl;
	cout <<setprecision(3) <<m;
	getch();
	return 0;
}