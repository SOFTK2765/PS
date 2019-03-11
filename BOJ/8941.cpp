#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    map<char, double> mp;
    mp['C'] = 12.01;
    mp['H'] = 1.008;
    mp['O'] = 16.00;
    mp['N'] = 14.01;
    while(t--)
    {
        string a;
        cin >> a;
        int l = a.length();
        double sum = 0;
        for(int i=0;i<l;i++)
            if(a[i]=='C' || a[i]=='H' || a[i]=='O' || a[i]=='N')
            {
                char s = a[i];
                int tmp = 0;
                while(++i<l && a[i]!='C' && a[i]!='H' && a[i]!='O' && a[i]!='N')
                {
                    tmp *= 10;
                    tmp += (a[i]-'0');
                }
                i--;
                if(tmp==0) tmp = 1;
                sum += mp[s]*tmp;
            }
        printf("%.3lf\n", sum);
    }

    return 0;
}