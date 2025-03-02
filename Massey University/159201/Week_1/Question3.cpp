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

// Sparse Matrics add operation 
// Node: Because all use head insertion method, the original matrix is stored in reserve order and the resulting matrix is stored in positive order
void AddSparseMatrics(Node*& listpointer, Node* first, Node* second)
{
    while (first && second) // First deal with the case where both matrices have values
    {
        if (first->row < second->row) // Compare rows first
        {
            AddNode(listpointer, second->row, second->col, second->value);
            second = second->next;  
        }
        else if (first->row > second->row)
        {
            AddNode(listpointer, first->row, first->col, first->value);
            first = first->next;
        }
        else // If rows are same, we will compare columns
        {
            if (first->col < second->col)
            {
                AddNode(listpointer, second->row, second->col, second->value);
                second = second->next;
            }
            else if (first->col > second->col)
            {
                AddNode(listpointer, first->row, first->col, first->value);
                first = first->next;
            }
            else // Two values are equal, we add them and store it
            {
                AddNode(listpointer, first->row, first->col, first->value + second->value);
                first = first->next;
                second = second->next;
            }
        }
    }
    while (first) // Second deal with the case where one matrix do not have value
    {
        AddNode(listpointer, first->row, first->col, first->value);
        first = first->next;
    }
    while (second)
    {
        AddNode(listpointer, second->row, second->col, second->value);
        second = second->next;
    }
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

// Flip the linked list using recursion
Node* ReverseLinkedList(Node* head)
{
    if (head == nullptr || head->next == NULL)
        return head;

    Node* newhead = ReverseLinkedList(head->next);

    head->next->next = head;
    head->next = nullptr;

    return newhead;
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

    // Creat result matrix
    Node* Result = NULL;

    // Print A and B matrix
    cout << "Matrix A:" << endl;
    PrintLinkedList(A);

    cout << "Matrix B:" << endl;
    PrintLinkedList(B);

    // Calculate A + B 
    AddSparseMatrics(Result, A, B);

    // Filp the linked list and print it
    Node* ResultReversed = ReverseLinkedList(Result);
    cout << "Matrix A + B:" << endl;
    PrintLinkedList(ResultReversed);

    // Delete linked lists
    DeleteLinkedList(A);
    DeleteLinkedList(B);
    DeleteLinkedList(Result);
    return 0;
}