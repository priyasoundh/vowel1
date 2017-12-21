#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
cout<<"enter 3 number";
cin>>a>>b>>c;
if(a>b)
{
  if(a>c)
  {
    cout<<a<<"is greater";
  }
}
if(b>a)
{
  if(b>c)
  {
    cout<<b<<"is greater";
  }
}
if(c>b)
{
  if(c>a)
  {
    cout<<c<<"is greater";
  }
}
getch();
}
