/******************************************************************************

Divisor em C para Introducão a Sistemas compuacionais

*******************************************************************************/
#include <stdio.h>
int func_divisor(int a, int b){// a=numerador, b=denominador
    int result = 0;//Resultado da div inteira
    while(a > 0){
        a -= b;
        if(a < 0){
            break;
        }
        result++;
    }
    return result;
}
int main(){
    int a,b;
    printf("Digite a divisao (num/denomi): ");
    scanf("%d/%d",&a,&b);
    printf("Resultado: %d",func_divisor(a,b));
    return 0;
}
