#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    n--;
    int tmp = n%8;
    if(tmp==0) printf("1");
    else if(tmp==1 || tmp==7) printf("2");
    else if(tmp==2 || tmp==6) printf("3");
    else if(tmp==3 || tmp==5) printf("4");
    else if(tmp==4) printf("5");

    return 0;
}