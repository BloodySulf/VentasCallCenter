#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

float valorPedido (int, int);
void mostrar_pedidos (int, float);

int main(){
	char datoscliente[9];
	char continuar[3]={"si"};
	int codigoproducto, cantidadbolsa, dia, opcion;
	int pedido = 0;
	float precioTotal, preciopedido;
	int pedidosSabados= 0;
	float stockhielo = 2000;
	
	system("Color 0c");
	system("Title Programa para Call Center");
	
	while(!strcmp(continuar, "si")){
		
		pedido++;
		
		printf("Ingresar codigo de cliente de 8 digitos: \n");
		fflush(stdin);
		scanf("%8s", &datoscliente);
		printf("Codigo de producto: \n");
		printf("\n1. Bolsa de 2kg\n");
		printf("\n2. Bolsa de 10kg\n");
		printf("\n3. Service\n");
		fflush(stdin);
		scanf("%d", &opcion);
		
		if (opcion == 1 || opcion == 2) {
            printf("Cantidad solicitada por bolsas: \n");
            fflush(stdin);
            scanf("%d", &cantidadbolsa);
            if (cantidadbolsa > stockhielo) {
                printf("No se registro pedido, No hay stock\n");
                pedido--;
            } else {
                stockhielo -= cantidadbolsa;
                printf("Ingrese dia de entrega/visita (numero): \n");
                fflush(stdin);
                scanf("%d", &dia);
            }
        } else if (opcion == 3) {
            cantidadbolsa = 1;
            printf("Ingrese dia de entrega/visita (numero): \n");
            fflush(stdin);
            scanf("%d", &dia);
        }
		preciopedido=valorPedido(opcion, cantidadbolsa);
        printf("Pedido registrado: \n");
        precioTotal += preciopedido;
        mostrar_pedidos(pedido, preciopedido);

        if (opcion == 3 && dia == 6) {
            pedidosSabados++;
        }

        system("pause");
        system("cls");
        printf("Desea seguir haciendo ventas? \n");
        fflush(stdin);
       fgets(continuar, sizeof(continuar), stdin);
        system("cls");
    }

    printf("El valor total de todos los pedidos es: %f \n", precioTotal);
    printf("La cantidad de pedidos de service para dia sabados es: %d\n", pedidosSabados);
    printf("Stock: %f", stockhielo);

    return 0;
}

float valorPedido(int tipo, int cantidad) {
    float precioBasehielo = 50;
    float precioService = 500;
    float precioTotalcant;

    if (tipo == 1) {
    precioTotalcant = cantidad * (precioBasehielo*2);
} else if (tipo == 2) {
    precioTotalcant = cantidad * (precioBasehielo*10);
} else if (tipo == 3) {
    precioTotalcant = precioService;
}

if (cantidad > 100) {
    precioTotalcant *= 0.75;
} else {
    precioTotalcant *= 0.90;
}

return precioTotalcant;
}

void mostrar_pedidos(int numpedido, float preciototal) {
    printf("Numero de pedido: %d\n", numpedido);
    printf("Valor del pedido: %f\n", preciototal);
}
