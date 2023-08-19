#include <iostream>
using namespace std;

int main() {
   int n;
   int num;
   int d;
   int q;
   
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>num;
       d =num;
       int c=0;
       while (d > 0)
       {   
           q=d%10;
           d=d/10;
           if(q == 4)
           {
               c++;
           }
       }
       cout<<c<<'\n';
       
   }
}
