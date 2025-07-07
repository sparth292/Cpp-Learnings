#include <iostream>
using namespace std;
template <class X , class Y> 
X big(X a , Y b){
    cout << b << " is big";
    return 0;
}

int main() {
    big(1,2.0);
    return 0;
}
