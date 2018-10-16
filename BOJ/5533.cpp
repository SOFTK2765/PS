#include <bits/stdc++.h>

using namespace std;

int s[201][3] = {};

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            scanf(" %d", &s[i][j]);
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
            bool end = false;
            for(int k=0;k<n;k++)
            {
                if(i!=k && s[i][j]==s[k][j])
                {
                    end = true;
                    break;
                }
            }
            if(end) continue;
            sum += s[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}