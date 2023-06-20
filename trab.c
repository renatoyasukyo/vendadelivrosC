#include <stdio.h>
#include <stdlib.h>

int main (void){
    int menu, categoria;
    int categ[6] = {0, 10, 10, 10, 10, 10};
    int vender[6] = {0, 0, 0, 0, 0, 0};
    int preco[6]= {0, 150, 100, 160, 160, 200};
    int vendido[6] = {0,  0, 0, 0, 0, 0};
    FILE *f;

    for(;;){
        printf("\nMenu inicial\n");
        printf("1. Livros em Estoque\n");
        printf("2. Categorias\n");
        printf("3. Comprar\n");
        printf("4. Historico de Vendas\n");
        printf("5. Encerrar\n");
        printf("Escolha a opcao: ");

        scanf("%d", &menu);
        switch(menu){
            case 1:
                printf("                Disponivel   Vendido   Codigo   Valor\n");
                printf("Matematica          %2.d          %d        1      R$%d,00\n", categ[1], vendido[1], preco[1]);
                printf("Estatistica         %2.d          %d        2      R$%d,00\n", categ[2], vendido[2], preco[2]);
                printf("Fisica              %2.d          %d        3      R$%d,00\n", categ[3], vendido[3], preco[3]);
                printf("Quimica             %2.d          %d        4      R$%d,00\n", categ[4], vendido[4], preco[4]);
                printf("Computacao          %2.d          %d        5      R$%d,00\n", categ[5], vendido[5], preco[5]);
                break;

            case 2:
                printf("\nCategorias\n");
                printf("1 - Matematica\n");
                printf("2 - Estatistica\n");
                printf("3 - Fisica\n");
                printf("4 - Quimica\n");
                printf("5 - Computacao\n");
                printf("Categoria escolhida: ");
                scanf("%d", &categoria);
                switch (categoria){
                    case 1:
                        f = fopen("matematica.txt", "r");
                        char mat[1024];
                        while (fgets(mat, 1024, f) != NULL) {
                            printf("\nMatematica\n%s\n", mat);
                        }
                        fclose(f);
                        break;
                
                    case 2:
                        f = fopen("estatistica.txt", "r");
                        char estat[1024];
                        while (fgets(estat, 1024, f) != NULL) {
                            printf("\nEstatistica\n%s\n", estat);
                        }
                        fclose(f);
                        break;

                    case 3:
                        f = fopen("fisica.txt", "r");
                        char fis[1024];
                        while (fgets(fis, 1024, f) != NULL) {
                            printf("\nFisica\n%s\n", fis);
                        }
                        fclose(f);
                        break;

                    case 4:
                        f = fopen("quimica.txt", "r");
                        char quim[1024];
                        while (fgets(quim, 1024, f) != NULL) {
                            printf("\nQuimica\n%s\n", quim);
                        }
                        fclose(f);
                        break;

                    case 5:
                        f = fopen("computacao.txt", "r");
                        char comp[1024];
                        while (fgets(comp, 1024, f) != NULL) {
                            printf("\nComputacao\n%s\n", comp);
                        }
                        fclose(f);
                        break;

                    default:
                        printf ("Categoria invalida\n");
                        break;
                }
                break;
            
            case 3:
                printf("\nComprar livros\n");
                printf("Digite a categoria do livro desejado: ");
                scanf("%d", &categoria);
                switch(categoria){
                    case 1:
                        printf("Digite a quantidade de livros desejados: ");
                        scanf("%d", &vender[1]);
                        if(categ[1]>=vender[1]){
                            categ[1] -= vender[1];
                            vendido[1] += vender[1];
                            printf("Valor total: R$%d,00\n", vender[1]*preco[1]);
                        }else{
                            printf("Nao e possivel comprar essa quantidade\n");
                        }
                        break;
                    case 2:
                        printf("Digite a quantidade de livros desejados: ");
                        scanf("%d", &vender[2]);
                        if(categ[2]>=vender[2]){
                            categ[2] -= vender[2];
                            vendido[2] += vender[2];
                            printf("Valor total: R$%d,00\n", vender[2]*preco[2]);
                        }else{
                            printf("Nao e possivel comprar essa quantidade\n");
                        }
                        break;
                    case 3:
                        printf("Digite a quantidade de livros desejados: ");
                        scanf("%d", &vender[3]);
                        if(categ[2]>=vender[3]){
                            categ[2] -= vender[3];
                            vendido[2] += vender[3];
                            printf("Valor total: R$%d,00\n", vender[3]*preco[3]);
                        }else{
                            printf("Nao e possivel comprar essa quantidade\n");
                        }
                        break;
                    case 4:
                        printf("Digite a quantidade de livros desejados: ");
                        scanf("%d", &vender[4]);
                        if(categ[4]>=vender[4]){
                            categ[4] -= vender[4];
                            vendido[4] += vender[4];
                            printf("Valor total: R$%d,00\n", vender[4]*preco[4]);
                        }else{
                            printf("Nao e possivel comprar essa quantidade\n");
                        }
                        break;
                    case 5: 
                        printf("Digite a quantidade de livros desejados: ");
                        scanf("%d", &vender[5]);
                        if(categ[5]>=vender[5]){
                            categ[5] -= vender[5];
                            vendido[5] += vender[5];
                            printf("Valor total: R$%d,00\n", vender[5]*preco[5]);
                        }else{
                            printf("Nao e possivel comprar essa quantidade\n");
                        }
                        break;
                }
                break;
            case 4:
                printf("\nTotal de livros vendidos: %d\n", vendido[1]+vendido[2]+vendido[3]+vendido[4]+vendido[5]);
                printf("Montante obtido pela livraria: R$%d,00\n", (vendido[1]*preco[1])+(vendido[2]*preco[2])+(vendido[3]*preco[3])+(vendido[4]*preco[4])+(vendido[5]*preco[5]));
                break;
            
            case 5:
                printf("Encerrando o programa...\n");
                return 0;
         }
    }
}