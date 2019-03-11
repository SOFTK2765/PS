#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    map<char, pair<char, char>> adj;
    for(int i=0;i<n;i++);
    {
        char a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        if(b!='.') adj[a].first = b;
        if(c!='.') adj[a].second = c;
    }
    //pre
    adj['A'].first
    adj['A'].second
    //mid
    //suf

    return 0;
}