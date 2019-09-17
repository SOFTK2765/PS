#include <bits/stdc++.h>

using namespace std;

int a[21];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    string s;
    cin >> s;
    int it = s.find(","), pre = 0, pos = 0;
    while(it!=string::npos)
    {
        a[pos++] = atoi(s.substr(pre, it-pre).c_str());
        pre = it+1;
        it = s.find(",", pre+1);
    }
    a[pos++] = atoi(s.substr(pre, it-pre).c_str());
    for(int i=0;i<k;i++)
        for(int j=0;j<n-i;j++)
            a[j] = a[j+1]-a[j];
    printf("%d", a[0]);
    for(int i=1;i<n-k;i++)
        printf(",%d", a[i]);

    return 0;
}