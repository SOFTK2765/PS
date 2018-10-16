#include <bits/stdc++.h>

using namespace std;

char a[600001];
char temp[600001];

int main()
{
    scanf("%s", a);
    int pos = strlen(a);
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char cm;
        scanf(" %c", &cm);
        if(cm=='P')
        {
            memset(temp, 0, sizeof(temp));
            char data;
            scanf(" %c", &data);
            strcpy(temp, a+pos);
            a[pos] = data;
            if(*temp!='\0')strcpy(a+pos+1, temp);
            pos++;
        }
        else if(cm=='L' && pos!=0) pos--;
        else if(cm=='D' && pos!=strlen(a)) pos++;
        else if(cm=='B' && pos!=0)
        {
            memset(temp, 0, sizeof(temp));
            strcpy(temp, a+pos);
            strcpy(a+pos-1, temp);
            pos--;
        }
    }
    printf("%s", a);

    return 0;
}