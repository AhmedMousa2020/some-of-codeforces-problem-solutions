#include<bits/stdc++.h>
using namespace std;
char c;
set<char>S;



int main()
{
    while(cin>>c)
if(isalpha(c))
S.insert(c);
cout<<S.size();
return 0;
}
