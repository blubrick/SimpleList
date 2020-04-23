#include "include/database.h"



vector<vector<string>> Database::read() {
    string line;
    ifstream db;

    vector<string> userList;


    db.open("db/lists.sl");
    if(db.is_open() ) {
        while(getline(db, line, '\n' ) ) {
            if( line.front() == '#') {
                cout << "Octothorpe found: " << line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            } else if( line.front() == '%') {
                cout << "Percent sign found: " << line << "\n";
                mainList.push_back(userList);
                userList.clear();
            } else {
                cout << "Found an item: " << line << "\n";
                userList.push_back(line);
            }
        }

    } else {
        cout << "cannot open file for reading...\n";
    }
    db.close();

    return mainList;
};

void Database::write(vector<vector<string>> list) {

    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open() ) {
        for(int user_index=0; user_index < (int)mainList[user_index].size(); user_index++) {
            for(int list_index=0; list_index <(int)mainList[user_index][list_index].size();list_index++) {
                db << mainList[user_index][list_index] << "\n";
            }
        }

    } else {
        cout << "could not open file for writing";
    }
    db.close();
};