#include "include/list.h"


void List::print_menu() {
    int choice;
    cout << "***********************\n";
    cout << "1 - Print the List\n";
    cout << "2 - Add Item to List\n";
    cout << "3 - Delete From List\n";
    cout << "4 - Exit The Program\n";
    cout << "Enter your choice and press return: ";

    cin >> choice;

    if (choice == 4) {
        exit(0);
    } else if (choice == 3){
        delete_item();
    } else if (choice == 2){
        add_item();
    } else if (choice == 1){
        print_list();
    } else {
        cout << "Choice not yet implemented.";
    }

} 

void List::add_item() {
    cout << "\n\n\n\n\n\n";
    cout << "****** Add Item *******\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Item successfully added to the list \n\n\n";

    cin.clear();
    
    print_menu();
}

void List::delete_item() {
    cout << "\n\n\n\n\n\n";
    cout << "****** Delete Item *******\n";
    cout << "Select an item index to delete: ";
    if (list.size()){
        for(int i=0; i < (int)list.size();i++) {
            cout << i << ": " << list[i] << endl;
        }
    } else {
        cout << "No items to delete \n";
    }

    print_menu();
}

void List::print_list() {
    cout << "\n\n\n\n\n\n";
    cout << "****** printing list *******\n";

    for(int list_index=0; list_index < (int)list.size(); list_index++) {
        cout << " * " << list[list_index] << endl;
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;
    if (choice == 'M' || choice == 'm') {
        print_menu();
    } else {
        cout << "Invalid choice... quitting\n";
    }

}