/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr)
{
   // head tail
   // arr[0] arr[1] arr[2] arr[3]
   
   Node *head=new Node(arr[0]);
   Node *ans=head;
   for(int i=1;i<arr.size();i++)
   {
       Node *temp=new Node(arr[i]);
       ans->next=temp;
       ans=temp;
   }
   return head;

}