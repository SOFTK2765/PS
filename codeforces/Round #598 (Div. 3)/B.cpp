#include <bits/stdc++.h>

using namespace std;

int a[101];
bool check[101];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        memset(check, 0, sizeof(check));
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        for(int i=0;i<n;i++)
        {
            int mn = 987654321, mni = i;
            for(int j=i;j<n;j++)
                if(mn>a[j])
                {
                    mni = j;
                    mn = a[j];
                }
            for(int j=mni;j>i;j--)
            {
                if(check[j-1]) break;
                swap(a[j-1], a[j]);
                check[j-1] = true;
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}