#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,t,t1;
        cin>>s>>t;
        s1=s;
        t1=t;
        while(1)
        {
            if(s1.size()==t1.size())
            {
                if(s1==t1)
                    cout<<s1<<endl;
                else
                    cout<<"-1"<<endl;
                break;
            }
            else
            {
                if(s1.size()<t1.size())
                    s1+=s;
                else
                    t1+=t;
            }
        }
    }
}
