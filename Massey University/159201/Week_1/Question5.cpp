#include <iostream>
using namespace std;

// Creat Node Struct, which needs row, col, value and a Node point to next
struct Node
{
    int row, col, value;
    Node* next;
};

// Add a new Node, it is adapted from the node-adding method for linked lists
void AddNode(Node*& listpointer, int Row, int Col, int Value)
{
    Node* temp;
    temp = new Node;
    temp->row = Row;
    temp->col = Col;
    temp->value = Value;
    temp->next = listpointer;
    listpointer = temp;
}

// Search x,y 
int SearchNode(Node* listpointer,int x,int y)
{
    Node* current = listpointer;
    while (current)
    {
        if (current->row == x && current->col == y)
            return current->value;
        current = current->next;
    }
    return 0;
}

// Add operation using search right now
Node* AddSparseMatrics(Node* first, Node* second)
{
    Node* temp = nullptr;
    while (first) // Add "first" into temp, among them, if "second" has the same x,y with "first", add the value of them.
    {
        AddNode(temp, first->row, first->col, first->value +  SearchNode(second,first->row,first->col));
        first = first->next;
    }
    while (second) // Add "second" into temp, which is not included by "first"
    {
        if (!SearchNode(temp, second->row, second->col))
            AddNode(temp, second->row, second->col, second->value);
        second = second->next;
    }
    return temp;
}

// Print Matirix
void PrintLinkedList(Node* listpointer)
{
    while (listpointer)
    {
        cout << "(" << listpointer->row << "," << listpointer->col << "," << listpointer->value << ") ->";
        listpointer = listpointer->next;
    }
    cout << "NULL" << endl;
}

// Deleting a linked list
void DeleteLinkedList(Node* head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main(void)
{
    // Test:(The test cases are from ChatGPT-4o.)
    // Creat A and B matrix
    Node* A = NULL;
    AddNode(A, 0, 2, 5);
    AddNode(A, 1, 1, 3);
    AddNode(A, 2, 0, 1);
    AddNode(A, 2, 3, 4);

    Node* B = NULL;
    AddNode(B, 0, 1, 2);
    AddNode(B, 1, 1, 3);
    AddNode(B, 1, 3, 1);
    AddNode(B, 2, 0, 1);
    AddNode(B, 3, 2, 7);

    // Print A and B matrix
    cout << "Matrix A:" << endl;
    PrintLinkedList(A);

    cout << "Matrix B:" << endl;
    PrintLinkedList(B);

    // Calculate A + B and print it
    Node* Result = AddSparseMatrics(A, B);
    cout << "Matrix A + B:" << endl;
    PrintLinkedList(Result);

    // Delete linked lists
    DeleteLinkedList(A);
    DeleteLinkedList(B);
    DeleteLinkedList(Result);
    return 0;
}