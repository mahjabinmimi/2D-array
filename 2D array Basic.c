#include<stdio.h>
int main()
{
int i,j;
int a[2][2];


for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            {
                printf("a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
    }
printf("\n");
     }
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
       {

       printf("%d",a[i][j]);
       }
       printf("\n");

}
return 0;








}
