#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double hourlyrate,week1h,week2h,week3h,week4h,week5h;
	cout<<"Enter your hourly rate:"<< hourlyrate;
	cin>>hourlyrate;
	cout<<"Week 1:"<<week1h;
	cin>>week1h;
	cout<<"Week 2:"<<week2h;
	cin>>week2h;
	cout<<"Week 3:"<<week3h;
	cin>>week3h;
	cout<<"Week 4:"<<week4h;
	cin>>week4h;
	cout<<"Week 5:"<<week5h;
	cin>>week5h;

	cout<<"Before tax:"<< hourlyrate*(week1h+week2h+week3h+week4h+week5h)<<endl;
	cout<<"After tax:"<< (hourlyrate*(week1h+week2h+week3h+week4h+week5h))*0.86<<endl;
	cout<<"The money you spend to buy clothes and other accessories:" << ((hourlyrate*(week1h+week2h+week3h+week4h+week5h))*0.86)*0.10<<endl;
	cout<<"The money you spend on school supplies:"<<((hourlyrate*(week1h+week2h+week3h+week4h+week5h))*0.86)*0.01<<endl;
	cout<<"The money you spend to buy savings bonds:"<<(((hourlyrate*(week1h+week2h+week3h+week4h+week5h))*0.86)*0.11)*0.25<<endl;
	cout<<"The money your parents spend to buy additional savings for you:" <<((((hourlyrate*(week1h+week2h+week3h+week4h+week5h))*0.86)*0.11)*0.25)+(((((hourlyrate*(week1h+week2h+week3h+week4h+week5h))*0.86)*0.11)*0.25)/2)<<endl;

_getch();

return 0;

}