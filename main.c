/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phelebra <xhelp00@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:05:21 by phelebra          #+#    #+#             */
/*   Updated: 2023/01/11 16:03:04 by phelebra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_tolower.c"
#include "ft_toupper.c"
#include "ft_atoi.c"
#include "ft_memset.c"

int main()
{
	//ft_isalpha
	char c;

	c = '1';
	printf("\nCheck ft_isaplha on char 1: %d", ft_isalpha(c));
	c = 'A';
	printf("\nCheck ft_isaplha on char A: %d\n", ft_isalpha(c));

	//ft_isdigit
	c = '1';
	printf("\nCheck ft_isdigit on char 1: %d", ft_isdigit(c));
	c = 'A';
	printf("\nCheck ft_isdigit on char A: %d\n", ft_isdigit(c));

	//ft_isalnum
	c = '1';
	printf("\nCheck ft_isalnum on char 1: %d", ft_isalnum(c));
	c = 'A';
	printf("\nCheck ft_isalnum on char A: %d\n", ft_isalnum(c));

	//ft_isascii
	c = '	';
	printf("\nCheck ft_isascii on char TAB: %d", ft_isascii(c));
	c = 'A';
	printf("\nCheck ft_isascii on char A: %d\n", ft_isascii(c));
	// c = '四';
	// printf("\nCheck ft_isascii on char 四: %d", ft_isascii(c));
	// c = '二';
	// printf("\nCheck ft_isascii on char 二: %d\n", ft_isascii(c));

	//ft_isprint
	c = '	';
	printf("\nCheck ft_isprint on char TAB: %d", ft_isprint(c));
	c = 'A';
	printf("\nCheck ft_isprint on char A: %d\n", ft_isprint(c));
	// c = '四';
	// printf("\nCheck ft_isprint on char 四: %d", ft_isprint(c));
	// c = '二';
	// printf("\nCheck ft_isprint on char 二: %d\n", ft_isprint(c));

	//ft_strlen
	char str[50];
	int len;
	strcpy(str, "42 Prague");
	len = ft_strlen(str);
	printf("\nCheck ft_strlen. Length of \"%s\" is %d\n", str, len);

	//ft_tolower
	c = 'a';
	printf("\nCheck ft_tolower on char a: %c", ft_tolower(c));
	c = 'A';
	printf("\nCheck ft_tolower on char A: %c", ft_tolower(c));
	c = '1';
	printf("\nCheck ft_tolower on char 1: %c\n", ft_tolower(c));

	//ft_toupper
	c = 'a';
	printf("\nCheck ft_toupper on char a: %c", ft_toupper(c));
	c = 'A';
	printf("\nCheck ft_toupper on char A: %c", ft_toupper(c));
	c = '1';
	printf("\nCheck ft_toupper on char 1: %c\n", ft_toupper(c));

	//ft_atoi
	printf("\nCheck ft_atoi:");
	int val;
    char strn1[] = "  -12546";
  
    val = atoi(strn1);
    printf("\nString value = %s\n", strn1);
    printf("Integer value by atoi = %d\n", val);

	val = ft_atoi(strn1);
	printf("String value = %s\n", strn1);
    printf("Integer value by ft_atoi = %d\n", val);

	//ft_memset
	strcpy(str, "shooting stars!");
	printf("\nCheck ft_memset:");
	printf("\nOriginal string: %s", str);
	ft_memset(str,'*',9);
	printf("\nString after memset: %s", str);
}

