#include<iostream>

using namespace std;
int num = 0;
int reverse (int n)
{   
  int k =n;
    
    if (n == 0)
    {
      return num;
    }
    num = num *10 +n%10;
    return reverse(n/10);
}
using namespace std;

int main()
{
    int x=68676;
    int num=0;
    int rem;
// while (x !=0 )
//     {
//         x = x/10;
//         rem = x%10;
//         num = num * 10 +rem;
        
//     }
cout<< reverse(-7899);
}
