#include <bits/stdc++.h>

using namespace std;

int a[11], b[11];
int res[46][2];

int main()
{
    int ind = 0, cnt = 0;
    while(~scanf(" %d", &a[ind++]));
    sort(a, a+ind-2);
    int pos = 0;
    for(int i=0;i<ind-3;i++)
        for(int j=i+1;j<ind-2;j++)
            if(a[i]+a[j] == a[ind-2])
            {
                bool flag = false;
                for(int k=0;k<pos;k++)
                    if(res[k][0]==a[i] && res[k][1]==a[j])
                    {
                        flag = true;
                        break;
                    }
                if(!flag)
                {
                    printf("%d %d\n", a[i], a[j]);
                    cnt++;
                    res[pos][0] = a[i];
                    res[pos++][1] = a[j];
                }
            }
    printf("%d", cnt);

    return 0;
}