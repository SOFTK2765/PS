#include <bits/stdc++.h>

using namespace std;

const string trans[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<pair<int, string>> a(100);

bool cmp(const pair<int, string> &a, const pair<int, string> &b){return a.second<b.second;}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int pos = 0;
    for(int i=m;i<=n;i++)
    {
        a[i].first = i;
        int tmp = i;
        while(tmp)
        {
            a[i].second = trans[tmp%10]+a[i].second;
            tmp /= 10;
        }
    }
    sort(&a[m], &a[n+1], cmp);
    int cnt = 0;
    for(int i=m;i<=n;i++)
    {
        printf("%d ", a[i].first);
        if(++cnt%10==0) printf("\n");
    }

    return 0;
}