
#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
	
	int Add(int a, int b)//Concreate Function
	{
		return a+b;
	}
	
	virtual int Sub(int a, int b)=0;//Abstract Function
	
};

class Dervied: public Base
{
	public:
		int i,j;
	
	virtual int Sub(int a, int b)=0;//Abstract Function
	
	int Mult(int a,int b)//Concreate Function
	{
		return a*b;
	}
	
};

class Dervied_1: public Dervied
{
	public:
		int i,j;
	
	int Sub(int a,int b)//Concreate Function
	{
		return a-b;
	}
	
	
	int Div(int a,int b)//Concreate Function
	{
		return a/b;
	}
	
};


int main()
{
	Base *bPtr=new Dervied_1();
	int iRet=0;
	
	iRet=bPtr->Add(11,10);
	cout<<"Add is:"<<iRet<<"\n";
	
	iRet=bPtr->Sub(11,10);
	cout<<"Sub is:"<<iRet<<"\n";
	
	
	return 0;
}