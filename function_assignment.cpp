//MUHIB KHAN
//BSCS(D)
//DR AYESHA HAKIM
//ASSIGNMENT 3
#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int diff(int a,int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
float quot(float a,float b)
{
	return a/b;
}
int remain(int a ,int b)
{
	return a%b;
}
int main()
{
	int a,b,add,subt,prod,division,modu;
	cout<<"Enter first no"<<endl;
	cin>>a;
	cout<<"Enter second no"<<endl;
	cin>>b;
	add=		sum(a,b);
	subt=		diff(a,b);
	prod=		mul(a,b);
	division=	quot(a,b);
	modu=		remain(a,b);
		cout<<"Addition of two no is:  "<<add<<endl;
	 	cout<<"Subtraction of two no is:   "<<subt<<endl;
	 	cout<<"Multiplication of two no is:   "<<prod<<endl;
	 	cout<<"Division of two no is:   "<< division<<endl;
	 	cout<<"Remainder of two no is:   "<<modu<<endl;
		cout<<"Square root of first no (a)is:   "<<sqrt(a)<<endl;
		cout<<"Square root of second no (b)is:   "<<sqrt(b)<<endl;
		cout<<"log of first no(a) is:   "<<log(a)<<endl;
		cout<<"log of second no (b) is:   "<<log(b)<<endl; 	
}
