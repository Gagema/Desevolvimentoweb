#include<stdio.h>
#include <stdlib.h>
float soma(){
    float num1=0;
    float num2=0;
    float res=0;
    printf("Digite o primeiro numero:\n");
    scanf("%f",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&num2);
    res=num1+num2;
    return res;

}
float subtracao(){
    float num1=0;
    float num2=0;
    float res=0;
    printf("Digite o primeiro numero:\n");
    scanf("%f",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&num2);
    res=num1-num2;
    return res;

}

float multiplicacao(){
    float num1=0;
    float num2=0;
    float res=0;
    printf("Digite o primeiro numero:\n");
    scanf("%f",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&num2);
    res=num1*num2;
    return res;

}
float divisao(){
    float num1=0;
    float num2=0;
    float res=0;
    printf("Digite o primeiro numero:\n");
    scanf("%f",&num1);
    printf("Digite o segundo numero:\n");
    scanf("%f",&num2);
    res=num1/num2;
    return res;

}
int main(){

int resp=0;
char resp2;
do{
    float s=0;
    float sub=0;
    float mult=0;
    float div=0;
    do{printf("BEM VINDO A CALCULADORA!\n");
    printf("Escolha a operacao desejada:\n");
    printf("1-soma\n");
    printf("2-subtracao\n");
    printf("3-multiplicacao\n");
    printf("4-divisao\n");
    printf("5-Sair\n");
    scanf("%d",&resp);
    if ( resp<1 || resp>5){
        printf("Tente novamente\n");
        system("pause");
        system("cls");
    };
    system("cls");
    }while(resp>5 || resp<1);

    switch(resp){
        case 1:
        s=soma();
        printf("resultado: %f\n",s);
        system("pause");
        system("cls");
        break;
        case 2:
        sub=subtracao();
        printf("resultado: %f\n",sub);
        system("pause");
        system("cls");
        break;
        case 3:
        mult =multiplicacao();
        printf("resultado: %f\n",mult);
        system("pause");
        system("cls");
        break;
        case 4:
        div=divisao();
        printf("resultado: %f\n",div);
        system("pause");
        system("cls");
        break;
        case 5:
        printf("Deseja realmente sair?\n");
        printf("S-Sim ou N-Nao\n");
        fflush(stdin);
        scanf("%c",&resp2);
        if (resp2=='N'){
            resp=0;
            system("cls");
            break;
        }
       else{
        break;}
    }
}while(resp!=5);
if (resp==5){
    printf("Ate mais!");
    return 0;
}
}