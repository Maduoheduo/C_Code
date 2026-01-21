double combination(double n,double k)
{
    if(k==0||k==n){
        return 1.0;
    }else{
        double res=1.0;
        for(int i=1;i<=k;i++){
            res*=(n-i+1)*1.0/(i*1.0);
        }
        return res;
    }
}
double HypergeometricDistribution(double N,double M,double n,int k)
{
    if(k>M){//ÁÙ½çÇé¿ö£¡£¡£¡£¡£¡£¡£¡
        return 0.0;
    }else if(n-k>N-M){//
        return 0.0;
    }else{
        return (1.0*combination(M,k*1.0))*(1.0*combination(N-M,n-k*1.0))/(1.0*combination(N,n));
    } 
}