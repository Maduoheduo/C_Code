double f(double x)
{
    return x * x; // 函数表达式,此处f(x)=x*x
}

double solve(double low, double high, double eps, double fx) // eps为误差范围  fx为所求函数值  //适用于单增函数
{
    double mid;
    while (high - low > eps)
    {
        mid = (high + low) / 2;
        if (f(mid) > fx) // 此处适用于单增函数，若为单减函数，仅需改变不等号
        {
            high = mid;
        }
        else
            low = mid;
    }
    return low;
}

int main()
{

    printf("%f", solve(0, 2, 0.00001, 2)); // 计算f(x)=2的解(x在0~2范围内)
}