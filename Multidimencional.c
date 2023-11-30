#include <stdio.h>
//Libreria que se uso

int main(){
int n,m,o,p;
//Variables que se van a usar
printf("Coloque el numero de matrices \n");
scanf("%d", &o);
//numero de matrices
printf("Coloque los datos de n\n");
scanf("%d", &n);
//tamaño de las matrices
printf("Coloque los datos de m\n");
scanf("%d", &m);
//tamaño de las matrices
int matrix[n][m];
o=o-1;
//se le resta uno al numero de matrices que pide el usuario
for (int k = 0; k < o; k++)
//imprime el numero de matrices -1 de las que pone el usuario
{   
    p=k;
    //se le da el valor de ka a otra variable
    printf("\n");
    printf("\n");
    printf("Matriz numero %d\n",k);
    //printf para poder imprimir el numero de matrices 


    for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=0;
        printf("%d \t", matrix[i][j]);
    }
    
}
}
//se imprime la matriz que falta llena de unos 
    p=p+1;
    printf("\n");
    printf("\n");
    printf("Matriz numero %d\n",p);

for (int i = 0; i < n; i++)
{
    printf("\n");

    for (int j = 0; j < m; j++)
    {
        matrix[i][j]=1;
        printf("%d \t", matrix[i][j]);
    }
    
}
}

    


