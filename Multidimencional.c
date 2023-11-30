#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
srand (time(NULL));
int n,m,o,p;
printf("Coloque el numero de matrices \n");
scanf("%d", &o);
printf("Coloque los datos de n\n");
scanf("%d", &n);
printf("Coloque los datos de m\n");
scanf("%d", &m);
int matrix[n][m];

for (int k = 0; k < o; k++)
{   
    p=k;
    printf("\n");
    printf("\n");
    printf("Matriz numero %d\n",k);


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
  
}

    


