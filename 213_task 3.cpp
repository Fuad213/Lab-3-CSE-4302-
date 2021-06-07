#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Bank
{
 private:
   int account_number, balance_amount;
   string name_of_customer, account_type;

 public:
   Bank() : balance_amount(0){}

 void customerDetails()
 {
     string name;
     int number;
     cout<<"Enter name: ";
     cin>> name;
     cout<<"Enter account number: ";
     cin>> number;
     cout<<endl;
     name_of_customer = name;
     account_number = number;
 }

 void accountType()
 {
     string type;
     cout<<"Enter account type: ";
     cin>> type;
     account_type = type;
     cout<<endl;
 }

 void balance()
 {
     cout<< "Balance : "<< balance_amount <<endl;
 }

 void deposit()
 {
     int add;
     cout<<"Enter deposit ammount: ";
     cin>>add;
     balance_amount += add;
     balance();
     cout<<endl;
 }

 void withdraw()
 {
     int x;
     cout<<"Enter withdraw ammount: ";
     cin>>x;
     if (x> balance_amount)
         cout << "Error" <<endl;
     else
         balance_amount-=x;

    cout<<endl;
 }

 void display()
 {
     cout<<endl<< "Name : " << name_of_customer <<endl;
     cout << "Account number : " << account_number <<endl;
     cout << "Account type : " << account_type <<endl;
     cout << "Account Balance : " << balance_amount <<endl;
 }
};

int main()
{
    Bank b;
    b.customerDetails();
    b.accountType();
    b.deposit();
    b.withdraw();
    b.balance();
    b.display();

    return 0;
}
