/*Coluna B: números de 1 a 15;
– Coluna I: números de 16 a 30;
– Coluna N: números de 31 a 45;
– Coluna G: números de 46 a 60;
– Coluna O: números de 61 a 75;*/
//a formula (rand() % (max - min + 1)) + min
//sem numero repetido

#include <stdio.h> //printf,scanf
#include <stdlib.h> //biblioteca com funcoes, rand(), srand(), malloc(), free()
#include <time.h>//para usar time(NULL) q gera aleatorios dif a cada execução

int main() {
    int cartela[5][5] = {0};
    srand(time(NULL));// inicializa o gerador com o tempo atual

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j==0)cartela[i][j]=(rand()%10 )+1;
            if(j==1)cartela[i][j]=(rand() %( 30 - 16 + 1) )+ 16;
            if(j==2)cartela[i][j]=(rand() %( 45 - 31 + 1) )+ 31;
            if(j==3)cartela[i][j]=(rand()%(60 - 46 + 1)) + 46;
            if(j==4)cartela[i][j]=(rand()%(75 - 61 + 1)) + 61;
    }
}
printf(" B   I   N   G   O  \n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 && j == 2) {
                printf("  * "); // espaço "FREE"
            } else {
                printf("%3d ", cartela[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

