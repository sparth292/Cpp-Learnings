// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<class X>
class ArrayList{
    private:
       struct ControlBlock{
             int capacity;
             X *arr_ptr;
       };
       ControlBlock *s;
    public:
       ArrayList(int capacity){
           s = new ControlBlock;
           s->capacity = capacity;
           s->arr_ptr = new X[s->capacity];
       }
    void addElement(int index , X data){
        if(index>=0&&index<=s->capacity-1)
            s->arr_ptr[index] = data;
        else
            cout << "Array index is not valid";
    }
    
    void viewElement(int index , X &data){
        if(index>=0&&index<=s->capacity-1)
            data = s->arr_ptr[index];
        else
            cout << "Array index is not valid";
    }
    void viewList(){
        int i;
        for(int i = 0 ; i < s->capacity ; i++)
           cout << i << " = " << s->arr_ptr[i] << endl;
    }
};

int main() {
    float data;
    ArrayList <float>l1(5);
    l1.addElement(0 , 12.5);
    l1.addElement(1 , 43.04);
    l1.addElement(2 , 23.9);
    l1.viewElement(0 , data);
    cout << "Value in index " << 0 << " is " << data << endl;
    l1.viewList();
    return 0;
}
