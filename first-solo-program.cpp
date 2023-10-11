// first-solo-program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//* 1) log in 2) see menu with status ( on/off ) / see which devices are connected ( add, remove, edit) 3) diagnostics troubleshooting 
 //*  4) possible log export

#include <iostream>
#include <string>

int main()
{

    std::string username;
    std::string password;


    std::cout << "Welcome to your all in one personal Smart Home appliance manager.\n";
    std::cout << "Please enter your login in credentials below.\n" << std::endl;
    std::cout << "Username\n";
    std::cin >> username;

    if (username == "wtf")
    {
        std::cout << "Password\n";
        std::cin >> password;
        if (password == "fuckoff")
        {
            std::cout << "You have successfully logged in with the following credentials:" << std::endl;
            std::cout << "Username: " << username << std::endl;
            std::cout << "Password: " << password << std::endl;
        }
        else

            std::cout << "Your password is incorrect." << std::endl;
    }
    else
        std::cout << "Your username is incorrect." << std::endl;
            

        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file