int compare(char *s, int a, int b);
int _strlen_recursion(char *s);
/**
 * is_palindrome - find if a string can be equals in reverse
 * @s: a pointer to the first value of the string
 * Return: 1 if the string is a palindrome, 0 in otherwise
 */
int is_palindrome(char *s)
{
	int a, b;

	a = 0;
	b = _strlen_recursion(s);
	return (compare(s, a, b - 1));
}
/**
 * compare - find if a string can be equals in reverse
 * @s: a pointer to the first value of the string
 * @a: is the first index
 * @b: is the last index
 * Return: 1 if the string is a palindrome, 0 if it is not
 */
int compare(char *s, int a, int b)
{
	if (a < b)
	{
		if (s[a] == s[b])
			return (compare(s, a + 1, b - 1));
		else
			return (0);
	}
		return (1);
}
/**
 * _strlen_recursion - Gets the lenght of a string
 * @s: The string in the 0 position
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
