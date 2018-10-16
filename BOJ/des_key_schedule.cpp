#include <bits/stdc++.h>

using namespace std;

typedef unsigned char byte;
typedef unsigned int word;

int main()
{
    byte k[8] = {0x1f, 0x2e, 0x3d, 0x4c, 0x5b, 0x6a, 0x79, 0x88};
    const int s[16] = {3, 8, 15, 1, 10, 6, 5, 11, 14, 13, 4, 2, 7, 0, 9, 12};
    const int p[33] = {0, 9, 17, 23, 31, 13, 28, 2, 18, 24, 16, 30, 6, 26, 20, 10, 1, 8, 14, 25, 3, 4, 29, 11, 19, 32, 12, 22, 7, 5, 27, 15, 21};
    word RK[16] = {};
    bool percheck[33];
    bool tmp[33];

    memset(percheck, 0, sizeof(percheck));
    memset(tmp, 0, sizeof(tmp));

    for(int i=4;i<8;i++)
        k[i] = (s[k[i]%16])+(s[k[i]>>4]<<4);
    int pos = 0;
    for(int i=4;i<8;i++)
        for(int j=7;j>=0;j--)
            tmp[pos++] = (k[i]&(1<<j))?1:0;
    for(int i=1;i<=32;i++)
        percheck[p[i]] = tmp[i-1];
    pos = 1;
    for(int i=4;i<8;i++)
        for(int j=0;j<8;j++)
        {
            k[i] *= 2;
            k[i] += percheck[pos++];
        }
    for(int i=0;i<4;i++)
        for(int j=7;j>=0;j--)
        {
            RK[0] *= 2;
            RK[0] += ((k[i]&(1<<j))^(k[i+4]&(1<<j)))?1:0;
        }
    printf("RK0 : %x", RK[0]); //RK0 0x

    return 0;
}