#include <stdio.h>
#include <math.h>
void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = (3.0 * pow(l, 2) * sqrt(3.0)) / 2.0;
    *perimetro = 6.0 * l;
}

int main() {
    float lado, a, p;
    printf("Digite o valor do lado do hexágono: ");
    scanf("%f", &lado);

    calcula_hexagono(lado, &a, &p);

    printf("Valor de cada lado: %.2f\n", lado);
    printf("Área: %.2f\n", a);
    printf("Perímetro: %.2f\n", p);

    return 0;
}

//Utilizando a biblioteca math.h,para realizar os cálculos 