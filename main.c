#include <stdio.h>
#include <string.h>

#define generalMAX 1000
#define vipMAX 500
#define backstageMAX 100

#define user1 "Daniel"
#define pass1 1234

#define user2 "Roberto"
#define pass2 1234

#define user3 "Nico" 
#define pass3 1234

int main(void){
    
int passLeer, opcion, contador = 0, confirmación = 1, entradas, general = 0, vip = 0, backstage = 0;
char userLeer[20];

do{
    
    printf("Ingrese su usuario:\n");
    scanf("%s", userLeer);
    printf("Ingrese su contraseña:\n");
    scanf("%d", &passLeer);

    if (strcmp(userLeer, user1) == 0 && passLeer == pass1 || strcmp(userLeer, user2) == 0 && passLeer == pass2 || strcmp(userLeer, user3) == 0 && passLeer == pass3){
        printf("¡Login Existoso!\n");
        contador = 3;
        confirmación = 0;


    } else {
        contador++;
        printf("Usuario o contraseña incorrectos, intento #%d\n", contador);
    }

} while (contador != 3);

if (confirmación){
    return(0);
}

do{
    printf("¿Que desea hacer?\n 1. Venta de entradas\n 2. Estadistica de Entradas\n 3. Salir\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Venta de entradas\n");
        printf("¿Que tipo de entrada desea comprar?\n 1. General\n 2. VIP\n 3. Backstage\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("General\n");
            do{
                printf("¿Cuantas entradas desea comprar? (Capacidad para 1000 personas)\n");
                scanf("%d", &entradas);
                if (entradas <= (generalMAX - general))
                {
                    general += entradas;
                    printf("Transacción Exitosa, se han comprado %d entradas\n", entradas);
                    confirmación = 0;
                } else{
                    printf("Actualmente no se dispone de esa cantidad de entradas, vuelva a ingresar otra cantidad\nEntradas disponibles %d\n", (generalMAX - general));
                    confirmación = 1;
                }
                if (general = generalMAX)
                {
                    confirmación = 0;
                }
                
            } while (confirmación);
                       
            break;

        case 2:
            printf("VIP\n");
            do{
                printf("¿Cuantas entradas desea comprar? (Capacidad para 500 personas)\n");
                scanf("%d", &entradas);
                if (entradas <= (vipMAX - vip))
                {
                    vip += entradas;
                    printf("Transacción Exitosa, se han comprado %d entradas\n", entradas);
                    confirmación = 0;
                } else{
                    printf("Actualmente no se dispone de esa cantidad de entradas, vuelva a ingresar otra cantidad\nEntradas disponibles %d\n", (vipMAX - vip));
                    confirmación = 1;
                }
                if (vip = vipMAX)
                {
                    confirmación = 0;
                }
            } while (confirmación);
                       
            break;

        case 3:
            printf("Backstage\n");
            do{
                printf("¿Cuantas entradas desea comprar? (Capacidad para 100 personas)\n");
                scanf("%d", &entradas);
                if (entradas <= (backstageMAX - backstage))
                {
                    general += entradas;
                    printf("Transacción Exitosa, se han comprado %d entradas\n", entradas);
                    confirmación = 0;
                } else{
                    printf("Actualmente no se dispone de esa cantidad de entradas, vuelva a ingresar otra cantidad\nEntradas disponibles %d\n", (backstageMAX - backstage));
                    confirmación = 1;
                }
                if (backstage = backstageMAX)
                {
                    confirmación = 0;
                }
            } while (confirmación);
                       
            break;
        
        default: printf("Opción no valida\n");
            break;
        }
        printf("\n");
        break;

    case 2:

        break;

    default:
        printf("Opción no existente\n");
        break;
    }


} while (opcion != 3);

}