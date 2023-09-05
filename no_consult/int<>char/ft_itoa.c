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


//#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>

char	*ft_itoa(int nbr)
{
    int tmp = 0;
    int leg = 0;
    char *resolt;

    tmp = nbr;

    while(tmp){
        tmp /= 10;
        leg++;
    }

    if(nbr < 0)
        leg++;

    resolt = (char *)malloc(sizeof(char) * (leg + 1));

    if(resolt == NULL)
        return NULL;

    resolt[leg] = '\0'; 
    leg --;
    
    if(nbr == -2147483648){
        resolt = "-2147483648\0";
        return (resolt);
    }
    
    if(nbr == 0){
        resolt = "0\0";
        return (resolt);
    }

    if(nbr < 0){
        resolt[0] = '-';
        nbr = -nbr;
    }

    while(nbr){
        resolt[leg--] = nbr % 10 + '0';
        nbr/= 10;
    }
    return(resolt);
}

//int main(int argc, char **argv){
//    //printf("%d\n",INT_MAX);
//
//    printf("%s\n",ft_itoa(atoi(argv[1])));
//}
