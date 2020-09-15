#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0


float area(float a,float b)
{
  cout<<"\narea :"<<(.5*a*b);
  return 0;
  
}
float area(float a)
{
  cout<<"\narea :"<<22/7*a*a;
  return 0;
  
}
int area(int a)
{
  cout<<"\narea :"<<a*a;
  return 0;
}
int main()
{
   int choice,side;
   float base,height,radius;
    cout << "Enter choose shape to find area:\n";
    cout<<"1.Triangle\n2.Circle\n3.Square\n";
    cin>>choice;
    if(choice==1)
    {
      cout<<"\nEnter base and height :";
      cin>>base>>height;
      area(base,height);
      
    }
    else if(choice==2)
    {
      cout<<"\nEnter radius :";
      cin>>radius;
      area(radius);
    }
     else if(choice==3)
    {
      cout<<"\nEnter side :";
      cin>>side;
      area(side);
    }
    else
      cout<<"\nInvalid choice";
    return 0;
}
