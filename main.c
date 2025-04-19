#include "ft_printf.h"
#include <stdio.h>

void placeholder()
{
	printf("/!\\/!\\/!\\ Fechado para obras /!\\/!\\/!\\\n");
	return ;
}

void	test_chr()
{
	printf(		"--- Char Checks ---\n\n");

	printf(		"Char result :	\"%c\"\n", 32);
	placeholder("Char ft test :	\"%c\"\n", 32);
	printf(		"Char result :	\"%c\"\n", 'a');
	placeholder("Char ft test :	\"%c\"\n", 'a');
	printf(		"Char result :	\"%c\"\n", "hello");
	placeholder("Char ft test :	\"%c\"\n", "hello");
	printf(		"Char result :	\"%c\"\n", "");
	placeholder("Char ft test :	\"%c\"\n", "");
	printf(		"Char result :	\"%c\"\n", 250);
	placeholder("Char ft test :	\"%c\"\n", 250);
	printf(		"Char result :	\"%c\"\n", -16);
	placeholder("Char ft test :	\"%c\"\n", -16);

	printf("\n\n");
	return ;
}

void	test_str()
{
	printf(		"--- String Checks ---\n\n");

	printf(		"String result :	\"%s\"\n", "'a'");
	placeholder("String ft test :	\"%s\"\n", "'a'");
	printf(		"String result :	\"%s\"\n", "hello");
	placeholder("String ft test :	\"%s\"\n", "hello");
	printf(		"String result :	\"%s\"\n", "");
	placeholder("String ft test :	\"%s\"\n", "");
	printf(		"Integer result:	%i\n", NULL);
	placeholder("Integer ft test:	%i\n", NULL);
	// printf(		"String result :	\"%s\"\n", 32);
	// placeholder("String ft test :	\"%s\"\n", 32);
	// printf(		"String result :	\"%s\"\n", 250);
	// placeholder("String ft test :	\"%s\"\n", 250);
	// printf(		"String result :	\"%s\"\n", -16);
	// placeholder("String ft test :	\"%s\"\n", -16);

	printf("\n\n");
	return ;
}

void	test_int()
{
	printf(		"--- Int Checks ---\n\n");

	printf(		"Integer result:	%i\n", 16);
	placeholder("Integer ft test:	%i\n", 16);
	printf(		"Integer result:	%i\n", 42);
	placeholder("Integer ft test:	%i\n", 42);
	printf(		"Integer result:	%i\n", -16);
	placeholder("Integer ft test:	%i\n", -16);
	printf(		"Integer result:	%i\n", 'a');
	placeholder("Integer ft test:	%i\n", 'a');
	printf(		"Integer result:	%i\n", NULL);
	placeholder("Integer ft test:	%i\n", NULL);

	printf("\n\n");
	return ;
}

void	test_uint()
{
	printf(		"--- Unsigned Checks ---\n\n");

	printf(		"Unsigned result:	%u\n", 16);
	placeholder("Unsigned ft test:	%u\n", 16);
	printf(		"Unsigned result:	%u\n", 42);
	placeholder("Unsigned ft test:	%u\n", 42);
	printf(		"Unsigned result:	%u\n", -16);
	placeholder("Unsigned ft test:	%u\n", -16);
	printf(		"Unsigned result:	%u\n", 'a');
	placeholder("Unsigned ft test:	%u\n", 'a');
	printf(		"Unsigned result:	%u\n", NULL);
	placeholder("Unsigned ft test:	%u\n", NULL);

	printf("\n\n");
	return ;
}

void	test_hex_lower()
{
	printf(		"--- Hex Checks (L) ---\n\n");
	printf(		"Lower case Hex result:	%x\n", 16);
	placeholder("Lower case Hex ft test:%x\n", 16);
	printf(		"Lower case Hex result:	%x\n", 42);
	placeholder("Lower case Hex ft test:%x\n", 42);
	printf(		"Lower case Hex result:	%x\n", -16);
	placeholder("Lower case Hex ft test:%x\n", -16);
	printf(		"Lower case Hex result:	%x\n", 'a');
	placeholder("Lower case Hex ft test:%x\n", 'a');
	printf(		"Lower case Hex result:	%x\n", NULL);
	placeholder("Lower case Hex ft test:%x\n", NULL);
	printf("\n\n");
	return ;
}

void	test_hex_upper()
{
	printf(		"--- Hex Checks (H) ---\n\n");
	printf(		"Upper case Hex result:	%X\n", 16);
	placeholder("Upper case Hex ft test:%X\n", 16);
	printf(		"Upper case Hex result:	%X\n", 42);
	placeholder("Upper case Hex ft test:%X\n", 42);
	printf(		"Upper case Hex result:	%X\n", -16);
	placeholder("Upper case Hex ft test:%X\n", -16);
	printf(		"Upper case Hex result:	%X\n", 'a');
	placeholder("Upper case Hex ft test:%X\n", 'a');
	printf(		"Upper case Hex result:	%X\n", NULL);
	placeholder("Upper case Hex ft test:%X\n", NULL);
	printf("\n\n");
	return ;
}

int	main()
{
	printf("\n\n");
	test_chr();
	test_str();
	test_int();
	test_uint();
	test_hex_lower();
	test_hex_upper();

	return (0);
}
