#include<iostream.h>
#include<conio.h>
int main()
{
  int a,b,c;
  clrscr();
  cout<<"Enter two numbers: "<<endl;
  cin>>a>>b;
  c=a;
  a=b;
  b=c;
  cout<<"After swapping value of a is "<<a<<" and value of b is "<<b;
  getch();
  return 0;

}
