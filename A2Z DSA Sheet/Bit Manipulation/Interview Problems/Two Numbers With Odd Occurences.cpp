vector<int> twoOddNum(vector<int> arr){
    int x=0;
    for(auto it:arr)
        x^=it;
    int one=0,zero=0;
    int num=x&~(x-1);
    for(auto it:arr)
    {
        if(it&num)
            one^=it;
        else
            zero^=it;
    }
    if(one>zero)
        swap(one,zero);
    return {zero,one};
}