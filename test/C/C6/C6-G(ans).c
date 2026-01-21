#include<stdio.h>//注意到数据范围在1e5 ，若使用双层循环会TLE，所以需要动态维护最后k个数的和。
#define mod 100003
#define ll long long
ll c[100005];
int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll sum=0;
    c[0]=1;
    for(ll i=1;i<=n;i++){
        sum+=c[i-1];
        sum%=mod;
        if(i>k){//如果i<k，就是从1加到i（如三级台阶，一次最多跨5步），反之就是从i-k加到i（如5级台阶，一次最多跨3步）
            sum+=mod;
            sum-=c[i-k-1];//减去最开始那个数
            sum%=mod;
        }
        c[i]=sum%mod;
    }
    printf("%lld",c[n]%mod);
}