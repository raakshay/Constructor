#include<iostream>
using namespace std;
int main()
{
	int k=20;
	int*const p=&k;
	cout<<*p<<endl;
	//p=NULL;
	//p=p+1;	// error: assignment of read-only variable ‘p’
	*p=100;
	cout<<*p<<endl;
	return 0;
}
