#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int a=1;a<=5;a++)
    {
        sum=sum+a;
      cout<<a<<"\t"<<sum<<endl;  
    }
    cout<<sum;
}