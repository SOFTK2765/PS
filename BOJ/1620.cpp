#include <bits/stdc++.h>

using namespace std;

struct pocketmon
{
    int num;
    char name[25];
    
    pocketmon(){}
    pocketmon(const pocketmon& a)
    {
        strcpy(name, a.name);
        num = a.num;
    }
    pocketmon(int n, char *p)
    {
        num = n;
        strcpy(name, p);
    }
    pocketmon& operator =(const pocketmon &a)
    {
        strcpy(name, a.name);
        num = a.num;
        return *this;
    }
};

pocketmon a[100001], b[100001];

bool cmp(const pocketmon &a, const pocketmon &b)
{
    if(strcmp(a.name, b.name)==-1)
        return true;
    else
        return false;
}

int f(int n, char tmp[])
{
    int lo = 0, hi = n-1;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;

        if(strcmp(a[mid].name, tmp)==0)
            return mid;
        else if(strcmp(a[mid].name, tmp)>0)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return lo-1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        char cpy[25];
        scanf("%s", cpy);
        strcpy(a[i].name, cpy);
        strcpy(b[i].name, cpy);
        a[i].num = i+1;
        b[i].num = i+1;
    }
    sort(a, a+n, cmp);
    char tmp[25];
    while(m--)
    {
        memset(tmp, 0, sizeof(tmp));
        scanf("%s", tmp);
        if('0'<=tmp[0] && tmp[0]<='9')
        {
            int l = strlen(tmp);
            int ponum = atoi(tmp);
            printf("%s\n", b[ponum-1].name);
        }
        else
        {
            
            printf("%d\n", lower_bound(a, a + n, pocketmon(0, tmp), cmp)->num);
        }
    }

    return 0;
}