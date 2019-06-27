#include <iostream>

using namespace std;
int ston(string s1,string s2)
{
    int t=0,n;
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]==s1[t])
        {
            t++;
        }
    }
    return (t+1);
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<ston(s1,s2);
    return 0;
}
