class Solution{
    static double switchCase(int choice, List<Double> arr){
        if(choice==1)
        {
            return (Math.PI*arr.get(0)*arr.get(0));
        }
        else
        {
            return (arr.get(0)*arr.get(1));
        }
    }
}
