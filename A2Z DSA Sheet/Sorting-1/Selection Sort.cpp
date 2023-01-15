class Solution
{
  public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
    }
       
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n-1;i++)
       {
            int m=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[m]>arr[j])
                {
                    m=j;
                }
            }
            swap(arr[m],arr[i]);
       }
    }
};
