#include "main.h"

/**
 * _isupper - Checls for lowercase character
 * @c:The character to be checked
 * Returned: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
