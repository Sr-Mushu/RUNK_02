//#include <stdio.h>
//#include <stdlib.h>

int ft_atoi(char *str){

    int sinal = 1;
    int tmp = 0;

    if(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '-')
        sinal = -1;
    if(*str == '-' || *str == '+')
        str++;
    while (*str >= '' && *str <= '9')
    {
        tmp = tmp * 10 + *str - '0';
        str++;
    }
    return(sinal * tmp);
}


//int main(int argc, char **argv){
//    printf("%d\n",ft_atoi(argv[1]));
//    printf("%d\n",atoi(argv[1]));
//}