#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int b;
    cout <<"this is a program to print the expansion of (a+b)^2" << endl;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    int ab= a*b;
    cout << (a+b)*(a+b) <<endl;
    cout << "=" <<(a*a) + (2*ab) +(b*b) <<endl;
    return 0;

}