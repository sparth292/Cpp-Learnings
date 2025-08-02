// Write a C++ program to:
// Take input for n students: their name and score.
// Sort the students by score in descending order.
// Display the sorted list with rank.
// Features You'll Implement:
// Use of structs to store student data.
// Use of arrays (or vector, optionally).
// Use of functions to keep code clean.
// Implement Bubble Sort or std::sort().

#include <iostream>
#include <algorithm>
using namespace std;

void sortStudents(int size , int (&arr)[]){
    sort(arr,(arr+size));
    
    for(int i = size -1 ; i >= 0  ; i--){
        cout << arr[i] << endl;
    }   
}


int main(){
    
int numberOfStudents;

cout << "Enter the number of students : ";
cin >> numberOfStudents;

int students[numberOfStudents];

for(int i = 0 ; i < numberOfStudents ; i++){
    
    cout << "Enter Score of Student " << i+1 << endl;
    cin >> students[i];

}
    cout << *students << endl;
    sortStudents(numberOfStudents,students);
 
 
    return 0;
}
