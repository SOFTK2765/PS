#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v;
    for(int i=1;i<=n;i++)
        v.push_back(i);
    do{
        for(int i=0;i<n;i++)
            printf("%d ", v[i]);
        printf("\n");
    }while(next_permutation(v.begin(), v.end()));

    return 0;
}