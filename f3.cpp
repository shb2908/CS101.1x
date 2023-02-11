#include <bits/stdc++.h>

using namespace std;

void frac( float a)
{
    int c=a;
    float d=a-c;
    cout<<"the fractional part of the floating point number is :" << d << endl;

}

int main()
{
    float a;
    cout<<"enter a floating point number"<<endl;
    cin>>a;
    frac(a);

}
