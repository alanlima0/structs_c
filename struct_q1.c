/*implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    typedef struct
    {
        char nome[50];
        int idade;
        char end[50];
    }cadastro;
    
    cadastro c;

    printf("Insira seu nome: ");
    fgets(c.nome, sizeof(c.nome), stdin);

    printf("Insira seu endereco: ");
    fgets(c.end, sizeof(c.end), stdin);

    printf("Insira sua idade: ");
    scanf("%d",&c.idade);
   
    printf("Nome: %s",c.nome);
    printf("Idade: %d anos\n",c.idade);
    printf("Endereco: %s \n",c.end);


    return 0;
}