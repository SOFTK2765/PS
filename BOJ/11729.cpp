#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            int tmp1 = 1, tmp2 = 3;
            for(vector<pair<int, int>>::iterator it = v.begin();it<v.end();it+=2)
            {
                it = v.insert(it, {tmp1, tmp2});
                tmp1 = tmp2;
                tmp2 = (tmp2+1)%3+1;
            }
            v.push_back({tmp1, tmp2});
        }
        else
        {
            int tmp1 = 1, tmp2 = 2;
            for(vector<pair<int, int>>::iterator it = v.begin();it<v.end();it+=2)
            {
                it = v.insert(it, {tmp1, tmp2});
                tmp1 = tmp2;
                tmp2 = tmp2%3+1;
            }
            v.push_back({tmp1, tmp2});
        }
    }
    printf("%d\n", v.size());
    for(vector<pair<int, int>>::iterator it = v.begin();it!=v.end();it++)
        printf("%d %d\n", (*it).first, (*it).second);

    return 0;
}