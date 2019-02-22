#include <bits/stdc++.h>

using namespace std;

const int check[] = {2, 4, 8, 16, 32, 64};

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(b*b-4*a*c>0 && a!=0)
    {
        double tmp1 = (-b+sqrt(b*b-4*a*c))/(2*a), tmp2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        bool check1 = false, check2 = false;
        for(int i=0;i<6;i++)
        {
            if(tmp1==check[i]) check1 = true;
            if(tmp2==check[i]) check2 = true;
        }
        if(check1 && check2) printf("이수근");
        else if(tmp1==(int)tmp1 && tmp2==(int)tmp2) printf("정수근");
        else printf("둘다틀렸근");
    }
    else printf("둘다틀렸근");

    return 0;
}