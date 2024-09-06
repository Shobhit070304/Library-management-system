#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Library
{
public:
    int bookId;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main()
{
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3)
    {
        cout << "\nLibrary Management System\n";
        cout << "Enter 1 to input details like id, name, author, student, price, pages\n";
        cout << "Enter 2 to display details\n";
        cout << "Enter 3 to quit\n";
        cin >> input;

        switch (input)
        {
        case 1:
        start:
            if (count < 20)
            {
                cout << "Enter Book Id: ";
                cin >> lib[count].bookId;
                cin.ignore();
                cout << "Enter Book Name: ";
                cin.getline(lib[count].name, 100);
                cout << "Enter Book Author: ";
                cin.getline(lib[count].author, 100);
                cout << "Enter Student Name: ";
                cin.getline(lib[count].student, 100);
                cout << "Enter Book Price: ";
                cin >> lib[count].price;
                cin.ignore();
                cout << "Enter Book Pages: ";
                cin >> lib[count].pages;
                cin.ignore();
                count++;
            }
            else
            {
                cout << "Library is full. Cannot add more books.\n";
            }
            break;
        case 2:
            if (count > 0)
            {
                cout << "\nBook Details:\n";
                for (int i = 0; i < count; i++)
                {
                    cout << "Book Id: " << lib[i].bookId << endl;
                    cout << "Book Name: " << lib[i].name << endl;
                    cout << "Book Author: " << lib[i].author << endl;
                    cout << "Student Name: " << lib[i].student << endl;
                    cout << "Book Price: " << lib[i].price << endl;
                    cout << "Book Pages: " << lib[i].pages << endl;
                }
            }
            else
            {
                cout << "Library is empty. Cannot display details.\n";
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Invalid input. Please try again.\n";
            goto start;
        }
    }
    return 0;
}
