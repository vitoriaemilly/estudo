#include <stdio.h>
#define tam 10

int main() {
    int num[tam]={19, 3, 15,7,11,9,13,5,17,1};

    for(int j=0;j<tam;j++){
        printf(" %d   ", j);
        for(int i=0;i<num[j];i++){
           printf("*");
        }
        printf("\n");
    }

    return 0; 
}  