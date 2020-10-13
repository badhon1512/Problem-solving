#include<iostream>

using namespace std;

typedef struct Node{
    int data;
    struct Node* nextNode;

}
* nodeptr;

nodeptr top= NULL;

void push(int value)
{
    nodeptr newNode= new Node;
    newNode->data = value;
    newNode->nextNode = top;
    top = newNode;

}

int pop(){

    if(top==NULL)
    {
        return -1;
    }
    else{
            int x;
        nodeptr ptr = top;
        x = top->data;
        top = top->nextNode;
        delete ptr;
        return x;
    }

}


void printStack(){

    if(top==NULL)
    {
    cout <<"Stack Empty" << endl;
    }
    else{
        cout << "Displaying............\n\n";
        nodeptr ptr;
        ptr=top;
        while(ptr!=NULL)
        {
            cout << ptr->data <<endl;
            ptr = ptr->nextNode;
        }

    }
}



int main()
{
int x,val,s;
bool f=false;

   while(!f){

    cout <<"Press 1 To Push" << endl;
    cout <<"Press 2 To PoP" << endl;
    cout <<"Press 3 to Display" <<  endl;
    cout <<"Press 4 to Exit" << endl;
    cin >> s;
    if(s==1)
    {
        cout <<"Enter the value u wants to add: ";
        cin >> val;
        push(val);
    }
    else if(s==2)
    {
        x=pop();
        if(x==-1)
            cout << "Stack Underflow" << endl;
        else
            cout <<"You Poped : " << x << endl;

    }
    else if(s==3)
    {
        printStack();
    }
    else
        f=true;

   }
    }

