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
    
int passLeer, opcion, contador = 0, confirmación = 1;
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



}