 #include "Task.h"
 #include <string>
 #include <vector>
 #include <filesystem>
 #include <fstream>
 #include <algorithm>

void saveTasksToFile(const vector<Task>& tasks, const string& fileName){
    ofstream ostream(fileName);
    ostream << tasks.size();
}

vector<Task> loadTaskFromFile(const string& fileName){
    return vector<Task>();
}