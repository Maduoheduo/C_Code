int is_palindrome(int n)
{
    int reversed = 0;
    int original = n;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}
// 偶数位回文数都能被11整除
