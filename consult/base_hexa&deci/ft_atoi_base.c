//Assignment name  : ft_atoi_base
//Expected files   : ft_atoi_base.c
//Allowed functions: None
//--------------------------------------------------------------------------------
//
//Write a function that converts the string argument str (base N <= 16)
//to an integer (base 10) and returns it.
//
//The characters recognized in the input are: 0123456789abcdef
//Those are, of course, to be trimmed according to the requested base. For
//example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
//
//Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
//
//Minus signs ('-') are interpreted only if they are the first character of the
//string.
//
//Your function must be declared as follows:
//
//int	ft_atoi_base(const char *str, int str_base);
//


// Convert uppercase character to lowercase (if it's an uppercase character)
char to_lower(char c){
   
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    
    return (c);
}

int get_digit(char c, int digits_in_base){

    int max_digit;

    // Determine the maximum allowed digit based on the specified base
    if (digits_in_base <= 10)
        max_digit = digits_in_base + '0';
    else
        max_digit = digits_in_base - 10 + 'a';

    // Check if the character is a valid digit within the specified base
    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1)
}

int	ft_atoi_base(const char *str, int str_base){

    int result = 0; // Initialize the result
    int sign = 1;   // Initialize the sign to positive
    int digit;

    // Check if the input string starts with a '-' sign
    if (*str == '-'){
        sign = -1;
        ++str;
    }

    // Process each character in the input string
    while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
    {
        result = result * str_base;
        result = result + (digit * sign);
        ++str;
    }
}
