#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,7,4,3,12,34,23,78,91,10};
    for(int i=0;i<10;i++)
    {
       // cout<<&arr[i]<<endl;
          //cout<<*arr<<endl;
         
    }
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<(*arr)+1<<endl;
}
