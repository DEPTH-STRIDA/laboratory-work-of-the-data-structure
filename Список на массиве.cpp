#include <iostream>
using namespace std;

class Queue {
public:
    int array[100];
    int size=-1;
    //Добавление элемента в конец очереди
    void enter(int x) {
        if (size == 100) {
            cout << "Queue is full" << endl;
            return;
        }
        array[size+1] = x;
        size++;
    }
    //Удаление первого элемента с его возвратом
    int leave() {
        if (size == -1) {
            cout << "Queue is empty" << endl;
            return 0;
        }
        int toReturn = array[0];
        for (int i = 1; i <= size;i++) {
            array[i - 1] = array[i];
        }
        array[size] = 0;
        size--; 
        return toReturn;
    }
    //Печать очереди
    void printQueue() {
        for (int i = 0; i <=size; i++) {
            cout << array[i];
            if (i != size) {
                cout << "; ";
            }
        }
        cout << endl;
    }
};

int main() {
    //Создание экземпляра очереди
    Queue exampleQueue;

    //Добавление в конец очереди
    exampleQueue.enter(1);
    exampleQueue.enter(2);
    exampleQueue.enter(3);
    exampleQueue.enter(4);
    exampleQueue.enter(5);

    //Печать очереди
    exampleQueue.printQueue();

    //Удаление из начала очереди.
    exampleQueue.leave();

    //Удаление из начала очереди и получение этого элемента.
    cout << exampleQueue.leave() << endl;

    //Печать очереди
    exampleQueue.printQueue();
    return 0;
}