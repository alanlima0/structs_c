/*Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.*/

#include <stdio.h>
#include <limits.h>
#include <string.h>

typedef struct {
    char nome[50];
    int dia;
    int mes;
    int ano;
} pessoa;

int comparar_datas(pessoa p1, pessoa p2) {
    if (p1.ano > p2.ano) return 1;
    if (p1.ano < p2.ano) return -1;
    if (p1.mes > p2.mes) return 1;
    if (p1.mes < p2.mes) return -1;
    if (p1.dia > p2.dia) return 1;
    if (p1.dia < p2.dia) return -1;
    return 0;
}

int main() {
    pessoa pessoas[6];
    pessoa mais_novo, mais_velho;
    
    mais_velho.ano = INT_MAX;
    mais_novo.ano = INT_MIN;

    for (int i = 0; i < 6; i++) {
        printf("Insira o nome da pessoa %d:\n", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);

        printf("Insira o dia de nascimento da pessoa %d:\n", i + 1);
        scanf("%d", &pessoas[i].dia);

        printf("Insira o mês de nascimento da pessoa %d:\n", i + 1);
        scanf("%d", &pessoas[i].mes);

        printf("Insira o ano de nascimento da pessoa %d:\n", i + 1);
        scanf("%d", &pessoas[i].ano);

        getchar();

        if (comparar_datas(pessoas[i], mais_novo) > 0) {
            mais_novo = pessoas[i];
        }
        
        if (comparar_datas(pessoas[i], mais_velho) < 0) {
            mais_velho = pessoas[i];
        }
    }


    printf("A pessoa mais nova é %s (Data de nascimento: %02d/%02d/%04d)\n",
           mais_novo.nome, mais_novo.dia, mais_novo.mes, mais_novo.ano);
    printf("A pessoa mais velha é %s (Data de nascimento: %02d/%02d/%04d)\n",
           mais_velho.nome, mais_velho.dia, mais_velho.mes, mais_velho.ano);

    return 0;
}
