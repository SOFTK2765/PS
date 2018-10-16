#include <bits/stdc++.h>

using namespace std;

char a[100001];
int alpha[27];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    for(int i=0;i<n;i++)
        alpha[a[i]-'a']++;
    for(int i=0;i<26;i++)
        while(alpha[i]--) printf("%c", i+'a');

    return 0;
}