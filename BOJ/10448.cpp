#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tmp = 0;
    vector<int> v;
    while(++tmp)
    {
        int sum = tmp*(tmp+1)/2;
        if(sum>1000) break; 
        v.push_back(sum);
    }
    int size = v.size();
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        bool flag = false;
        for(int i=0;i<size;i++)
        {
            for(int j=i;j<size;j++)
            {
                for(int k=j;k<size;k++)
                    if(v[i]+v[j]+v[k]==n)
                    {
                        flag = true;
                        break;
                    }
                if(flag) break;
            }
            if(flag) break;
        }
        printf("%d\n", flag);
    }

    return 0;
}