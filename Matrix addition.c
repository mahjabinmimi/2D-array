#include<stdio.h>
int main()
{
int i,j,num_of_rows,num_of_cols;
int a[20][20],b[20][20],c[20][20];

printf("Enter the number of rows & cols:" );
scanf("%d %d",&num_of_rows,&num_of_cols);

printf("Enter elements for a matrix:");


for(i=0;i<num_of_rows;i++)
    {
        for(j=0;j<num_of_cols;j++)
            {
                printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
    }
printf("\n");
     }
     printf("a=");

for(i=0;i<num_of_rows;i++)
{
    printf("\t");
    for(j=0;j<num_of_cols;j++)
       {
           printf(" ");

       printf("%d",a[i][j]);
       }
       printf("\n");

}
printf("Enter elements for b matrix=");
for(i=0;i<num_of_rows;i++)
{
    for(j=0;j<num_of_cols;j++)
    {
        printf("[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);
    }
    printf("\n");
}
printf("b=");
for(i=0;i<num_of_rows;i++)
{
    printf("\t");
    for(j=0;j<num_of_cols;j++)
    {
        printf(" ");
        printf("%d",b[i][j]);

    }
    printf("\n");
}

for(i=0;i<num_of_rows;i++)
{

    for(j=0;j<num_of_cols;j++)
       {
           printf(" ");
           c[i][j]=a[i][j]+b[i][j];
       }
       printf("\n");

}

printf("\n a+b=");
for(i=0;i<num_of_rows;i++)
{
    printf("\t");
    for(j=0;j<num_of_cols;j++)
       {
           printf(" ");

       printf("%d",c[i][j]);
       }
       printf("\n");


}

return 0;

}
