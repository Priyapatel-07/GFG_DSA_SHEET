
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution{
  public:
    bool isPalindrome(Node *head)
    {
       Node*slow = head;
        Node*fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node*prev = NULL;
        Node*curr = slow;

        while(curr != NULL){
            Node*next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        Node*head1 = head;
        Node*head2 = prev;

        while(head1 != NULL && head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }

        return true;

    }
};


int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {

        struct Node *head = NULL,  *tail = NULL;
        cin>>n;

        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;

        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}
