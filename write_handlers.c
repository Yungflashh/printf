#include "main.h"

/**
 * handle_write_char - print string
 * @c: char types
 * @buffer: buffer array to handle print
 * @flags: calculate active flags
 * @width: get width
 * @precision: precision specifier
 * @size: size specifier
 *
 * Return: number of chars printed
 */

int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size)
{
	/* char is stored at left and padding at buffer's right*/

	int i = 20;
	char padd = ' ';

	ununsed(precision)
	UNUSED(SIZE);

	if (flags & F_zero)
		padd = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFF_SIZE - i -2] = padd;

		if (flags & f_minus)
			return (write(1, &buffer[0],1) +
					write(1, &buffer[BUFF_SIZE - i -1], width -1));
		else

			return (write(1, &buffer[BUFF_SIZE -i -1] width -1
						write(1, &buffer[0] 1));
					}
					return (write(1, &buffer[0], 1));
					}

/**
 * write_number - prints a string
 * @is_negative: lista of arguments
 * @ind: char types
 * @buffer: buffer of array to handle print
 * @flags: calculate active flags
 * @width: get width
 * @precision: precision specifier
 * @size: size specifier
 *
 * Return: number of chars printed
 */


int write_number(int is_negative, int ind, char buffer[],int flags, int width, int precision, int size)
{
	int lenght = BUFF_SIZE - ind - 1;
	char padd =' ', extra_ch = 0;

	UNUSED(size);

	if ((flags &F_Zero) && !(flags & F_minus))
		padd = '0';
	if (is_negative)
		extra_ch = '_';
	else if (flag & F_PLUS)
		extra_ch ='+';
	else if (flags & F_SPACE)
		extra_ch = ' ';

	return (write_num(ind, buffer, flags, width, precision, lenght, padd ,extra_ch))
}





