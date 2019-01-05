#include <bits/stdc++.h>

using namespace std;

const string a[] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};

int main()
{
    int n;
    scanf("%d", &n);
    int mx = 0, mi;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<n;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(mx<tmp)
            {
                mx = tmp;
                mi = i;
            }
        }
    }
    cout << a[mi];

    return 0;
}