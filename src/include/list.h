#include <iostream>
#include <vector>

using namespace std;

class List {
    private:
    // Accessible to his class only

    protected:
    // Accessible to this class and its descendants

    public:
    // Accessible to all
    List() {
        // Constructor - Signified by its name 
        // being the same as the Class name
        // Initialise any required values 
        // in this method
    }
    ~List() {
        // Destructor - Signified by the name 
        // being the same as the Class name, 
        // but with a leading "~" 
        // Cleanup code for the object goes 
        // in this method
    }
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};