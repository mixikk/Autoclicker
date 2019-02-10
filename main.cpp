#include <iostream>
#include <windows.h>

using namespace std;


int main(int argc, char * argv[])

{
    int n = 1;
    int x;
    int y;
    int clicks;
    int done;
    int ms;
    string choice;


    start:

    cout << "Autoclicker 1.0\n \n";

    cout << "Number of clicks:" << endl;
    cout << " ] ";

cin >> clicks;

cout << "\nMilliseconds between clicks:" << endl;
cout << " ] ";
cin >> ms;
done = 0;

cout << "starts in 5..." << endl;
Sleep(1000);
cout << "starts in 4..." << endl;
Sleep(1000);
cout << "starts in 3..." << endl;
Sleep(1000);
cout << "starts in 2..." << endl;
Sleep(1000);
cout << "starts in 1..." << endl;
Sleep(1000);

    while (done <= clicks)
    {
        Sleep(ms);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        done++;
    }

    cout << "The clicks have been made." << endl;
    cout << "Application Written by WispGuardian/Noah." << endl;
    cout << "    " << endl;
    Sleep(1000);
    cout << "Again?   (y) or (n)" << endl;
    cin >> choice;


    if (choice == "y")
    {

        system("cls");
        goto start;


    }

    cin.get();
}
