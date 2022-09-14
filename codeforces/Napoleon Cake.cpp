#include <bits/stdc++.h>

using namespace std;

const int N=2e5+5;
int t;
int a[N];
int n;
int dp[N];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int mv = 0;
        for (int i = n; i>=1; i--)
        {
            mv = max(mv,a[i]);
            if(mv>0)
            {
                mv--;
                dp[i]=1;
            }
            else
            {
                dp[i] = 0;
            }
        }
        for (int i=1; i<=n; i++)
        {
            printf("%d ", dp[i]);
        }
        puts("");

    }
}
