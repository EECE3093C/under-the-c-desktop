#include <iostream>
#include <fstream>

#include <string>

using namespace std;

#include "Menu.h"

void Menu::menuNavigator(){
    int redo = 1;

    //Implement Incorrect and Escape
    while(redo == 1){
        cout << "Welcome to Weather ESP Light." << endl;
        cout << "Please input the number corresponding to the desired operation:" << endl;

        cout << "1. Enter Wifi SSID and Password" << endl;
        cout << "2. Enter Location" << endl;

        cin >> menuChoice;

        switch(menuChoice){
            case 1:
                getWifi();
                redo = redoChecker();

                break;

            case 2:
                getLocation();
                redo = redoChecker();
                break;

            default:
                cout << "Choice could not be understood." << endl;
                cout << "Reenter choice:" << endl;
                redo = 1;
        }
    }
}

void Menu::getWifi(){
    cout << "Enter Wifi SSID:" << endl;
    cin >> wifiSSID;
    cout << "Enter Wifi Password:" << endl;
    cin >> wifiPassword;
}

void Menu::getLocation(){
    cout << "Enter ZIP code:" << endl;
    cin >> locationZIP;
}

int Menu::redoChecker(){
    string tempChoice;
    cout << "Would you like to enter the menu again? (Y/N)" << endl;
    cin >> tempChoice;
    
    if (tempChoice == "Y"){
        return 1;
    }
    else if (tempChoice == "N")
    {
        return 0;
    }
    else{
        cout << "Input not understood. Exiting program." << endl;
        return 0;
    }
}

