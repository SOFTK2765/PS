#include <bits/stdc++.h>

using namespace std;

int a[301];
int b[301];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        scanf(" %d", &b[i]);
    int wt = 0, cnt = 0, mx = 0;
    for(int i=0;i<n;i++)
    {
        if((a[i]>b[i] && (a[i]!=3 || b[i]!=1)) || (a[i]==1 && b[i]==3))
        {
            if(wt==1)
            {
                cnt++;
                if(mx<cnt) mx = cnt;
            }
            else
            {
                wt = 1;
                cnt = 1;
                if(mx<cnt) mx = cnt;
            }
        }
        else if((b[i]>a[i] && (a[i]!=3 || b[i]!=1)) || (b[i]==1 && a[i]==3))
        {
            if(wt==2)
            {
                cnt++;
                if(mx<cnt) mx = cnt;
            }
            else
            {
                wt = 2;
                cnt = 1;
                if(mx<cnt) mx = cnt;
            }
        }
        else if(a[i]==b[i])
        {
            if(wt==1)
            {
                wt = 2;
                cnt = 1;
                if(mx<cnt) mx = cnt;
            }
            else if(wt==2)
            {
                wt = 1;
                cnt = 1;
                if(mx<cnt) mx = cnt;
            }
        }
    }
    printf("%d", mx);

    return 0;
}