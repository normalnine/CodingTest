#include<iostream>
using namespace std;

int main()
{
    int a,b,t =0;
    
    cin>>t;
    
    for(int i = 0; i<t; i++)
    {
        cin>>a>>b;
        
        cout<<"Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
    
    return 0;
}