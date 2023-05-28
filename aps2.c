#include <stdio.h>
#include <math.h> 
int main(){
    int cont=0;
    int idade_em_dias;
    float a, b, c, delta;
    float salario;
    int num;
    float valores[6]; 
    int i, contador = 0; 
    float soma = 0;
    while (cont!=6){    
        printf("\nDigite o numero de acordo com as opcoes:\n");
        printf("para ver o exercicio 1 digite o numero 1\n");
        printf("para ver o exercicio 2 digite o numero 2\n");
        printf("para ver o exercicio 3 digite o numero 3\n");
        printf("para ver o exercicio 4 digite o numero 4\n");
        printf("para ver o exercicoi 5 digite o numero 5\n");
        printf("para sair do programa digite o numero 6\n");
        scanf("%d", &cont);
        if(cont>0 && cont<7){
            switch(cont){
            //exercicio 1
            case 1:
                printf("informe sua idade em dias:\n"); 
                scanf("%d",&idade_em_dias); 
                int anos = idade_em_dias / 365; 
                idade_em_dias %= 365; 
                int meses = idade_em_dias / 30; 
                idade_em_dias %= 30; 
                int dias = idade_em_dias; 
                printf("Sua idade :\n"); 
                printf("%d ano(s)\n", anos); 
                printf("%d mes(es)\n", meses); 
                printf("%d dia(s)\n", dias); 
            break;
            //exercicio 2
            case 2:
                printf("Digite o valor de a: "); 
                scanf("%f", &a); 
                printf("Digite o valor de b: "); 
                scanf("%f", &b); 
                printf("Digite o valor de c: "); 
                scanf("%f", &c); 
                delta = b*b - 4 * a * c; 
                if (delta < 0) { 
                    printf("Não existem raízes reais.\n"); 
                } else if (delta == 0) { 
                    printf("Existe apenas uma raiz real de valor: %f.\n", -b / (2 * a)); 
                } else { 
                    printf("Existem duas raízes reais, sendo x1 = %f e x2 = %f\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a)); 
                } 
            break;
            //exercicio 3
            case 3:
            printf("Informe o valor do salario atual:"); 
            scanf("%f", &salario); 
            if (salario <= 400) { 
                printf("\nseu novo salario é%.2f:\n", salario * 1.15); 
                printf("reajuste ganho:%.2f\n", salario*0.15); 
                printf("O ganho foi de 15%%"); 
            } 
            else if (salario < 800) { 
                printf("seu salario é: %.2f\n", salario * 1.12); 
                printf("reajuste ganho: %.2f\n", salario*0.12); 
                printf("O ganho foi de 12%%"); 
            } 
            else if (salario < 1200) { 
                printf("seu salario é:%.2f\n", salario * 1.10); 
                printf("reajuste ganho:%.2f\n", salario*0.10); 
                printf("O ganho foi de 10%%"); 
            } 
            else if (salario < 2000) { 
                printf("seu salario é:%.2f\n", salario * 1.07); 
                printf("reajuste ganho:%.2f\n", salario*0.07); 
                printf("O ganho foi de 7%%"); 
            } 
            else{ 
                printf("seu salario é:%.2f\n", salario * 1.04); 
                printf("reajuste ganho:%.2f\n", salario*0.04); 
                printf("O ganho foi de 4%%"); 
            } 
            break;
            //exercicio 4
            case 4:
            printf("Insira o valor que deseja saber a tabuada:"); 
            scanf("%d", &num); 
            if (2<num && num<1000){ 
                printf("\nA seguir, a tabuada do valor desejado:\n"); 
                for (size_t i = 0; i <= 10; i++){ 
                    printf("%d X %d = %d \n", i, num, i*num); 
                } 
            } 
            else{ 
                printf("Por favor! digite um valor entre 2 e 1000"); 
            } 
            break;
            //exercicio 5
            case 5:
            printf("digite 6 valores:");
            for (i = 0; i < 6; i++) { 
                scanf("%f", &valores[i]); 
                if (valores[i] > 0) { 
                    contador++; 
                    soma += valores[i]; 
                } 
            } 
            printf("%d valores positivos\n", contador); 
            printf("%.1f a media é :,\n", soma / contador);
            break;          
            }
            printf("Espero que tenha gostado do programa. Volte sempre =)");
        }
        else{
            printf("digite um numero valido");
            getchar();
        }
        
    }
}