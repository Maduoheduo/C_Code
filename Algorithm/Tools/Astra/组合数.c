long long combination(int n,int k)
{
    if(k==0||k==n){
        return 1;
    }else{
        long long res=1;
        for(int i=1;i<=k;i++){
            res*=(n-i+1)/i;
        }
        return res;
    }
}