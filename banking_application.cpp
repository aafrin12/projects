#include<iostream.h>
#include<conio.h>
#include<process.h>

class banking
{
   public:
   int uname,dep,acn,phn,wid,bal;


   banking()
   {
	bal=2000;
   }

     void getdata();
     void deposit();
     void withdraw();
     void balance();
     void putdata();
};

void banking::getdata()
{
  cout<<"Enter the username"<<endl;
  cin>>uname;
  cout<<"enter the account number acn"<<endl;
  cin>>acn;
  cout<<"enter the customer phone number phn"<<endl;
  cin>>phn;
}

void banking::deposit()
{
  cout<<"enter the amount deposited"<<endl;
  cin>>dep;
  bal=bal+dep;
}
void banking::withdraw()
{
  cout<<"enter the amount withdrawn"<<endl;
  cin>>wid;
  if(wid<=bal)
  {
    bal=bal-wid;
  }
  else
  {
    cout<<"in sufficient balance:";
  }
}
void banking::balance()
{
  cout<<"balance amount"<<bal<<endl;
}

  void main()
  {
    banking b;
    int ch;
    clrscr();
do
 {
   cout<<"0. customer details"<<endl;
   cout<<"1. deposit"<<endl;
   cout<<"2.with draw"<<endl;
   cout<<"3.balance"<<endl;
   cout<<"4.exit"<<endl;
   cout<<"enter your choice";
   cin>>ch;
   switch(ch)
   {
      case 0:
       b.getdata();
       break;
      case 1:
       b.deposit();
       break;
      case 2:
       b.withdraw();
       break;
     case 3:
       b.balance();
       break;
     case 4:
       exit(0);
       break;
     default:
       cout<<"Enter the valid number:";
   }

}
       while(ch>=0&&ch<=4);
       getch();
}


