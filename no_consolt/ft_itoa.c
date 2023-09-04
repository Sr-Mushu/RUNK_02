//Assignment name  : ft_itoa
//Expected files   : ft_itoa.c
//Allowed functions: malloc
//--------------------------------------------------------------------------------
//
//Write a function that takes an int and converts it to a null-terminated string.
//The function returns the result in a char array that you must allocate.
//
//Your function must be declared as follows:
//
//char	*ft_itoa(int nbr);
//2147483647


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int nbr);
{
    int tmp = 0;
    int leg = 0;
    char *resolt;
    
    tmp = nbr;

    while(tmp){
        tmp /= 10;
        leg++;
    }

    resolt = (char *)malloc(sizeof(char) * (leg +1);)

    
    if(nbr == -2147483648)
        return("-2147483648\0");

    while(*str){
        
    }

    

}

int main(int argc, char **argv){
    printf("%d\n",INT_MAX);

    //printf("%s\n",ft_itoa(atoi(argv[1])));
}
