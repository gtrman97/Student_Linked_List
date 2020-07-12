#include <iostream>
using namespace std; 

struct listNode{
    string name;
    int studentNum;
    double gpa;
    listNode * next; 
};
typedef listNode * studentCollection; 

int main(){
    
studentCollection headPtr; 
listNode * node1 = new listNode; 
node1->name = "Andrew"; node1->studentNum = 1001; node1->gpa = 3.7; 
listNode * node2 = new listNode; 
node2->name = "Chris"; node2->studentNum = 1012; node2->gpa = 2.7; 
listNode * node3 = new listNode; 
node3->name = "Daisy"; node3->studentNum = 1076; node3->gpa = 3.5; 
// set the head pointer to point to node 1
headPtr = node1; 
//set the next pointer inside of node1 to point to node2
node1->next = node2; 
//set the next pointer inside of node2 to point to node3
node2->next = node3;
//set the next pointer inside of node3 to null
node3->next = nullptr; 
node1 = node2 = node3 = nullptr; 

studentCollection loopPtr = headPtr;

while(loopPtr != nullptr){
    
    cout << "Name: " << loopPtr->name << endl;
    cout << "Student ID: " << loopPtr->studentNum << endl; 
    cout << "GPA: " << loopPtr->gpa << endl;

    loopPtr = loopPtr->next; 
    
}


return 0; 

}

