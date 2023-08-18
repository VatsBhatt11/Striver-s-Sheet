void fun(vector<int>&arr,int i,int n){ 

   if(i>n){   

     return;  

  }  

      arr.push_back(i);

 fun(arr,i+1,n);

 }

 vector<int> printNos(int x)

 {   

 // Write Your Code Here 

   vector<int>arr; 

   int i=1;   

 fun(arr,i,x);   

 return arr; 

}