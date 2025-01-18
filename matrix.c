// Online C compiler to run C program online
#include <stdio.h>
int m; 
int r,c;
int i,i2;
int tmp;
int main() {
    scanf("%d %d",&r,&c);
    int max = r*c;
    int arr[max];
    i = 0;
    while (i < max) {
        scanf("%d",&arr[i]);
        i++;
    }
    i = 0;
    while (i < max) {
        i2 = 0;
        
        while (i2 < max - 1) { 
            if (arr[i2] < arr[i2+1]) {
                tmp = arr[i2];
                arr[i2] = arr[i2+1];
                arr[i2+1] = tmp;
            }
            i2++;
        }
        i++;
    }
    printf("%d",arr[1]);
    return 0;
}

