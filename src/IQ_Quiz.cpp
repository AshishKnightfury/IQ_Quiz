// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
    int i, q, marks = 0, cho;
    char ans[5];
    srand(time(0));

    cout << "\n\t\tWelcome!! Wanna check your iq??\n\n\n\n";
    cout << "The test begins here:\n\n";
    cout << "Instructions:" << endl << "*Time limit: 5mins." << endl << "*Type your answer from the options given below the questions." << endl;
    cout << "*There is negative marking for each wrong answer.\n" << "*This game is very easy. So don't fly after the results.\n";
    cout << "*Don't take the it seriously. It's only a game.\n\n\n";
    for (i = 0; i < 5; i++)
    {
        q = rand() % 20;
        cout << "Q" << i + 1 << ".>";
        if (q == 0)
        {
            cout << "Please enter the missing number: 4, 8, 14, 22, ?";
            cout << "\n\t1.) 26\t\t2.) 28" << endl << "\t3.) 32\t\t4.) 36";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '3')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 1)
        {
            cout << "Please enter the missing number:3, 6, 18, 72, ?";
            cout << "\n\t1.) 144\t\t2.) 214" << endl << "\t3.) 272\t\t4.) 360";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '4')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 2)
        {
            cout << "Please enter the missing number:3,4,8,17,33,?";
            cout << "\n\t1.)50\t\t2.)58" << endl << "\t3.)66\t\t4.)not defined.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '2')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 3)
        {
            cout << "Please enter the missing number:4,5,8,17,44,?";
            cout << "\n\t1.)34\t\t2.)88" << endl << "\t3.)32\t\t4.)125";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '4')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 4)
        {
            cout << "What is the number that is one-half of one-quarter of one-third of 264 ?";
            cout << "\n\t1.)14\t\t2.)11" << endl << "\t3.)13\t\t4.)16";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '2')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 5)
        {
            cout << "One word in this list doesn't belong to the same group Reciever,Reviver,Range,Radar";
            cout << "\n\t1.)Reviver\t\t2.)Reciever" << endl << "\t3.)Range\t\t4.)Radar";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '3')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 6)
        {
            cout << "One word in this list doesn't belong to the same group Yen,Pound,Franc,Penny,Mark";
            cout << "\n\t1.)Yen\t\t2.)Franc" << endl << "\t3.)Penny\t\t4.)Mark";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '4')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 7)
        {
            cout << "I'm a male. If Albert's son is my son's father,what is the relationship between Albrt and me?";
            cout << "\n\t1.)He is my brother.\t\t2.)He is my uncle." << endl << "\t3.)He is my father.\t\t4.)He is not related to me.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '3')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 8)
        {
            cout << "A UFO was detected on the Radar flying 7400 miles in 3 mins,what is the estimated speed per hour ?";
            cout << "\n\t1.)7400 miles/h\t\t2.)1480 miles/h" << endl << "\t3.)14080 miles/h\t\t4.)148000 miles/h";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '4')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 9)
        {
            cout << "There are 12 pens on the table,you took 3,how many do you have ?";
            cout << "\n\t1.)3\t\t2.)7" << endl << "\t3.)0\t\t4.)5";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '1')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 10)
        {
            cout << "A spy is trying to send a secret message,we're trying to decode his message,we need your help!\n";
            cout << "if (shnoppy droppy groppy) means (mission dangerously executed)\n";
            cout << "if (swappy trappy droppy) means (abort mission immediately)\n";
            cout << "if (drippy groppy wippy) means (plan executed successfully)\n";
            cout << "Then what does shnoppy mean?";
            cout << "\n\t1.)mission\t\t2.)dangerously" << endl << "\t3.)executed\t\t4.)successfully";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '2')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 11)
        {
            cout << "Today is WEDNESDAY .What will be the fourth day from yesterday?";
            cout << "\n\t1.)Friday.\t\t2.)Sunday." << endl << "\t3.)Saturday.\t\t4.)None of these.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '3')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 12)
        {
            cout << "What is the result of multiplying all figures from 0 to 25?";
            cout << "\n\t1.)1.551121*10^25.\t\t2.)1.551121*10^24." << endl << "\t3.)1.551121*10^26.\t\t4.)None of these.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '4')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 13)
        {
            cout << "Library is to book as book is to ...?";
            cout << "\n\t1.)Page.\t\t2.)Notes." << endl << "\t3.)Copy.\t\t4.)Information.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '1')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 14)
        {
            cout << "At a birthday party, 10 people exchange Gifts with each other .How many gifts are exchanged ?";
            cout << "\n\t1.)100.\t\t2.)90." << endl << "\t3.)91.\t\t4.)99.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '2')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 15)
        {
            cout << "Which word doesn't fit ?";
            cout << "\n\t1.)Smiling.\t\t2.)Hearing." << endl << "\t3.)Smelling.\t\t4.)Seeing.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '1')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 16)
        {
            cout << "The result of 2^6 divided by 8^2 is ?";
            cout << "\n\t1.)4.\t\t2.)16." << endl << "\t3.)2.\t\t4.)1.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '4')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 17)
        {
            cout << "If you rearrange the letters 'FPACIIC' you would have the name of a(n) ?";
            cout << "\n\t1.)City.\t\t2.)Animal." << endl << "\t3.)Ocean.\t\t4.)Country.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '3')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 18)
        {
            cout << "Please choose the word not matching(content) the other words (odd one out).";
            cout << "\n\t1.)Jelly fish.\t\t2.)Eel." << endl << "\t3.)Dolphin.\t\t4.)Stingray.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '3')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else if (q == 19)
        {
            cout << "Rearrange the following words 'OONVEL' .You would get the name of a ?";
            cout << "\n\t1.)Supercar.\t\t2.)Company." << endl << "\t3.)Movie\t\t4.)Satellite.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '2')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        else
        {
            cout << "Find the result of {{{[(3^2)^]1^}0}4}.";
            cout << "\n\t1.)4.\t\t2.)2981." << endl << "\t3.)729.\t\t4.)1.";
            cout << "\nans.= ";
            cin >> ans[i];
            if (ans[i] == '1')
            {
                cout << "\t\t_/";
                marks = marks + 2;
            }
            else
            {
                cout << "\t\tX";
                marks = marks - 1;
            }
        }
        cout << endl;
        cout << "\n\nDo you want to play more ,or quit the game? To quit the game press '1' and to play more press '2'.\n\n";
        cin >> cho;
        if (cho == 1)
        {
            cout << "Your result is:" << marks * 20 << "/200";
            exit(0);
        }
        else if (cho == '2')
        {
            cout << ".";
        }
    }
}
