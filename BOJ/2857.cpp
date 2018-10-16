#import<bits/stdc++.h>
char a[11];bool f;int main(){for(int i=1;~scanf("%s",a);i++)if(strstr(a,"FBI")) printf("%d ",i*(f=true));if(!f)printf("HE GOT AWAY!");}