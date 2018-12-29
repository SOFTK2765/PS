#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    a[0] = n;
    int tmp = n, cnt = n, pos = 0;
    bool flag;
    while(1)
    {
        if(cnt<k)
        {
            flag = false;
            break;
        }
        else if(cnt>k)
        {
            if(a[pos]>=2)
            {
                cnt--;
                a[pos] -= 2;
                a[pos+1]++;
            }
            else
            {
                if(a[pos+1]<2)
                {
                    flag = false;
                    break; 
                }
                else
                {
                    pos++;
                    continue;
                }
            }
        }
        else
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        printf("YES\n");
        int tn = 1;
        for(int i=0;i<101;i++)
        {
            while(a[i]--) printf("%d ", tn);
            tn *= 2;
        }
    }
    else printf("NO");

    return 0;
}