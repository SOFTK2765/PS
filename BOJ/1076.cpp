#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a[3];
    string data[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    for(int i=0;i<3;i++)
        cin >> a[i];
    int sum = 0;
    for(int i=0;i<10;i++)
        if(data[i]==a[0]) sum += i;
    sum *= 10;
    for(int i=0;i<10;i++)
        if(data[i]==a[1]) sum += i;
    printf("%d", sum);
    if(sum==0) return 0;
    for(int i=0;i<10;i++)
        if(data[i]==a[2])
        {
            while(i--) printf("%d", 0);
            break;
        }
    
    return 0;
}