#include <stdio.h>

main()
 {
    
    int count = 0,num;


    printf("Enter an integer number: ");
    scanf("%d", &num);

    
    if (num < 0) 
	{
        num = -num;
    }
    for (; num != 0; num /= 10) 
	{
        count++;
    }


    printf("Number of digits: %d\n", count);


}
