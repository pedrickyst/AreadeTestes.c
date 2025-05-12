#include <stdio.h>

int main() {

    int entradaUsuario;
    int soma;
    float media;

    char nome1[20] = "Paletes";
    char nome2[20] = "Etiquetagem";
    char nome3[20] = "Conferência";
    char nome4[20] = "Guarda";
 
    double paletes = 71;
    double Etiquetagem = 106;
    double Conferencia = 55;
    double Guarda = 170;

    printf("Digite o Números de Paletes recebidos: ");
    scanf("%d", &entradaUsuario);

    printf("\n");

    media = (entradaUsuario * paletes) / 60;
    printf("Descarregamento: %.2f\n", media);
    media = (entradaUsuario * Etiquetagem) / 120;
    printf("Etiquetagem: %.2f\n", media);
    media = (entradaUsuario * Conferencia) / 60;
    printf("Conferência: %.2f\n", media);
    media = (entradaUsuario * Guarda) / 120;
    printf("Guarda: %.2f\n", media);
   


    return 0;
}