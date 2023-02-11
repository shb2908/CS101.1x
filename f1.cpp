#include <bits/stdc++.h>

using namespace std;

void perimeter(int a,int b)
{
    int c=0;
    c=2*(a+b);
    cout<<"The perimeter of the rectangle is"<< endl;
    cout<< c << endl;

}

void area(int a,int b)
{
    int d=0;
    d= a*b;
    cout<<"The area of the rectangle is"<<endl;
    cout << d <<endl;

}

int main()
{
    int a,b;
    cout<<"enter the length and breadth of a rectangle"<< endl;
    cin>>a>>b;
    perimeter(a,b);
    area(a,b);
}