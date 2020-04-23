#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    private:
    // Accessible to his class only

    protected:
    // Accessible to this class and its descendants

    public:
    // Accessible to all
    Database() {
        // Constructor - Signified by its name 
        // being the same as the Class name
        // Initialise any required values 
        // in this method
    }
    ~Database() {
        // Destructor - Signified by the name 
        // being the same as the Class name, 
        // but with a leading "~" 
        // Cleanup code for the object goes 
        // in this method
    }
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> list);
    vector<vector<string>> read();
};