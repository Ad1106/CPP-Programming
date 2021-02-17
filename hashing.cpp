#include<iostream>
#include<limits.h>
using namespace std;
class hashing
 {
public :
int a[10],choise,h,i,d,n,r,s;
public :
void insert()
{   int n=0,w,i,r;
    while(n!=s)
    {
    cout<<"Enter the value to be inserted : ";
    cin>>i;
    while(1)
    {
    r=(i+n)%h;
    if(a[r]==INT_MIN || a[r]==INT_MAX)
    {
    a[r]=i;
    break;
    }
    n++;
    if(n==s)
    {
    cout<<"Table full";
    break;
    }
    }
    break;
    }
}
void del()
{
 int ele,r,n=0;
 cout<<"Enter the element to be delete";
 cin>>ele;
 r=(ele+n)%s;
 while(1)
 {
 if(a[r]==ele)
 {
 cout<<"Element found";
 a[r]=INT_MAX;
 break;
 }
 else if(a[r]==INT_MAX)
 {
 cout<<"Element not found";
 break;
 }
 else
 r=(ele+n)%s;
 n++;
 if(n-1==s)
 {
 cout<<"Element not found";
 break;
 }
 }
}
void display()
{
 int i;
 for(i=0;i<10;i++)
 cout<<a[i]<<"   ";
 cout<<endl;
}
};
int main()
{
    hashing t;
    int choise,i;
    cout<<"Enter the value to be divide in hash function (Ex. If you want 'key%10' than enter 10) : ";
    cin>>t.h;
    cout<<"Enter the size of table : ";
    cin>>t.s;
    for(i=0;i<10;i++)
    t.a[i]=INT_MIN;
    
    do
    {
    cout<<"Enter your choise :"<<"  "<<"1-Insert"<<"  "<<"2-Delete"<<"  "<<"3-Display"<<"  "<<"4-Exit"<<endl;
    cin>>choise;
    switch(choise)
    {
        case 1:
        t.insert();
        break;
        case 2:
        t.del();
        break;
        case 3:
        t.display();
        break;
        case 4:
        exit;
        break;
        default:
        cout<<"Invalid choise ->";
        break;
    }
    }while(1);
    return 0;
}
