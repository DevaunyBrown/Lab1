#include<bits/stdc++.h>
using namespace std;
int sumUpToN()
{
   int num, sum=0;
   cout<<"Enter a positive number: "; 
   cin>>num;

   if(num<=0)
   {
      cout<<("-1");
   }
   else
   {
     int x=1;
        while(x<=num)
            {
	            sum=sum+x;
	            x++;
            }
     cout<<"Sum of first n natural numbers is: "<<sum;
   }

   return 0;
}

int main ()
{
    sumUpToN();
}
