#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr){

    // Special case for the minimum integer value (-2147483648)
    if(nbr == -2147483648)
        return("-2147483648\0");

    int tmp = nbr;
    int len = 0;

    // If it's negative or zero, add one to the length to account for the negative sign or '0'
    if(nbr <= 0)
        len++;

    // Calculate the length of the number
    while(tmp){
        tmp /= 10;
        len++;
    }

    // Allocate memory for the resulting string
    char *result = (char *)malloc(sizeof(char) * (len + 1));

    // Check if memory allocation was successful
    if(result == NULL)
        return(NULL);

    result[len] = '\0'; // last is len

    // Check if the input number is zero
    if(nbr == 0){
        result[0] = '0';
        return(result);
    }

    // Check if the input number is negative
    if(nbr < 0){
        result[0] = '-';
        nbr = -nbr;
    }

    // Convert the number to its ASCII character representation
    while(nbr){
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }

    // Return the resulting string

    return result;
}

int main(int argc, char **argv){
    printf("%s\n",ft_itoa(atoi(argv[1])));
    //printf("%s\n",itoa(atoi(argv[1])));
}



