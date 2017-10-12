#include<iostream>
#include<string>
using namespace std;



int main()
{
	int x,y;

	int * p1;
	int * p2;

	p1=&x;
	p2=&y;

	x=25;
	y=35;

	cout<<*p1<<endl;
	cout<<*p2<<endl;



	cout<<p1<<endl;
	cout<<p2<<endl;

	system("Pause");

}
