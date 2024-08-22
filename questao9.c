/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} atleta;

int comparar_alturas(atleta a1, atleta a2) {
    if (a1.altura > a2.altura) return 1;
    if (a1.altura < a2.altura) return -1;
    return 0;
}

int comparar_idades(atleta a1, atleta a2) {
    if (a1.idade > a2.idade) return 1;
    if (a1.idade < a2.idade) return -1;
    return 0;
}

int main() {
    atleta atletas[5];
    atleta mais_alto, mais_velho;
    
    mais_alto.altura = 0.0;
    mais_velho.idade = 0;

    for (int i = 0; i < 5; i++) {
        printf("Insira o nome do atleta %d:\n", i + 1);
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        
        printf("Insira o esporte do atleta %d:\n", i + 1);
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        
        printf("Insira a idade do atleta %d:\n", i + 1);
        scanf("%d", &atletas[i].idade);
        
        printf("Insira a altura do atleta %d (em metros):\n", i + 1);
        scanf("%f", &atletas[i].altura);
        
        getchar(); 


        if (comparar_alturas(atletas[i], mais_alto) > 0) {
            mais_alto = atletas[i];
        }
        
        if (comparar_idades(atletas[i], mais_velho) > 0) {
            mais_velho = atletas[i];
        }
    }

    printf("O atleta mais alto é %s (Altura: %.2f metros)\n",
           mais_alto.nome, mais_alto.altura);
    printf("O atleta mais velho é %s (Idade: %d anos)\n",
           mais_velho.nome, mais_velho.idade);

    return 0;
}