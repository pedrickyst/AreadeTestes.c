#include <stdio.h>

int main() {
    int usuario;
    double Descarga = 1.11;
    double Etiquetagem = 1.46;
    double Conferencia = 0.55;
    double Guarda = 2.50;

    printf("Digite o Número de PALETES: ");
    scanf("%d", &usuario);
    
    if (usuario <= Descarga)
    {
        printf("%d = %d %f\n", usuario * Descarga) % 2;
    }
    
}