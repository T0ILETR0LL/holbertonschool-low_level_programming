
int printnum (int n)
{
        int num = 0;
        int remainder = 0;

        if (n == 0)
        {
                _putchar('0');
                return(0);
        }
        if (n < 0)
        {
                _putchar('-');
                num = -n;
        }
        if (n > 0)
        {
                num = n;
        }
        if (num / 10)
        {
                remainder += printnum(num / 10);
        }
        return (remainder);
}
