#include<iostream>
using namespace std;

struct Node {
int data;
struct Node *next;
};


// here we are passing ** means address of address hence after destructing it for the first time we will get the address of head/node
// also the return statement is null because we are passing address hence if we will change the value of address of head head will change
void pushInFront(struct Node** head, int n ){
// time and space complexity both of this function is O(1)
// we are defining the pointer here hence it will keep the address of newly assigned node
struct Node* new_head = new Node();
new_head->data = n;
new_head-> next = *head;
*head = new_head;
return;
}


// Returning pointer to last node
// Time complexity O(N) space complexity O(1)
Node* pushInBack(struct Node** head, int n){
Node* temp = *head;

while(temp->next != NULL)temp = temp->next;

Node* new_node = new Node();
new_node->data = n;
temp->next = new_node;
return new_node;
}

int main(){

struct Node* linked_list = new Node();
bool isLastNode = linked_list->next == NULL ;
cout << isLastNode << "\n";
pushInFront(&linked_list, 1);
cout << linked_list->data << "\n";
cout << linked_list << "\n";
cout << linked_list->next << "\n";

Node* last_node = pushInBack(&linked_list,2);
cout << last_node->data << "\n";
cout << last_node << "\n";
cout << last_node->next << "\n";

}