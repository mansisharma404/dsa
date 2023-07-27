import java.io.*;
//https://www.geeksforgeeks.org/static-class-in-java/

public class LinkedList {

	static Node head;

	static class Node{
		int data;
		Node next;

	    Node(int n){ data = n; next = null;}
	}

	public static void pushInFront(LinkedList list, int data){
         
		Node newNode  = new Node(data);
		if(list.head == null)list.head = newNode;
		newNode.next = list.head.next;
		head = newNode;
	}

	public static void printList(LinkedList list) 
    { 
        Node currNode = list.head; 
     
        System.out.print("LinkedList: "); 
     
        // Traverse through the LinkedList 
        while (currNode != null) { 
            // Print the data at current node 
            System.out.print(currNode.data + " "); 
     
            // Go to next node 
            currNode = currNode.next; 
        } 
    } 

    public static void main(String[] args){

   	LinkedList list = new LinkedList();
   	pushInFront(list, 1);
   	printList(list);
   	pushInFront(list, 2);
   	printList(list);
   }
}
