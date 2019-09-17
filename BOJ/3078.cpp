#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    queue<int> q[21];
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        int l = s.length();
        q[l].push(i);
        while(!q[l].empty() && i-q[l].front()>k) q[l].pop();
        sum += q[l].size()-1;
    }
    printf("%lld", sum);    

    return 0;
}