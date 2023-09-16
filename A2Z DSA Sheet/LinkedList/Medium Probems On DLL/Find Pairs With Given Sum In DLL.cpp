#include <bits/stdc++.h>
/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int,int>>ans;
    Node* low=head,*high=head;
    while(high->next)
        high=high->next;
    while(low!=high && high->next!=low)
    {
        if(low->data+high->data==k)
        {
            ans.push_back({low->data,high->data});
            low=low->next;
            high=high->prev;
        }
        else
        {
            if(low->data+high->data<k)
                low=low->next;
            else
                high=high->prev;
        }
    }
    return ans;
}
