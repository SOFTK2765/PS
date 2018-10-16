#include <bits/stdc++.h>

using namespace std;

bool check[100001] = {};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    queue<pair<int, int>> a;
    a.push({n, 0});
    check[n] = true;
    int min = 1000000;
    bool end = false;
    while(!a.empty())
    {
        int size = a.size();
        while(size--)
        {
            int tmp = a.front().first;
            int nt = a.front().second;
            check[tmp] = true;
            a.pop();
            if(tmp==k)
            {
                if(min>nt) min = nt;
                end = true;
            }
            if(tmp+1<=100000 && nt+1<min && !check[tmp+1]) a.push({tmp+1, nt+1});
            if(tmp-1>=0 && nt+1<min && !check[tmp-1]) a.push({tmp-1, nt+1});
            if(tmp*2<=100000 && nt<min && !check[tmp*2]) a.push({tmp*2, nt});
        }
        if(end) break;
    }
    printf("%d", min);

    return 0;
}