#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a>> b>> c;
    int k = max(a+b+c, (a+b)*c);
    int i = max(k, a*(b+c));
    int j = max(i, a*b*c);
    cout << j << '\n';
}
