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
        return;
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
    cout << "Select an item index to delete: \n";
    if (list.size()){
        for(int i=0; i < (int)list.size();i++) {
            cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin() + choiceNum);
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

void List::find_userList() {
    bool userFound = false;

    cout << "\n\n\n\n\n\n";
    cout << "****** Welcome, " << name << " *******\n";

    for (int user_index=0; user_index < (int)mainList.size(); user_index++) {
        cout << mainList[user_index][0] <<  "\n";
        if (mainList[user_index][0] == name) {
            cout << "User has been found: " << mainList[user_index][0] << "\n";
            list = mainList[user_index];
            userFound = true;
            break;
        } 
        // else {
        //     cout << "Sorry... user was not found... exiting the program.\n";
        //     break;
        // }
    }
}