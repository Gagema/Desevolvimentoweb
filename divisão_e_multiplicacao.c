#include <stdio.h>
#include <locale.h>
char repeticao(int operacao);
float multiplicacao(float n1,float n2);
float divisao(float n1,float n2);
void main(){
    setlocale(LC_ALL,"Portuguese");
    float n1,n2,resp;
    int operacao=1;
    while(operacao!=0){
    printf("\n=====================\n");
    printf(" Calculadora simples!\n");
    printf("=======================\n");
    printf("Digite o primeiro numero:");
    scanf("%f",&n1);
    printf("Digite o segundo numero:");
    scanf("%f",&n2);
    printf("=======================\n");
    printf(" Escolha uma operação\n");
    printf("3.multiplicação\n");
    printf("4.divisão\n");
    printf("=======================\n");
    printf("Digite a operação desejada:");
    scanf("%i",&operacao);
    switch (operacao){
       
        case 3:
            multiplicacao(n1,n2);
            printf("=====================\n");
            printf("A resposta eh:%.2f\n",multiplicacao(n1,n2));
            printf("=====================\n");
            operacao=repeticao(operacao);
            break;
        case 4:
            divisao(n1,n2);
            if(n1==0 || n2==0)printf("Não existe divisao por 0");
            else{
            printf("=====================\n");
            printf("A resposta eh:%.2f\n",divisao(n1,n2));
            printf("=====================\n");
            }
            operacao=repeticao(operacao);
            break;
        
        default:
            printf("essa opção não confere,repita");
            operacao=repeticao(operacao);
        }
    }
}
char repeticao(int operacao){
    printf("\n\nquer continuar ?\n1- sim\n0-nao\nDigita sua opcao aqui -->");
    scanf("%d",&operacao);
    return operacao;
}




float multiplicacao(float n1,float n2){
    float resp;
    resp=n1*n2;
    return resp;
}
float divisao(float n1,float n2){
    float resp;
    resp=n1/n2;
    return resp;
}

