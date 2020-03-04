#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n;
        long long k;
        scanf(" %d %lld", &n, &k);
        string s;
        cin >> s;
        long long pos = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i-pos<=k)
                {
                    swap(s[i], s[pos]);
                    k -= (i-pos);
                    pos++;
                }
                else
                {
                    swap(s[i], s[i-k]);
                    break;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}