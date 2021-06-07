#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Counter
{
private:
    int count,steps;
public:
     Counter() : count(0), steps(0){}

 void setIncrementStep(int step_val)
 {
     steps=step_val;
 }

 int getCount()
 {
     return count;
 }

 void increment()
 {
     count+=steps;
 }

 void resetCount()
 {
     count=0;
 }
};

int main()
{
    Counter c;
    int sv;
    cin>>sv;
    c.setIncrementStep(sv);
    cout << c.getCount()<<endl;
    c.increment();
    cout << c.getCount()<<endl;
    c.resetCount();
    cout << c.getCount()<<endl;

    return 0;
}

