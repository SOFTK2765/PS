#import<cstdio>
main(){int a,b,c;c=-1;scanf("%d",&a);b=a;while(b>0){if(a%5==0){c=a/5;break;}b=a-3*++c;if(b%5==0){c+=b/5;break;}}printf("%d",c);}