
/**
 * _isalpha(int c) tells if a character is an alphabet
 *
 * Return: Always 0.
 * @c - is the parameter
 */
int  _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
