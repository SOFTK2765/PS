#include <bits/stdc++.h>

using namespace std;

char a[21];

int main()
{
    while(1)
    {
        bool acheck = false, fail = false;
        int acnt = 0, bcnt = 0;
        scanf("%s ", a);
        if(strcmp(a, "end")==0) break;
        int l = strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            {
                acheck = true;
                bcnt = 0;
                if(i==0) acnt++;
                if(i>0 && (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')) acnt++;
            }
            else
            {
                acnt = 0;
                if(i==0) bcnt++;
                if(i>0 && !(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')) bcnt++;
            }
            if(i>0 && a[i]!='e' && a[i]!='o' && a[i]==a[i-1]) fail = true;
            if(acnt>=3 || bcnt>=3) fail = true;
        }
        if(!acheck || fail) printf("<%s> is not acceptable.\n", a);
        else printf("<%s> is acceptable.\n", a);
    }

    return 0;
}