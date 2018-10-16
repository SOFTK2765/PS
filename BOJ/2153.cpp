#include <bits/stdc++.h>

using namespace std;

char a[21];

int main()
{
    scanf("%s", a);
    int l = strlen(a), sum = 0;
    for(int i=0;i<l;i++)
    {
        if('a'<=a[i] && a[i]<='z') sum += (a[i]-'a'+1);
        else if('A'<=a[i] && a[i]<='Z') sum += (a[i]-'A'+27);
    }
    if(sum%2!=0)
    {
        bool flag = false;
        for(int i=3;i*i<sum;i+=2)
            if(sum%i==0)
            {
                flag = true;
                break;
            }
        if(!flag) printf("It is a prime word.");
        else printf("It is not a prime word.");
    }
    else printf("It is not a prime word.");

    return 0;
}