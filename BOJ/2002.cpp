#include <bits/stdc++.h>

using namespace std;

string a[1001];
string b[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    int cnt = 0, rank = 0;
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=0;j<n;j++)
            if(a[j]==b[i])
            {
                rank = j;
                break;
            }
        for(int j=i+1;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[k]==b[j] && k<rank)
                {
                    cnt++;
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
    }
    printf("%d", cnt);

    return 0;
}