#include "main.h"
<<<<<<< HEAD
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and is appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
		
#include <unistd.h>
		
/**
		
 * _putchar - writes the character c to stdout
		
 * @c: The character to print
		
 *
		
 * Return: On success 1.
		
 * On error, -1 is returned, and errno is set appropriately.
		
 */
		
int _putchar(char c)
		
{
		
	return (write(1, &c, 1));
		
>>>>>>> eb08d4b0ea1f294f6ba73b4b31a31b1cef881167
}
