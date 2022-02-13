#include<iostream>
using namespace std;
int * fun()
{
    int x=10;
    return &x;

}
int main()
{
    int *p=fun();
    cout<<" value of dangling pointer is"<<p;
}