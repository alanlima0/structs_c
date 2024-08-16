/*Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
    {
        float x;
        float y;
    }ponto;
    typedef struct
    {
        ponto p_sup_esq;
        ponto p_inf_dir;
    }retangulo;

int main(){
    
    retangulo ret;
    float largura, altura, area, perimetro;
    double diag;

    // Ler coordenadas 
    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &ret.p_sup_esq.x, &ret.p_sup_esq.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &ret.p_inf_dir.x, &ret.p_inf_dir.y);  
    
    //calcular area
    largura = fabs(ret.p_inf_dir.x - ret.p_sup_esq.x);
    altura = fabs(ret.p_sup_esq.y - ret.p_inf_dir.y);
    area = largura * altura;
    
    //calcular comprimento diagonal
    diag = sqrt(pow(largura,2)+pow(altura,2));

    //calcular perimetro
    perimetro = 2 * (largura + altura);

    
    printf("\nÁrea do retângulo: %.2f\n", area);
    printf("Comprimento da diagonal: %.2lf\n", diag);
    printf("Perímetro do retângulo: %.2f\n", perimetro);

    return 0;
}
    