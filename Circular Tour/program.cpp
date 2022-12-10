
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       
       int d=0;
       int b=0;
       int s=0;
       for(int i=0;i<n;i++)
       {
           b+=p[i].petrol-p[i].distance;
           
           if(b<0)
           {
               d+=b;
               s=i+1;
               b=0;
           }
       }
       if(d+b>=0)
       {
           return s;
       }
       return -1;
    }
};
