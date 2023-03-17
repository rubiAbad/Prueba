//problema1

#include<stdio.h>

int main(){
    /*N = numeros de veces que se va a ejecutar
     y = numero a calcular
     ecuacion = operacion
     i=contador
    */
    int N, y, ecuacion, i=1;
    
    printf("¿Cuantos numeros quieres usar? ");
    scanf("%i", &N);
    
    while(i<=N){
        
        printf("Ingresa un numero: ");
        scanf("%i", &y);
        //[1] y^2 + 15
        if(y>0 && y <=15){
            ecuacion = (y*y) + 15;
            printf("El resultado es: %i\n", ecuacion);
            
        }
        
        //[2] y^3 - y^2 + 12
        if(y>15 && y<=30){
            ecuacion=(y*y*y) - (y*y) +12;
            printf("El resultado es: %i\n", ecuacion);
            
        }
        
        //[3] 4 * y^3/y^2 + 8
        if(y>30 && y<=60){
            
            double ecuacion = (4*((double)y*y*y))/((y*y)+8);
            printf("El resultado es: %f\n", ecuacion);
            }
            
        //[4] 0
        if(y>60 || y<=0){
            printf("0");
            
        }
        
        i = i + 1;
        
    }
    
    
    
    return 0;
}
