#include <bits/stdc++.h>

using namespace std;
set<string> bst[128][128][128];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        string a, b;
        cin >> a >> b;
        int l = a.length();
        if(l==1) bst[a[0]][0][0].insert("");
        else if(l==2) bst[a[0]][a[1]][0].insert("");
        else bst[a[0]][a[1]][a[2]].insert(a.substr(3, l-3));
    }
    for(int i=127;i>=0;i--)
        for(int j=12)

    return 0;
}