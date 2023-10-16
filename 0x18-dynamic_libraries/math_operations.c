int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);

/**
* add - function that adds two integers
* @i: first integer
* @k: second integer
* Return: the sum
*/

int add(int i, int k)
{
	return (i + k);
}

/**
* sub - function that subtracts two integers
* @i: first integer
* @k: second integer
* Return: the subtract
*/

int sub(int i, int k)
{
	return (i - k);
}

/**
* mul - function that multiplies two integers
* @i: first integer
* @k: second integer
* Return: the multiple
*/

int mul(int i, int k)
{
	return (i * k);
}

/**
* div - function that divideds two integers
* @i: first integer
* @k: second integer
* Return: the dividend
*/

int div(int i, int k)
{
	return (i / k);
}

/**
  mod - function that finds the modulus
  of two integers
  @i: first integer to add
  @k: second integer to add
  Return: the modulus
*/

int mod(int i, int k)
{
	return (i % k);
}
