bool isKthBitSet(int n, int k)
{
    if(((n>>k-1)&1)==1)
        return true;
    return false;
}