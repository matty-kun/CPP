#include <iostream>
#include <string>
#include <list>
using namespace std;

class TodoItem {
private:
    int id;
    string description;
    bool completed;

public:
    TodoItem() : id(0), description(""), completed(false) {}
    ~TodoItem() = default;

    int getId() { return id; }
    string getDescription() { return description; }
    bool isCompleted() { return completed; }
};

int main() {
    string version = "1.0.0";
    list<TodoItem> todoItems;
    list<TodoItem>::iterator it;

    todoItems.clear();

    while (true) {
        system("cls");
        cout << "To-do List -- " << version << endl;
        cout << endl << endl;

        for (it = todoItems.begin(); it != todoItems.end(); it++) {
            cout << it->getId() << " | " << it->getDescription() << " | " << it->isCompleted() << endl;
        }

    }


    return 0;
}