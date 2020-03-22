#include <bits/stdc++.h>

#define MAXN 100000

using namespace std;

int t[2*MAXN];
int n, m;

void build()
{
    for(int i=n-1;i>0;i--)
        t[i] = min(t[i*2], t[i*2+1]);
}

void update(int pos, int val)
{
    for(t[pos += n]=val;pos>1;pos /= 2)
        t[pos/2] = min(t[pos], t[pos^1]);
}

int query(int l, int r)
{
    int ans = 1987654321;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l&1) ans = min(ans, t[l++]);
        if(r&1) ans = min(ans, t[--r]);
    }
    return ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
    for(int i=0;i<n;i++)
        cin >> t[n+i];
    build();
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a==1) update(b-1, c);
        else cout << query(b-1, c) << '\n';
    }

    return 0;
}