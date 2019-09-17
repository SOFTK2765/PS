#include <bits/stdc++.h>

using namespace std;

char a[101];
int cnt[27];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
            cnt[j] = 0;
        scanf(" %s", a);
        int l = strlen(a);
        for(int j=0;j<l;j++)
            cnt[a[j]-'a']++;
        bool flag = false;
        for(int j=0;j<26;j++)
            if(cnt[j]>1) flag = true;
        bool cflag = false, c2flag = false;
        for(int j=0;j<26;j++)
        {
            if(!cflag)
            {
                if(cnt[j]==1) cflag = true;
            }
            else
            {
                if(cnt[j]==0) c2flag = true;
            }
            if(c2flag)
            {
                if(cnt[j]==1) flag = true;
            }
        }
        printf("%s\n", flag?"No":"Yes");
    }

    return 0;
}