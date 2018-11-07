#include <bits/stdc++.h>

using namespace std;

char a[101];
const char al1[] = {'A', 'I', 'Y', 'E', 'O', 'U'};
const char al2[] = {'a', 'i', 'y', 'e', 'o', 'u'};
const char al3[] = {'B', 'K', 'X', 'Z', 'N', 'H', 'D', 'C', 'W', 'G', 'P', 'V', 'J', 'Q', 'T', 'S', 'R', 'L', 'M', 'F'};
const char al4[] = {'b', 'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q', 't', 's', 'r', 'l', 'm', 'f'};

int main()
{
    while(~scanf(" %[^\n]s", a))
    {
        int l = strlen(a);
        for(int i=0;i<l;i++)
        {
            if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
            {
                for(int j=0;j<6;j++)
                    if(a[i]==al1[j]) printf("%c", al1[(j+3)%6]);
                    else if(a[i]==al2[j]) printf("%c", al2[(j+3)%6]);
                for(int j=0;j<20;j++)
                    if(a[i]==al3[j]) printf("%c", al3[(j+10)%20]);
                    else if(a[i]==al4[j]) printf("%c", al4[(j+10)%20]);
            }
            else printf("%c", a[i]);
        }
        printf("\n");
    }

    return 0;
}