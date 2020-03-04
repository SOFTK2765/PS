#include <bits/stdc++.h>

using namespace std;

int a[1001], res[1001];

int main()
{
    int n, m, d;
    scanf("%d %d %d", &n, &m, &d);
    vector<int> v;
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        v.push_back(0);
        int tmp;
        scanf(" %d", &tmp);
        sum += tmp;
        v.push_back(tmp);
    }
    v.push_back(0);
    int cnt = n-sum, size = v.size();
    while(cnt)
    {
        for(int i=0;i<size;i += 2)
        {
            v[i]++;
            cnt--;
            if(cnt<=0) break;
        }
    }
    if(v[0]>=d)
    {
        printf("NO");
        return 0;
    }
    int tmpcnt = 1;
    printf("YES\n");
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<v[i];j++)
                printf("0 ");
        }
        else
        {
            for(int j=0;j<v[i];j++)
                printf("%d ", tmpcnt);
            tmpcnt++;
        }
    }

    return 0;
}