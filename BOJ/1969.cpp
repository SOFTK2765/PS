#include <bits/stdc++.h>

using namespace std;

const char dna[] = {'A', 'C', 'G', 'T'};

char a[1001][51];
char res[51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        int mx = 0;
        for(int j=0;j<4;j++)
        {
            int cnt = 0;
            for(int k=0;k<n;k++)
                if(a[k][i]==dna[j]) cnt++;
            if(cnt>mx)
            {
                mx = cnt;
                res[i] = dna[j];
            }
        }
        sum += (n-mx);
    }
    printf("%s\n%d", res, sum);

    return 0;
}