#include<stdio.h>

main() 
{
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Natural numbers from %d to 1 are:\n", n);
    
    while (n >= 1)
	{
        printf("%d\n", n);
        n--;
    }
    

}
