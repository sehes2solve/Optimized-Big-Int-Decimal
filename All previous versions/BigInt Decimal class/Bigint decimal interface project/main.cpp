#include <iostream>
#include <map>
#include "big_int_decimal.h"

using namespace std;

void interFace();
void menu();

int main()
{
    interFace();

    /**big_int_decimal arr[ 7 ];
    for ( int i = 0; i < 2; i++ )
        cout << "Enter the " << i+1 << " Number : " , cin >> arr[i];

    for ( int i = 2; i < 4; i++ )
        cout << "Enter the " << i+1 << " Number : " , cin >> arr[i];

    arr[ 4 ] = arr[ 0 ] + arr[ 1 ];
    arr[ 5 ] = arr[ 2 ] + arr[ 3 ];
    arr[ 6 ] = arr[ 4 ] - arr[ 5 ];

    for ( int i = 4; i < 7; i++ )
        cout << arr[ i ] << "\n";*/
    return 0;
}

void interFace()
{
    cout << "Welcome in ' Big Decimal Int ' class interface \n\n";
    system( "Pause");

    map < string , big_int_decimal > mp; string choice , id;
    while ( true )
    {
        system( "CLS" ); menu();
        big_int_decimal object;
        cin >> choice;

        if      ( choice == "5" ) break;
        else if ( choice == "1" )
        {
            while ( object.get_valid() == false )
            {
                cout << "Enter the number : "; cin >> object;
                if ( object.getSize() == false ) system( "pause" ) , system( "CLS" );;
            }
            while ( true )
            {
                cout << "Enter the id of the number : "; cin >> id;
                if ( mp.find( id ) == mp.end() ) break;
                else
                {
                    cout << "id is founded\n"; system( "CLS" );
                }
            }
            mp[ id ] = object;
        }
        else if ( choice == "2" || choice == "3" )
        {
            string s1 , s2;
            while ( true )
            {
                cout << "Enter the id of the first  number : "; cin >> s1;
                if ( mp.find( s1 ) == mp.end() )
                    cout << "id not founded \n";
                else
                    break;
                system( "pause" ); system( "CLS" );
            }

            while ( true )
            {
                cout << "Enter the id of the second number : "; cin >> s2;
                if ( mp.find( s2 ) == mp.end() )
                    cout << "id not founded \n";
                else
                    break;
                system( "pause" ); system( "CLS" );
            }
            while ( true )
            {
                cout << "Enter the id of the result number : "; cin >> id;
                if ( mp.find( id ) == mp.end() ) break;
                else
                    cout << "id is founded\n";
                system( "CLS" );
            }
            if      ( choice == "2" ) mp[ id ] = mp[ s1 ] + mp[ s2 ];
            else if ( choice == "3" ) mp[ id ] = mp[ s1 ] - mp[ s2 ];
        }
        else if ( choice == "4" )
        {
            while ( true )
            {
                cout << "Enter the id of the result number : "; cin >> id;
                if ( mp.find( id ) != mp.end() ) break;
                else
                {
                    cout << "id is founded\n"; system( "CLS" );
                }
            }
            cout << mp[ id ] << "\n";
        }
        else
            cout << "Invalid input\n";

        system( "Pause" );
    }

    system("CLS");
    cout << "System Halt \n\n"; char c;
    cout << "Press any key to end .....";
    cin.ignore(); cin >> noskipws >> c;
}


void menu()
{
    cout << "1- Insert new number \n";
    cout << "2- Add two numbers \n";
    cout << "3- Subtract two numbers\n";
    cout << "4- Print number\n";
    cout << "5- Exit\n";
    cout << "\n>> Choice : ";
}
