#include <bits/stdc++.h>

using namespace std;

char a[101][101];
char tmp[101];

int mod(long long x, long long y){return (((x%y)+y)%y);}

bool rabinKarp(char A[], char P[], long long d, long long q)
{
    long long p = 0, b = 0, n = strlen(A), m = strlen(P);
    for(int i=0;i<m;i++)
    {
        p = mod(d*p+(P[i]-'a'), q);
        b = mod(d*b+(A[i]-'a'), q);
    }
    long long h = mod((long long)pow(d, m-1), q);
    if(p==b)
    {
        bool flag = false;
        int pos = 0;
        for(int j=0;j<m;j++)
        {
            if(A[j]!=P[pos])
            {
                flag = true;
                break;
            }
            pos++;
        }
        if(!flag) return true;
    }
    for(int i=0;i<n-m;i++)
    {
        b = mod(d*(b-h*(A[i]-'a'))+(A[i+m]-'a'), q);
        if(p==b)
        {
            bool flag = false;
            int pos = 0;
            for(int j=i+1;j<i+m+1;j++)
            {
                if(A[j]!=P[pos])
                {
                    flag = true;
                    break;
                }
                pos++;
            }
            if(!flag) return true;
        }
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            int l1 = strlen(a[j]);
            int l2 = strlen(a[j+1]);
            if(l1>l2)
            {
                memset(tmp, 0, sizeof(tmp));
                strcpy(tmp, a[j+1]);
                memset(a[j+1], 0, sizeof(a[j+1]));
                strcpy(a[j+1], a[j]);
                memset(a[j], 0, sizeof(a[j]));
                strcpy(a[j], tmp);
            }
            else if(l1==l2)
            {
                int pos = 0;
                bool flag = false;
                while(a[j][pos]==a[j+1][pos])
                {
                    pos++;
                    if(pos==l1)
                    {
                        flag = true;
                        break;
                    }
                }
                if(!flag && a[j][pos]>a[j+1][pos])
                {
                    memset(tmp, 0, sizeof(tmp));
                    strcpy(tmp, a[j+1]);
                    memset(a[j+1], 0, sizeof(a[j+1]));
                    strcpy(a[j+1], a[j]);
                    memset(a[j], 0, sizeof(a[j]));
                    strcpy(a[j], tmp);
                }
            }
        }
    }
    bool flag = false;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(!rabinKarp(a[j], a[i], 26, 113))
            {
                flag = true;
                break;
            }
    if(!flag)
    {
        printf("YES\n");
        for(int i=0;i<n;i++)
            printf("%s\n", a[i]);
    }
    else printf("NO");

    return 0;
}