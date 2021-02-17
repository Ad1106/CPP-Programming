#include<iostream>
using namespace std;
class AB
{
	public:
		int len,wit,hei;
	public:
		void get_value()
		{
		//cout<<"Enter the values of l,b,h";
		cin>>len>>wit>>hei;
		}
	    int	volume()
		{
			return(len*wit*hei);
		}
AB operator+ (AB t)
{
	AB box;
	box.len=len+t.len;
	box.wit=wit+t.wit;
	box.hei=hei+t.hei;
	return box;
}
};
int main()
{
	
	AB box,box1,box2;
	cout<<"Enter the l,b,h of first box : ";
	box1.get_value();
	cout<<"Enter the l,b,h of second box : ";
	box2.get_value();
	box=box1+box2;
	cout<<"Volume of resultant box : ";
	cout<<box.volume();
	return 0;
}

