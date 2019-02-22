#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d ", &n);
    for(int i=0;i<n;i++)
    {
        string a;
        getline(cin, a);
        int l = a.length(), sum = 0;
        for(int j=0;j<l;j++)
            if(a[j]-'A'+1>0) sum += (a[j]-'A'+1);
        if(sum==100) printf("PERFECT LIFE\n");
        else printf("%d\n", sum);
    }

    return 0;
}