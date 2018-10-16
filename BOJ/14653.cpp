#include <bits/stdc++.h>

using namespace std;

bool a[26];
bool b[26];

vector<pair<int, char>> vec;

int main()
{
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);
    for(int i=0;i<k;i++)
    {
        int tmp1;
        char tmp2;
        scanf(" %d %c", &tmp1, &tmp2);
        vec.push_back({tmp1, tmp2});
    }
    int pos = q-1;
    int tmp = vec[pos].first;
    while(1)
        if(tmp != vec[--pos].first) break;
    for(int i=++pos;i<k;i++)
        a[vec[i].second-'A'] = true;
    if(vec[q-1].first == 0)
    {
        printf("%d", -1);
        return 0;
    }
    a[0] = false;
    for(int i=1;i<n;i++)
        if(!a[i]) printf("%c ", i+'A');

    return 0;
}