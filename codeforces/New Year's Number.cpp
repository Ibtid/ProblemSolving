#include <bits/stdc++.h>
using namespace std;

int recursive(int number)
{
    if (number == 2020 || number == 2021)
    {
        return 1;
    }
    if(number < 2020)
    {
        return 0;
    }
    int answer;
    answer = max(recursive(number-2020),recursive(number-2021));
    return answer;
}

int main(){
    int test,answer,number;
    cin>>test;
    for(int i = 0; i<test; i++)
    {
        cin>>number;
        if(number<2020)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            answer=recursive(number);
            if(answer==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
}

