#include <stdio.h>

int main(){
int n,m,o,p;
printf("Coloque el numero de matrices \n");
scanf("%d", &o);
printf("Coloque los datos de n\n");
scanf("%d", &n);
printf("Coloque los datos de m\n");
scanf("%d", &m);
int matrix[n][m];
o=o-1;
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

    


