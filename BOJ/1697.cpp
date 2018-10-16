#include <bits/stdc++.h>

using namespace std;

bool check[100001] = {};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if(n==k)
    {
        printf("%d", 0);
        return 0;
    }
    queue<int> a;
    a.push(n);
    int cnt = 0;
    bool end = false;
    while(!a.empty())
    {
        int size = a.size();
        while(size--)
        {
            for(int i=0;i<3;i++)
            {
                int tmp = a.front();
                if(i==0)
                {
                    tmp++;
                    if(tmp>100000 || check[tmp]==true) continue;
                }
                else if(i==1)
                {
                    tmp--;
                    if(tmp<0 || check[tmp]==true) continue;
                }
                else
                {
                    tmp *= 2;
                    if(tmp>100000 || check[tmp]==true) continue;
                }
                if(tmp==k)
                {
                    end = true;
                    break;
                }
                a.push(tmp);
                check[tmp] = true;
            }
            if(end) break;
            a.pop();
        }
        cnt++;
        if(end) break;
    }
    printf("%d", cnt);

    return 0;
}