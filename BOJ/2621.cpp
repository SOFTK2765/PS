#include <bits/stdc++.h>

using namespace std;

char a[6];
int b[6];

int main()
{
    map<char, int> mp;
    for(int i=0;i<5;i++)
        scanf(" %c %d", &a[i], &b[i]);
    for(int i=0;i<5;i++)
        mp[a[i]]++;
    sort(b, b+5);
    if((mp['R']==5 || mp['B']==5 || mp['Y']==5 || mp['G']==5) && b[0]+1==b[1] && b[1]+1==b[2] && b[2]+1==b[3] && b[3]+1==b[4]) printf("%d", b[4]+900);
    else if((b[0]==b[1] && b[1]==b[2] && b[2]==b[3]) || (b[1]==b[2] && b[2]==b[3] && b[3]==b[4])) printf("%d", b[2]+800);
    else if(b[0]==b[1] && b[1]==b[2] && b[3]==b[4]) printf("%d", b[2]*10+b[4]+700);
    else if(b[0]==b[1] && b[2]==b[3] && b[3]==b[4]) printf("%d", b[2]*10+b[0]+700);
    else if(mp['R']==5 || mp['B']==5 || mp['Y']==5 || mp['G']==5) printf("%d", b[4]+600);
    else if(b[0]+1==b[1] && b[1]+1==b[2] && b[2]+1==b[3] && b[3]+1==b[4]) printf("%d", b[4]+500);
    else if(b[0]==b[1] && b[1]==b[2]) printf("%d", b[1]+400);
    else if(b[2]==b[3] && b[3]==b[4]) printf("%d", b[3]+400);
    else if(b[0]==b[1] && b[2]==b[3]) printf("%d", b[2]*10+b[0]+300);
    else if(b[0]==b[1] && b[3]==b[4]) printf("%d", b[3]*10+b[0]+300);
    else if(b[1]==b[2] && b[3]==b[4]) printf("%d", b[3]*10+b[1]+300);
    else if(b[0]==b[1]) printf("%d", b[0]+200);
    else if(b[1]==b[2]) printf("%d", b[1]+200);
    else if(b[2]==b[3]) printf("%d", b[2]+200);
    else if(b[3]==b[4]) printf("%d", b[3]+200);
    else printf("%d", b[4]+100);

    return 0;
}