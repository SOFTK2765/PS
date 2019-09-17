#include <bits/stdc++.h>

using namespace std;

map<char, pair<char, char>> adj;
string res;

void pre(char c)
{
    res += c;
    if(adj[c].first) pre(adj[c].first);
    if(adj[c].second) pre(adj[c].second);
}

void mid(char c)
{
    if(adj[c].first) mid(adj[c].first);
    res += c;
    if(adj[c].second) mid(adj[c].second);
}

void suf(char c)
{
    if(adj[c].first) suf(adj[c].first);
    if(adj[c].second) suf(adj[c].second);
    res += c;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char a, b, c;
        scanf(" %c %c %c", &a, &b, &c);
        if(b!='.') adj[a].first = b;
        if(c!='.') adj[a].second = c;
    }
    pre('A');
    cout << res << endl;
    res = "";
    mid('A');
    cout << res << endl;
    res = "";
    suf('A');
    cout << res << endl;

    return 0;
}