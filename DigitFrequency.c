#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    char a[1000];
    int i;
    scanf("%[^\n]%*c", a);
    int arr[10] = {0};
    for( i = 0; i < strlen(a); i++){
        if(a[i] >= '0' && a[i] <= '9')
            arr[a[i] - 48]++;
    }
    for( i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");  
    return 0;
}

