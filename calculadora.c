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

int main(){
int resp=0;
do{
    do{printf("BEM VINDO A CALCULADORA!/n");
    printf("Escolha a operação desejada:\n");
    printf("1-soma\n");
    printf("2-subtração\n");
    printf("3-multiplicação\n");
    printf("4-divisão\n");
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
        break;
        case 4:
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
    printf("Até mais!");
    return 0;
}
}