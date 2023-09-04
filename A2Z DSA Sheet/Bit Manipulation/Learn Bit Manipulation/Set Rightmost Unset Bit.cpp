int setBits(int N){
    if((N^N+1)==(N<<1)+1)
        return N;
    else
        return (N | N + 1);
}