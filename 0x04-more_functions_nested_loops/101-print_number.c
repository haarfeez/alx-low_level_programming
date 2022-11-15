nclude "main.h"

/**
 * print_number - prints a number using recursion
 *
 * @n: params an integer
 *
 * No return
 */


#includnt n)
{
		unsigned int n1;
		
			if (n < 0)
					{
								n1 = -n;
										_putchar('-');
											} else
													{
																n1 = n;
																	}
											
												if (n1 / 10)
														{
																	print_number(n1 / 10);
																		}
												
													_putchar((n1 % 10) + '0');
}
