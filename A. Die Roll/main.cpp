#include <iostream>

using namespace std;
/*if(p=0)
    {
        cout<<0<<"/"<<1<<endl;}
        else if(p=1)
        {
            cout<<1<<"/"<<1<<endl;
        }
        else*/
int main()
{
    int y,w;
    cin>>y;
    cin>>w;
    int r=max(y,w);
    int s=6;
    int p=6-(r-1);
    float a=float(p)/float(s);
    int o=(a)*(6);
    //cout<<o<<endl;
    if(6%o==0)
    {
      cout<<o/o<<"/"<<6/o<<endl;
    }
    else
    {cout<<o<<"/"<<6<<endl;}

    //cout<<p<<endl;
   // cout<<a<<endl;

    return 0;
}
