#include<stdio.h>
#include<stdlib.h>
int n1;
int n2;
int n3;
int main()
{
	printf("INSERTE UN NUMERO\n");
	scanf("%d" ,&n1);
{
	printf("INSERTE OTRO NUMERO\n");
	scanf("%d" ,&n2);
{
	printf("INSERTE EL ULTIMO NUMERO\n");
	scanf("%d" ,&n3);
}
	if(n1<n2 & n2 < n3)
{
{    
    printf("%d  %d  %d", n3,n2,n1);
}      
}
    if(n1>n2 & n2>n3)         
{
    printf("%d  %d  %d", n1,n2,n3);
}
    if(n1 > n2 && n2 < n3 && n1 > n3 )
{
    printf("%d  %d  %d", n1,n3,n2);
}
    if(n1 > n2 && n2 < n3)
{
    printf("%d  %d  %d", n2,n1,n3);
}
    if(n1 < n2 && n2 > n3)
{
    printf("%d  %d  %d", n2,n3,n1);
}
}   system ("PAUSE");
}
