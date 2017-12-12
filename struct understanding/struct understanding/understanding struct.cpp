#include<iostream>
using namespace std;

void output();

struct Date
{ int mm,yy,dd;
};

struct Emp
{
	char Emp::worker[25];
		float salary;
		struct Date hired;
};

struct Dept
{struct Emp manager;
struct Emp worker[25];
float profits;
};


int main()
{ 
	output();

	
	return 0;
}

void output()
{ 
	struct Dept Toys={{"Roger"},{{"John"},{"Rabie"}}};

	Toys.profits=80000;
	Toys.worker[0].hired.mm=4;
	Toys.worker[0].hired.dd=20;
	Toys.worker[0].hired.yy=2011;
	Toys.worker[0].salary=1000;

	Toys.worker[1].hired.mm=6;
	Toys.worker[1].hired.dd=7;
	Toys.worker[1].hired.yy=2010;
	Toys.worker[1].salary=800;


	cout<<Toys.manager.Emp::worker<<" is the manager "<<endl;
	cout<<"The Company Profit is:"<<Toys.profits<<endl;
}