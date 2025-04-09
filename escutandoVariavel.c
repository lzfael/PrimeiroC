#include <stdio.h>

int main(){

    int userAge;
    printf("Digite sua idade: ");
    scanf("%d", &userAge);
    printf("Sua idade é: %d \n", userAge);
    
    float height;
    printf("Digite a sua altura: ");
    scanf("%f", &height);
    printf("Sua altura é: %f \n", height);
    
    char name[50];
    printf("Digite seu nome: ");
    scanf(" %c", &name);
    printf("Seu nome é: %c", name);


    return 0;
}