// Online C compiler to run C program online
#include <stdio.h>
int m; 
int t,f,r;
int main() {
    // Write C code here
    scanf("%d",&m);
    if (m % 100 != 0 ) {
        printf("-");
        return (0);
    }
    if (m >= 1000 ) { 
        t = m / 1000;
        m = m - t*1000;
    }
    if (m >= 500 ) { 
        f = m / 500;
        m = m - f*500;
    }
      if (m >= 100 ) { 
        r = m / 100;
        m = m - r*100;
    }
    printf("1000 x %d\n",t);
    printf("500 x %d\n",f);
    printf("100 x %d\n",r);
    return 0;
}

