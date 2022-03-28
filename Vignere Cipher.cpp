

#include <bits/stdc++.h>

using namespace std;


int main()
{
    string s, k, newkey = "",nwstring="";

    int encrypte = 1 ;
    bool again = 1;


///ask user he want encrypteor or decrypt or exit
    while(again)
    {

        cout<<"Welcome choose"<<endl;
        cout<<"1- to encrypt"<<endl;
        cout<<"2- to decrypt"<<endl;
        cout<<"3- Exit"<<endl;
        cin>>encrypte;
        cin.ignore();

///=============start of encryption ====================================
        if(encrypte == 1)
        {
//get message from user
            cout<<"please enter your string(less than 80 character): " ;
            getline (cin, s);

//get key from user
            cout<<"please enter your key (less than 8 character): " ;
            getline(cin, k);
//to upper all words
            transform(s.begin(), s.end(), s.begin(), ::toupper);

            transform(k.begin(), k.end(), k.begin(), ::toupper);


            int n = s.size(), m = k.size() ;
//check that the string less than 80
            if(n < 80 )
            {
//check that the key less than 8

                if(m < 8)
                {

//==================================================
//Create a new key whose number of letters is equal to the number of the word
                    for (int i = 0 ; i < (n / m) ; i++ )
                    {
                        newkey+=k ;
                    }
                    for (int i = 0 ; i < (n%m) ; i++)
                    {
                        newkey+=k[i];
                    }
                    for (int i = 0; i < s.size(); ++i)
                    {

//To make sure that the letters that will be sum is capital by using the ascii for it
                        if ( int(s[i]) >= 65 && int(s[i]) <= 90)
                        {
                            int n = 0;

                            n = int(s[i]) + int(newkey[i]);

                            n = n % 26;
                            n = n + 65;
                            char c=char(n);
                            nwstring+=c;



                        }
                        else
                        {
                            nwstring+= s[i];

                        }


                    }
//Prints the encrypted message
                    cout<< "new Meassage  = "<< nwstring <<endl;

                }
                else
                {
                    //check that the key less than 8
                    cout<<"key must be less than 8 "<<endl ;
                }

            }
            else
            {
//check that the string less than 80
                cout<<"string must be less than 80 "<<endl;
            }
//==================================================================

        }
        else if(encrypte == 2)
        {
            //get message from user
            cout<<"please enter your string(less than 80 character): " ;
            getline (cin, s);

//get key from user
            cout<<"please enter your key (less than 8 character): " ;
            getline(cin, k);
//to upper all words
            transform(s.begin(), s.end(), s.begin(), ::toupper);

            transform(k.begin(), k.end(), k.begin(), ::toupper);


            int n = s.size(), m = k.size() ;

            if(n < 80 )
            {

                if(m < 8)
                {

//==================================================
//Create a new key whose number of letters is equal to the number of the word
                    for (int i = 0 ; i < (n / m) ; i++ )
                    {
                        newkey+=k ;
                    }
                    for (int i = 0 ; i < (n%m) ; i++)
                    {
                        newkey+=k[i];
                    }


                    for (int i = 0; i < s.size(); ++i)
                    {
//To make sure that the letters that will be sum is capital by using the ascii for it
                        if ( int(s[i]) >= 65 && int(s[i]) <= 90)
                        {
                            int n = 0;

                            n = int(s[i]) - int(newkey[i]) + 26;
                            n = n % 26;
                            n = n + 65;

                            char c=char(n);
                            nwstring+=c;



                        }
                        else
                        {
                            nwstring+= s[i];

                        }
//Prints the decrypted message
                    }
                    cout<< "newsting = "<< nwstring <<endl;



                }
                else
                {
//check that the key less than 8
                    cout<<"key must be less than 8 "<<endl ;
                }

            }
            else
            {
//check that the string less than 80
                cout<<"string must be less than 80 "<<endl;
            }
//==================================================================
        }

       else if(encrypte == 3){
        exit(0);
       }
        else{
            cout<<"please enter valid number 1 for encryption 2 for decryption"<<endl;
        }
    //Ask the user if he want to use the cipher again
            cout<<"Do you want to continue  1 for yes/ 0 for no : ";
            cin>>again;
            cin.ignore();
    }

}
