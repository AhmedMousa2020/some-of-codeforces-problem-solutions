#include <iostream>


using namespace std;

int main()
{
   int n,t,k,d,s=0;
   cin>>n; cin>>t; cin>>k; cin>>d;
    if(d<(((n-1)/k)*t))
   {
       cout<<"Yes"<<endl;
   }
   else
    cout<<"No"<<endl;
    return 0;
}
