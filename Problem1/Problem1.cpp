#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int sum(int a, int b, int c)
{
    return a + b + c;
}

void showMessage(string msg)
{
    cout << msg;
}

void showMessage2(string msg)
{
    cout << msg << "!!!";
}

typedef unsigned char byte;
typedef void (*MENU_HANDLER)();
typedef void (*MENU_HANDLER_INT_INT)(int, int);

struct MENU_ITEM
{
    char letter;
    string text;
    MENU_HANDLER handler;
    int handlerType;
    size_t test;
};

void menu1()
{
    cout << "Menu1" << endl;
}

void menu2()
{
    cout << "Menu2" << endl;
}

void menu3()
{
    cout << "Menu3" << endl;
}

void menu4(int a)
{
    cout << "Menu4: " << a << endl;
}

void showMenuItems(vector<MENU_ITEM>& items)
{
    for (size_t i = 0; i < items.size(); i++)
    {
        cout << items[i].letter
            << ". " << items[i].text << endl;
    }
}

void handleUserChoice(vector<MENU_ITEM>& items)
{
    char choice;
    cout << "Choose and option: ";
    cin >> choice;

    for (size_t i = 0; i < items.size(); i++)
    {
        if (choice == items[i].letter)
        {
            ((MENU_HANDLER_INT_INT)items[i].handler);
        }
    }

}

int main()
{
    MENU_HANDLER func = menu1;
    func();
    vector<MENU_ITEM> mainMenu =
    {
        { '1', "Show info", menu1 },
        { '2', "Edit info", menu2 },
        { '3', "Show sum of numbers", menu3 }
    };
    
    showMenuItems(mainMenu);
    handleUserChoice(mainMenu);
}

