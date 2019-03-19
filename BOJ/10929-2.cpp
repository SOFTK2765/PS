#include <bits/stdc++.h>

using namespace std;

string sha224(string msg)
{
    unsigned char paddingblock[8];
    unsigned char tmpblock[64];
    unsigned long long tmpblockleninfo;
    unsigned int a[8], hv[8] = {0xc1059ed8, 0x367cd507, 0x3070dd17, 0xf70e5939, 0xffc00b31, 0x68581511, 0x64f98fa7, 0xbefa4fa4};
    unsigned int w[64], k[64] = {0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da, 0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070, 0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
    int len = msg.length(), blockcnt = (len+8)/64+1;
    msg += (char)-128;
    for(int i=0;i<blockcnt*64-len-9;i++)
        msg += (char)0;
    tmpblockleninfo = len*8;
    for(int i=0;i<8;i++, tmpblockleninfo/=256)
        paddingblock[7-i] = (unsigned char)tmpblockleninfo%256;
    for(int i=0;i<8;i++)
        msg += (char)paddingblock[i];
    for(int i=0;i<blockcnt;i++)
    {
        for(int j=0;j<64;j++)
            tmpblock[j] = (unsigned char)msg[i*64+j];
        for(int j=0;j<16;j++)
            for(int k=0;k<4;k++)
                (w[j] <<= 8) += tmpblock[j*4+k];
        for(int j=16;j<64;j++)
            w[j] = w[j-16]+(((w[j-15]>>7)|(w[j-15]<<25))^((w[j-15]>>18)|(w[j-15]<<14))^(w[j-15]>>3))+w[j-7]+(((w[j-2]>>17)|(w[j-2]<<15))^((w[j-2]>>19)|(w[j-2]<<13))^(w[j-2]>>10));
        for(int j=0;j<8;j++)
            a[j] = hv[j];
        for(int j=0;j<64;j++)
        {
            unsigned int temp1 = a[7]+(((a[4]>>6)|(a[4]<<26))^((a[4]>>11)|(a[4]<<21))^((a[4]>>25)|(a[4]<<7)))+((a[4]&a[5])^((~a[4])&a[6]))+k[j]+w[j], temp2 = (((a[0]>>2)|(a[0]<<30))^((a[0]>>13)|(a[0]<<19))^((a[0]>>22)|(a[0]<<10)))+((a[0]&a[1])^(a[0]&a[2])^(a[1]&a[2]));
            for(int k=0;k<8;k++)
                a[7-k] = (k==7?temp1+temp2:a[7-k-1]+(k==3?temp1:0));
        }
        for(int j=0;j<8;j++)
            hv[j] += a[j];
    }
    string res;
    for(int i=0;i<7;i++)
        for(int j=0;j<8;j++, hv[i]<<=4)
            res.push_back(hv[i]/268435456>9?hv[i]/268435456-10+'a':hv[i]/268435456+'0');
    return res;
}

int main()
{
    string msg;
    cin >> msg;
    cout << sha224(msg);

    return 0;
}