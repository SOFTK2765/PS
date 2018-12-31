#include <bits/stdc++.h>

using namespace std;

char a[1001], b[1001];
int cnt[26];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
            cnt[j] = 0;
        scanf(" %s %s", a, b);
        int l = strlen(b);
        for(int j=0;j<l;j++)
        {
            if(b[j]=='B') cnt[b[j]-'A'] += 2;
            else if(b[j]=='C') cnt[b[j]-'A'] += 1;
            else if(b[j]=='M') cnt[b[j]-'A'] += 4;
            else if(b[j]=='W') cnt[b[j]-'A'] += 3;
        }
        int mx = 0;
        bool flag = false;
        char mxc;
        for(int j=0;j<26;j++)
            if(cnt[j]==mx) flag = true;
            else if(cnt[j]>mx)
            {
                flag = false;
                mx = cnt[j];
                mxc = j+'A';
            }
        printf("%s: ", a);
        if(flag) printf("There is no dominant species\n");
        else printf("The %s is the dominant species\n", mxc=='B'?"Bobcat":mxc=='C'?"Coyote":mxc=='M'?"Mountain Lion":"Wolf");
    }

    return 0;
}