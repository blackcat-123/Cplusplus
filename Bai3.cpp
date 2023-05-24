#include <bits/stdc++.h>
  
using namespace std;
  
// doubly linked list
struct Node {
    int data;
    struct Node* next, *prev;
};
  

int countTriplets(struct Node* head)
{
    struct Node* ptr1, *ptr2, *ptr3;
    int count = 0;
  
    
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
        for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
            for (ptr3 = ptr2->next; ptr3 != NULL; ptr3 = ptr3->next)
  
                
                if ((ptr1->data + ptr2->data + ptr3->data) == 0)
  
                    // increment count
                    count++;
  
    // required count of triplets
    return count;
}
  
// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node** head, int data)
{
    // allocate node
    struct Node* temp = new Node();
  
    // put in the data
    temp->data = data;
    temp->next = temp->prev = NULL;
  
    if ((*head) == NULL)
        (*head) = temp;
    else {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
  
// Driver program to test above
int main()
{
    // start with an empty doubly linked list
    struct Node* head = NULL;
  
    // insert values in sorted order
    
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        insert(&head, x);
    }
    
  
    cout << "Count = "
         << countTriplets(head);
    return 0;
}