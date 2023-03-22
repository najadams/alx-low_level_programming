
/**
 * _isalpha - function to check alphabet
 * @c - is the parameter
 *
 * Return: 1 if the entered character is an alphabet and zero else 0.
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
