// OOPs - Classes and objects

 /*Project 1 - class and object 
title - this project will implement the binary class with read display and ones compliment fucntion and 
date  - 20/05/2020
created by - Patel Meet 
tutorial 1 
*/
#include <iostream>
#include <string>
using namespace std;

class binary    // create the binary class with all variable and fucntion 
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void)        // implemntation of read function
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void)       // implementation of binary check function 
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)  // implemntation of ones_compliment fucntion
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)      // implemntaion of display fucntion 
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;    // create a object of class binary 
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}