#include <iostrema>

using namespace std;


struct SingleLinkedListNode{
    struct SingleLinkedListNode * next;
    int data;
}

class SingleLinkedList(){
    public:
        SingleLinkedList();
        ~SingleLinkedList();

        Add();
        Del();
        Change();
        Find();


        GetLen();
        Print();

        Reverse();
        Sort();



}
