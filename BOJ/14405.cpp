#include <bits/stdc++.h>

using namespace std;

char a[5001];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    bool flag = false;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='p' && a[i+1]=='i') i++;
        else if(a[i]=='k' && a[i+1]=='a') i++;
        else if(a[i]=='c' && a[i+1]=='h' && a[i+2]=='u') i += 2;
        else
        {
            flag = true;
            break;
        }
    }
    printf("%s", flag?"NO":"YES");

    return 0;
}