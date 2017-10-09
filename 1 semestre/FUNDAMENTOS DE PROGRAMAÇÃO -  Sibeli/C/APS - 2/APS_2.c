#include<stdio.h>
#include<stdlib.h>

int main(){
	float tab[4][3];
	int meses [4] = {{"Janeiro"},
                    {"Fevereiro"},
                    {"Marco"},
                    {"Abril"}};

	int x, y, z, a, b;

	z=0;

	printf("    Tabela de Gastos!!\n\n");
    printf("-> OBS: Utilize ponto '.' nos numeros quebrados...\n\n");
    printf("     Pressione ENTER\n");

    getchar();


	for(x=0;x<4;x++){
		for(y=0;y<1;y++){
			printf("=> Entre com o salario inicial do mes %s ->", meses [z]); //ENTRADA
			scanf("%f", &tab[x][y]);

            y++;

			printf("-> Entre com o valor das despesas desse mes ->");
			scanf("%f", &tab[x][y]);

            printf("\n");

			z++;
		}
	}

    a=1;
    b=2;

	for(x=0;x<4;x++){
		for(y=0;y<1;y++){

			tab[x][b] = tab[x][y] - tab[x][a];
		}
	}

    z=1;
    printf("  Mes      Entradas    Despesas     Saldo\n");

    for(x=0;x<4;x++){
        printf("%s ", meses [x]);

        for(y=0;y<=2;y++){
            if(z==1){
                printf("   %.2f   ", tab [x][y]);
            }else if(z==2){
                printf(" %.2f     ", tab [x][y]);
            }else if(z==3){
                printf("     %.2f ", tab [x][y]);
            }else if(z==4){
                printf("     %.2f ", tab [x][y]);
            }else{
                printf("ERROR..........");
                break;
            }
        }
        printf("\n");
    z++;
    }

    printf("\n\n        Produzido por : Jon@s Kuhn & V@nice Benin...\n\n\n");
}
