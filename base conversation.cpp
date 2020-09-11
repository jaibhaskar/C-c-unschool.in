#include <iostream>
#include<math.h>
using namespace std;

//Compiler version g++ 6.3.0
int digits[50],flag=0,length=0;
int validatedata(int num,int base)
{
  if(base>10||base<2)
  {
    cout<<"\nBase out of range\n";
    flag=1;
  }
  length =1+log10(num);
  for(int i=length-1;i>=0;i--)
    {
      digits[i]=num%10;
      num /=10;
    }
  for(int i=length-1;i>=0;i--)
    {
     
      if(digits[i]>base)
      { cout<<"\nInvalid base and number\n";
        flag=1;
        return 0;  }
    }
  return 0;
}

int to_decimal(int num,int in_base)
{
  int dec=0,temp=0;
  temp=length-1;
  for(int i=0;i<length;i++,temp--)
    {
      dec=dec+pow(in_base,(temp))*digits[i];
    }
     return dec;
}
int anybase(int num,int base)
{
  int digit[50],i=0;
  while(num>0)
    {
      digit[i]=num%base;
      num=num/base;
      i++;
    }
    for(int j=i-1;j>=0;j--)
    {
      switch(digit[j])
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: cout<<digit[j];break;
        case 10: cout<<"A";break;
        case 11: cout<<"B";break;
        case 12: cout<<"C";break;
        case 13: cout<<"D";break;
        case 14: cout<<"E";break ;
        case 15: cout<<"F";break;
        default : ;
      }
    }
    return 0;
}
int main()
{
  int num,in_base,out_base,temp_numb,flag_again=0;

    again: cout <<"\nEnter number to be converted :  ";
    cin>>num;
    cout<<"\nEnter Base of numbe(2 to 10) :  ";
    cin>>in_base;
    validatedata(num,in_base);
    if(flag==1)
    {
      flag=0;
      goto again; 
    }
again2:    cout<<"\nEnter base to be converted(2 to 16) :  ";
    cin>>out_base;
    if(out_base<2||out_base>16)
    { cout<<"\nBase out of range..\n"; 
      goto again2;  }
    temp_numb=to_decimal(num,in_base); 
    cout<<"\n";
    anybase(temp_numb,out_base);
    cout<<"\n\nPress 1 to convert another number.."
    <<"\n\nPress 0 to exit...  ";
    cin>>flag_again;
    if(flag_again==1)
      goto again;
    return 0;
}