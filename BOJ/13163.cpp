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
        int l = a.length();
        bool flag = false;
        for(int i=0;i<l;i++)
        {
            if(!flag && a[i]==' ')
            {
                flag = true;
                printf("god");
            }
            else if(flag && a[i]!=' ') printf("%c", a[i]);
        }
        printf("\n");
    }

    return 0;
}