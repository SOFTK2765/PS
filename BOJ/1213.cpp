#include <bits/stdc++.h>

using namespace std;

char a[51];
int check[26];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
        check[a[i]-'A']++;
    bool flag = false;
    int center = -1;
    for(int i=0;i<26;i++)
        if(check[i]%2==1)
        {
            if(flag)
            {
                printf("I'm Sorry Hansoo");
                return 0;
            }
            flag = true;
            center = i;
        }
    if(center!=-1) check[center]--;
    for(int i=0;i<26;i++)
    {
        int tmp = check[i]/2;
        while(tmp--) printf("%c", i+'A');
        check[i] /= 2;
    }
    if(center!=-1) printf("%c", center+'A');
    for(int i=25;i>=0;i--)
        while(check[i]--) printf("%c", i+'A');

    return 0;
}