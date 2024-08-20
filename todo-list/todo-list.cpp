#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
using namespace std;

class TodoItem {
private:
    int id;
    string description;
    bool completed;

public:
    TodoItem() : id(0), description(""), completed(false) {}
    ~TodoItem() = default;

    bool create(string new_description) {
        // Generates a random number between 1 and 100
        id = rand() % 100 + 1;
        description = new_description;
        return true;
    }

    int getId() const { return id; }
    const string& getDescription() const { return description; }
    bool isCompleted() const { return completed; }

    void setCompleted(bool val) { completed = val; }
};

int main() {
    char input_option;
    int input_id;
    string input_description;
    string version = "1.0.0";
    list<TodoItem> todoItems;
    list<TodoItem>::iterator it;

    srand(time(NULL));

    todoItems.clear();

    // TodoItem test;
    // test.create("This is a test");
    // todoItems.push_back(test);

    while (true) {
        system("clear");
        cout << "To-do List -- " << version << endl;
        cout << endl << endl;

        for (it = todoItems.begin(); it != todoItems.end(); it++) {

            string completed = it->isCompleted() ? "Done" : "Not done";
            cout << it->getId() << " | " << it->getDescription() << " | " << completed << endl;
        }

        if (todoItems.empty()) {
            cout << "Add your first to-do!\n";
        }

        cout << endl << endl;

        cout << "[A]dd a new task!\n";
        cout << "[C]omplete a task!\n";
        cout << "[Q]uit\n";

        cout << "Choice: ";
        cin >> input_option;

        if (input_option == 'q' || input_option == 'Q') {
            cout << "Have a great day now! :)\n";
            break;
        } 
        else if (input_option == 'a'|| input_option == 'A') {
            cout << "Add a new description: ";
            cin.clear();
            cin.ignore();
            getline(cin, input_description);

            TodoItem newItem;
            newItem.create(input_description);
            todoItems.push_back(newItem);
        }
        else if (input_option == 'c' || input_option == 'C') {
            cout << "Enter id to mark completed: ";
            cin >> input_id;

            for (it = todoItems.begin(); it != todoItems.end(); it++) {
                if (input_id == it->getId()) {
                    it->setCompleted(true);
                    break;
                }
            }
        }
    }
    return 0;
}