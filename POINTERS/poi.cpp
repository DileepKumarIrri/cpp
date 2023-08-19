#include<iostream>
#include<cstdlib>
using namespace std;


struct Linked
{
    int val;
    struct Linked* next;
};
int main()
{
  Linked* head = new Linked();
  Linked* temp = head;
  for (int i=0;i<4;i++)
  {    
       Linked*temp1 = new Linked();
       cin >> temp ->val;
       temp->next = temp1;
       temp =temp1;
       
  }
temp->next =NULL;
  Linked* temp2 = new Linked();
  temp2 =head;
  while(temp2->next!=NULL)
  {
    
    cout<<temp2->val;
    temp2 =temp2->next;
  }
 

}