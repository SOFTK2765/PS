#import<ios>
int main(){int n,i=0;while(++i){scanf("%d",&n);if(n==0)break;printf("%d. %s %d\n",i,n&1?"odd":"even",n/2);}}