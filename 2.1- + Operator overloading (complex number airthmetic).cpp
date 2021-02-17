#include<iostream>
using namespace std;
class complex
{
	public:
		int a,b,c,d,m;
		public:
			void in()
			{
				cout<<"Enter the real values of complex numbers";
				cin>>a>>c;
				cout<<"Enter the imageniry values of complex numbers";
				cin>>b>>d;
				cout<<"Complex numbers :"<<endl<<a<<"+i"<<b<<endl<<c<<"+i"<<d<<endl;
			}
			void process()
			{
				cout<<"Enter choise :-    ";
				cin>>m;
				cout<<m;
				switch(m)
				{
					case 1:
						cout<<a+c<<"+i"<<b+d<<endl;
						break;
					case 2:
						cout<<a-c<<"+i"<<b-d<<endl;
						break;
					case 3:
						cout<<a*c-b*d<<"+i"<<a*d+b*c<<endl;
						break;
				    default :
					cout<<"Invalid input"<<endl;
			    }
		   }
				complex operator+ (complex &t)
				{
					complex p;
					p.a=a+t.a;
					p.b=b+t.b;
					p.c=c+t.c;
					p.d=d+t.d;
					return p;
				}
};
int main()
{
	complex m,n,z;
	m.in();
	m.process();
	n.in();
	n.process();
	z=m+n;
	z.process();
	return 0;
}

