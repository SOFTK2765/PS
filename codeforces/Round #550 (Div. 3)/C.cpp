#include <bits/stdc++.h>

using namespace std;

int a[200001], cnt[200001], tmp[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    for(int i=0;i<n;i++)
        cnt[a[i]]++;
    for(int i=0;i<200001;i++)
        if(cnt[i]>2)
        {
            printf("NO");
            return 0;
        }
    printf("YES\n");
    int pos = 0;
    for(int i=0;i<200001;i++)
    {
        if(cnt[i]!=0)
        {
            cnt[i]--;
            tmp[pos++] = i;
        }
    }
    printf("%d\n", pos);
    for(int i=0;i<pos;i++)
        printf("%d ", tmp[i]);
    printf("\n");
    pos = 0;
    for(int i=200000;i>=0;i--)
    {
        if(cnt[i]!=0)
        {
            cnt[i]--;
            tmp[pos++] = i;
        }
    }
    printf("%d\n", pos);
    for(int i=0;i<pos;i++)
        printf("%d ", tmp[i]);
    printf("\n");

    return 0;
}