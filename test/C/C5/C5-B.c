#include<stdio.h>
#include<stdint.h>
int hash_ll(long long key) {
    const uint64_t mul = 11400714819323198485ULL;
    uint64_t x = (uint64_t)key;
    x *= mul;
    return (int)(x >> 32);
}
int main()
{
    int n;
    long long a;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&a);
        printf("%d\n",hash_ll(a));
    }
    return 0;
}