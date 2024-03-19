#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node //Định nghĩa dữ liệu cấu trúc Node
{
    int data; //Data của Node
    Node *pNext; // 
};

struct SingleList //Kiểu danh sách liên kết
{
    Node *pHead;
    Node *pTail;
};

void Init (SingleList &list) // Khởi tạo List mới = NULL
{
    list.pHead = list.pTail = NULL;
}

Node *CreatNode (int x)
{
    Node *pNode = (Node*) malloc (sizeof (Node)); // Cấp phát vùng nhớ cho Node
    if (pNode == NULL)
    {
        printf ("Error allocated memory");
        return NULL;
    }
    pNode->data = x; // Gán dữ liệu cho mắt xích pNode
    pNode->pNext = NULL;
    return pNode;
}

bool IsEmpty (SingleList &list) // Hàm kiểm tra danh sách rỗng
{
    return list.pHead == NULL;
}

void AddHead (SingleList &list, int value) // Chèn vào đầu danh sách
{
    Node *new_node = CreatNode (value);
    if (IsEmpty (list))
        list.pHead = list.pTail = new_node;
    else
    {
        new_node->pNext = list.pHead;
        list.pHead = new_node;
    }
}

void AddTail (SingleList &list, int value) // Thêm Node mới
{
    Node *new_node = CreatNode (value);
    if (IsEmpty (list))
        list.pHead = list.pTail = new_node;
    else 
    {
        list.pTail->pNext = new_node;
        list.pTail = new_node;
    }
}

int SizeOfList (SingleList &list)
{
    Node *pTmp = list.pHead;
    int Size = 0;
    while (pTmp != NULL)
    {
        pTmp = pTmp->pNext;
        Size++;
    }
    return Size;
}

void AddMid (SingleList &list, int pos, int value)
{
    if (pos < 0 || pos >= SizeOfList(list))
    {
        cout << "Error";
        return;
    }
    if (pos == 0)
        AddHead (list, value);
    else if (pos == SizeOfList (list))
        AddTail (list, value);
    else
    {
        Node *pNode = CreatNode (value);
        Node *pIns = list.pHead;
        Node *pPre = NULL;
        int i = 0;
        while (pIns != NULL)
        {
            if (i = pos)
            break;
            pPre = pIns;
            pIns = pIns->pNext;
            i++;
        }
        pNode->pNext = pIns;
        pPre->pNext = pNode;
    }
}

void printList (SingleList &list)
{
    Node *pTmp = list.pHead;
    if (pTmp == NULL)
    {
        cout << "The list is empty!";
        return;
    }
    while (pTmp != NULL)
    {
        cout << pTmp->data;
        pTmp = pTmp->pNext;
    }
}

int main ()
{
    
}