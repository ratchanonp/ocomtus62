#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<num[i];j++){
            printf("*");
        }
        printf("\n");
    }
}
