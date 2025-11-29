/*Problem: Swapping and Summing Using Pointers

Description:
Write a C++ program that:
Takes two integers as input.
Swaps their values using a pointer (not a normal variable).
Calculates and prints the sum of the two numbers using a pointer.

Requirements:
Use only int variables and int pointers.
Create functions that take pointers as parameters for swapping and summing.*/

#include <iostream>
using namespace std;
int a,b;
void input()
{
    cout<<"Enter two integers: ";
    cin>>a;
    cin>>b;
}
void swap(int *x, int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
}
void sum(int *x, int *y)
{
    int s;
    s= *x + *y;
    cout<<"Sum of the two integers: "<<s<<endl;
}
int main()
{
    input();
    cout<<"Before swapping: a = "<<a<<", b = "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
    sum(&a,&b);
    return 0;
}