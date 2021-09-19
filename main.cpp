#include<iostream>
#define N 5
using namespace std;

class Queue{
    int array[N], var, rear, front;
public:
    Queue(){
        for (int i = 0; i < N-1; i++){
            array[i]=0;
        }
    }
    bool isempty(){
        if(rear == -1 && front == -1)
            return true;
        else
            return false;
    }
    bool isfull(){
        if(rear == N-1)
            return true;
        else
            return false;
    }
    void count_disp(){
        cout<<"Elements in Queue are : ";
        for(int i=0; i<N; i++){
            cout<<" "<<array[i];
        }
        cout<<"Total number of elements in queue are : "<<rear - front + 1;
    }
    void enqueue(int value){
        if(isfull())
            cout<<"Queue is full";
        else if(rear == -1 && front ==-1){
            rear++;
            front++;
            array[rear]=value;
        }
        else{
            rear++;
            array[rear]=value;
        }
    }
    void dequeue(){
        if(isempty()){
            cout<<"Queue is empty\n";
        }
        else if(rear==front){
            rear--;
            front--;
            cout<<"Dequeued";
        }
        else{
            array[front] = 0;
            front++;
            cout<<"Dequeued";
        }
    }
};

int main(){
    system("cls");
    Queue obj;
    int choice, var_x;
    cout<<"Welcome to the Queue Data Structure Program\n";
    cout<<"Select the serial number to select option\n";
    cout<<"1 - Perform Enqueue Opr\n";
    cout<<"2 - Perform Dequeue Opr\n";
    cout<<"3 - Perform isfull Opr\n";
    cout<<"4 - Perform isempty Opr\n";
    cout<<"5 - Perform Count & Display Opr\n";
    cout<<"6 - Enter 6 to EXIT\n";
    cin>>choice;
    while (choice!=6)    {
        switch (choice){
        case 1:
            cout<<"Enter the value";
            cin>>var_x;
            obj.enqueue(var_x);
            break;
        case 2:
            obj.dequeue();
            break;
        case 3:
            obj.isfull();
            break;
        case 4:
            obj.isempty();
            break;
        case 5:
            obj.count_disp();
            break;
        case 6:
            return 0;
            break;
        default:
            cout<<"Please Enter a Valid Number";
            break;
        }
    }   
    return 0;
}
