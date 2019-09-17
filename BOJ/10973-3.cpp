#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        v.push_back(tmp);
    }
    if(prev_permutation(v.begin(), v.end()))
        for(int i=0;i<n;i++)
            printf("%d ", v[i]);
    else printf("-1");

    return 0;
}