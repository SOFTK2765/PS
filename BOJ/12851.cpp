#include <bits/stdc++.h>

using namespace std;

bool check[100001] = {};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    queue<int> a;
    a.push(n);
    check[n] = true;
    int time = -1, cnt = 0;
    bool end = false;
    while(!a.empty())
    {
        int size = a.size();
        while(size--)
        {
            int tmp = a.front();
            check[tmp] = true;
            a.pop();
            if(tmp==k)
            {
                cnt++;
                end = true;
            }
            if(tmp+1<=100000 && !check[tmp+1]) a.push(tmp+1);
            if(tmp-1>=0 && !check[tmp-1]) a.push(tmp-1);
            if(tmp*2<=100000 && !check[tmp*2]) a.push(tmp*2);
        }
        time++;
        if(end) break;
    }
    printf("%d\n%d", time, cnt);

    return 0;
}