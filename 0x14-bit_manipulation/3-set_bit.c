#include "main.h"


/**
 * set_bit - bit to 1 at index
 *
 * @n: number
 * @index: index in binary number
 *
 * Return: 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num <<= index;/*shift the value in set left by 1 bit.*/

	*n = *n | num;/*bitwise OR operator*/
return (1);
}
