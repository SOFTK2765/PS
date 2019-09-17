#include <bits/stdc++.h>

using namespace std;

set<int> st[9];

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);
    st[1].insert(k);
    for(int i=2;i<=8;i++)
    {
        int tmp = k;
        for(int j=1;j<i;j++)
        {
            tmp *= 10;
            tmp += k;
        }
        st[i].insert(tmp);
        for(int j=1;j<i;j++)
        {
            for(set<int>::iterator it1=st[i-j].begin();it1!=st[i-j].end();it1++)
            {
                int tmp1 = *it1;
                for(set<int>::iterator it2=st[j].begin();it2!=st[j].end();it2++)
                {
                    int tmp2 = *it2;
                    st[i].insert(tmp1+tmp2);
                    st[i].insert(tmp1-tmp2);
                    st[i].insert(tmp2-tmp1);
                    st[i].insert(tmp1*tmp2);
                    if(tmp2!=0) st[i].insert(tmp1/tmp2);
                    if(tmp1!=0) st[i].insert(tmp2/tmp1);
                }
            }
        }
    }
    while(n--)
    {
        int a;
        scanf(" %d", &a);
        bool flag = false;
        for(int i=1;i<=8;i++)
            if(st[i].find(a)!=st[i].end())
            {
                printf("%d\n", i);
                flag = true;
                break;
            }
        if(!flag) printf("NO\n");
    }

    return 0;
}