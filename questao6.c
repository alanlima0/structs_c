/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
geral dentre os cinco.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nome[50];
    float n1,n2,n3;
}aluno;

float calcular_media(aluno a){
    return (a.n1 + a.n2 + a.n3)/3;
}

int main(){

    aluno alunos[5];
    float maior_media = 0.0;
    int indice_maior_media = 0;

    for (int i=0;i<5;i++){
        printf("Insira a matricula:\n ");
        scanf("%d",&alunos[i].matricula);
        getchar();
        printf("Insira o nome do aluno: \n");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        printf("Insira a nota 1:\n ");
        scanf("%f",&alunos[i].n1);
        printf("Insira a nota 2:\n ");
        scanf("%f",&alunos[i].n2);
        printf("Insira a nota 3:\n ");
        scanf("%f",&alunos[i].n3);

        float media = calcular_media(alunos[i]);

        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
    }
    
    printf("O aluno com a maior média geral é o(a) %s (Matrícula: %d)\n", alunos[indice_maior_media].nome, alunos[indice_maior_media].matricula);
    printf("Notas: %.2f, %.2f, %.2f\n", alunos[indice_maior_media].n1, alunos[indice_maior_media].n2, alunos[indice_maior_media].n3);
    printf("Média: %.2f\n", maior_media);

    return 0;
}
