#include<iostream>
using namespace ltd;
void swap(int *x, int *y)
int main()
{
	int a,b;
	cout<<" enter any 2 numbers"
	cin>>a>>b;
	swap(&a, &b);
	cout<<" after swaping  a and b ";
	cout<<a<<" "<<b<<"v";
    return 0;	
	
}
 void swap(int *x, int *y)
 {
 
 int t;
 x=t;
 x=y;
 y=t;
}
 

