#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class RationalNumber
{
private:
    int numerators;
    int denominators;
public:


 void assign(int numerator,int denominator)
 {
     if(numerators==0)
        cout<<"Error"<<endl;
     else{
        numerators=numerator;
        denominators=denominator;
     }
 }

 double convert()
 {
     double numerators,denominators;
     return numerators/denominators;
 }

 void invert()
 {
      swap(numerators,denominators);
 }

 void print()
 {
     cout<<"The Rational Number is "<<numerators<< "/" <<denominators<<endl;
 }
};

int main()
{
    RationalNumber r;
    int numerator,denominator;
    cin>>numerator;
    cin>>denominator;
    r.assign(numerator,denominator);
    cout <<r.convert() <<endl;
    r.print();

    return 0;
}
