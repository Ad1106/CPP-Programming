#include<iostream>
using namespace std;
int fun()
{
     static int count=0;
     count++;
     cout<<count<<endl;
     return count;
}

int main()
{
	int c;
	c=fun();
	cout<<c<<endl;
	fun();
	cout<<c<<endl;
		fun();
	cout<<c<<endl;


}
