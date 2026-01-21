int zeller(int c,int y,int m,int d){
    if(m<3){
        y--;
        m+=12;
    }
    int w=(y+y/4+c/4-2*c+13*(m+1)/5+d-1)%7;
    while(w<0){
        w+=7;
    }
    return w;
}