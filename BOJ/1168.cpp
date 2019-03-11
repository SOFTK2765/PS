#include <bits/stdc++.h>

using namespace std;

struct listnode
{
    listnode *link;
    int num;
};

listnode a[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        a[i].link = &a[i+1];
        a[i].num = i;
    }
    a[n].link = &a[1];
    a[n].num = n;
    int cnt = n;
    printf("<");
    listnode *temp = &a[0];
    while(cnt)
    {
        for(int i=0;i<m-1;i++)
            temp = temp->link;
        if(cnt!=n) printf(", ");
        printf("%d", temp->link->num);
        cnt--;
        a[temp->num].link = temp->link->link;
    }
    printf(">");

    return 0;
}