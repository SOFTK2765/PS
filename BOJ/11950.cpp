#include <bits/stdc++.h>

using namespace std;

char a[51][51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    int min = 987654321;
    for(int i=1;i<n-1;i++)
    {
        int sumw = 0;
        for(int j=0;j<i;j++)
            for(int k=0;k<m;k++)
                if(a[j][k] != 'W') sumw++;
        for(int j=1;j<n-i;j++)
        {
            int sumb = 0;
            for(int k=i;k<n-j;k++)
                for(int l=0;l<m;l++)
                    if(a[k][l] != 'B') sumb++;
            int sumr = 0;
            for(int k=n-j;k<n;k++)
                for(int l=0;l<m;l++)
                    if(a[k][l] != 'R') sumr++;
            if(sumw+sumb+sumr<min) min = sumw+sumb+sumr;
        }
    }
    printf("%d", min);

    return 0;
}