//problema 2

#include<stdio.h>

int main(){
    float N, i, R;
    float resultado;
    
    printf("Ingresa un numero: ");
    scanf("%f", &N);
    resultado=1.0;
    R = N-2.0;
    
    if((int)N%2==0.0){
        for(i=0.0;i<=R;){
            //serie [(1/1)/(1/2)]*[(1/3)/(1/4)]*...[(*/)/(1/N)]*
         resultado = resultado*((1.0)/((i+1.0))/(1.0/(i+2.0)));
         i=i+2.0;
        
        }
    
        printf("El reusultado es: %f", resultado);
    }
    
    else{
        printf("Ingresa un numero par.");
    }
}
