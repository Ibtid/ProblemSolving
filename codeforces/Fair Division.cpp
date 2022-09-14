#include <bits/stdc++.h>
using namespace std;

int candiesWeight[100];


int candySort(int candies, int alexW, int bobW){
    if (candies == -1 && alexW == bobW)
    {
        return 1;
    }
    if(candies == -1 && alexW != bobW)
    {
        return 0;
    }
    int answer;
    return answer= max(candySort(candies-1, alexW+candiesWeight[candies-1],bobW),candySort(candies-1, alexW,bobW+candiesWeight[candies-1]));
}


void solve(){
    int candies;
    int candiesWeight[100];
    cin>>candies;

    for(int i=0; i<candies; i++)
    {
        cin>>candiesWeight[i];
    }
    int answer = candySort(candies, 0, 0);
    if (answer==1)
        printf("YES");
    if(answer==0)
        printf("NO");
}

int main(){
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
