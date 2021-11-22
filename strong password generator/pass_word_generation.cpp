#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<ctime>
#include<string>
#include<fstream>


using namespace std;

int flag = 1;
string pass;

void start(){
    system("cls");
    const char x = 219;
    cout<<"\t\t\t\t\tPASSWORD GENERATOR ";
    cout<<"\n\n\n\t\t\t\t LOADING... ";
    for(int i=0;i<35;i++){
        cout<<x;
        Sleep(i*10);
    }
}

int main(){

    class password{

        private:
        int  digits;
        long long int pass=0;


        


        long long int number(){
            
            for(int i=0;i<digits;i++){

               pass     =  pass*10 + (int)rand()%10;

            }

        ofstream pass_file("pass_file.txt",ios::app);
        pass_file << pass;
        pass_file <<"\n\n";
        pass_file.close();


            return pass;


        };

        
        string ALPHA_SMALL_CASE(){
            string pass;char c ;
            short int n;

        for(int i=0;i<digits;i++){
        
            c = char(97+(rand()%27));
            pass.push_back(c);

        }

       // for(int i=0;pass.size();i++){
            //cout<<pass[i];
        //}

        
        ofstream pass_file("pass_file.txt",ios::app);
        pass_file << pass;
        pass_file <<"\n\n";
        pass_file.close();

        return pass;




        };


            string ALPHA_CAPITAL_CASE(){
            string pass;char c ;
            short int n;

        for(int i=0;i<digits;i++){
        
            c = char(65+(rand()%27));
            pass.push_back(c);

        }

       // for(int i=0;pass.size();i++){
            //cout<<pass[i];
        //}

        
        ofstream pass_file("pass_file.txt",ios::app);
        pass_file << pass;
        pass_file <<"\n\n";
        pass_file.close();

        return pass;




        };



        string alphaNumeric(){
            string pass;
            int c = 1;

        for(int i = 0;i<digits;i++){
            c = ((rand()%2)+1);
            switch(c){
            case 1:
            pass.push_back(char((rand()%10)+ 48));
            break;
            case 2:
            pass.push_back(char((rand()%27) + 65));
            break;

            }

        }
        ofstream pass_file("pass_file.txt",ios::app);
        pass_file << pass;
        pass_file <<"\n\n";
        pass_file.close();

        return pass;


        };

        string special_char(){
            string pass;
            int x ;

            for(int i=0;i<digits;i++){
                x = (rand()%3)+1;
                if(x==1)
                pass.push_back((rand()%15)+33);
                else if(x ==2)
                pass.push_back((rand()%7)+58);
                else
                pass.push_back((rand()%6)+91);
            }

            ofstream pass_file("pass_file.txt",ios::app);
            pass_file << pass;
            pass_file <<"\n\n";
            pass_file.close();

        return pass;


        };

        string ultra_secure_password(){

            string pass;int s;

            for(int i=0;i<digits;i++){
                s = (rand()%6)+1;

                if(s==1){
                    pass.push_back((rand()%26)+65);

                }else if(s==2){
                    pass.push_back((rand()%26)+97);

                }else if(s==3){
                    pass.push_back((rand()%10)+48);

                }else if(s==4){
                    pass.push_back((rand()%16)+33);

                }else if(s==4){
                    pass.push_back((rand()%7)+58);

                }else if(s==5){
                     pass.push_back((rand()%6)+91);

                }else{
                     pass.push_back((rand()%4)+123);

                }


            }

            ofstream pass_file("pass_file.txt",ios::app);
            pass_file << pass;
            pass_file <<"\n\n";
            pass_file.close();

            return pass;



        };

        public:

        password(short int choice){

            srand((unsigned) time(0));

            if(choice == 0){
                exit(1);
            };


            cout<<"\n\n\t\t\t\t\tEnter the password length > ";
            cin>>digits;
            system("cls");


            

            switch(choice){


                case 1:
                cout<<number();
                break;

                case 2:
                cout<<ALPHA_CAPITAL_CASE();
                break;

                case 3:
                cout<<alphaNumeric();
                break;

                case 4:
                cout<<special_char();
                break;

                case 5: 
                cout<<ALPHA_SMALL_CASE();
                break;

                case 6:
                cout<<ultra_secure_password();
                break;


                

                

                default:
                cout<<"Enter valid number";




            }
                
        cout<<"\n\n\t\t\t\t\t password has been saved in file\n";
        Sleep(3000);
        
        system("cls");

            


            }


        

        password(string pass,int x){
            digits = x;
            srand((unsigned )time(0));
            int choice = (rand()%7)+1;



            
            switch(choice){


                case 1:
                pass.append(to_string(number()));
                break;

                case 2:
                cout<<pass.append(ALPHA_CAPITAL_CASE());
                break;

                case 3:
                cout<<pass.append(alphaNumeric());
                break;

                case 4:
                cout<<pass.append(special_char());
                break;

                case 5: 
                cout<<pass.append(ALPHA_SMALL_CASE());
                break;

                case 6:
                cout<<pass.append(ultra_secure_password());
                break;


                

                

                default:
                cout<<"Enter valid number";


        }
            ofstream pass_file("pass_file.txt",ios::app);
            pass_file << pass;
            pass_file <<"\n\n";
            pass_file.close();


        }

        
            


        

        



    };

//calling loading function 
    if(flag){
    start();
    flag = 0;
    Sleep(10);
    system("cls");
    }





//--------------------------------------
    short int choice;

    cout<<"\n\n\n \t\t\t\t\t  0: EXIT \n\t\t\t\t\t 1: NUMBER PASSWORD (LESS SECURE) \n\t\t\t\t\t 2: ALPHABETIC_CAPITAL_CASE PASSWORD(LESS SECURE )\n\t\t\t\t\t 3: ALPHA_NUMERIC PASSWORD(MEDIUM SECURE)> \n\t\t\t\t\t 4: SPECIAL_CHAR (MEDIUM SECURE) \n\t\t\t\t\t 5: ALPHA_SMALL_CASE (LESS SECURE) \n\t\t\t\t\t 6: ULTRA_SECURE_PASSWORD (HIGH SECURE) \n\t\t\t\t\t  7: CUSTOM_PASSWORD  * \n \t\t\t\t\t> ";
    cin>>choice;

    if(choice != 7)
    password obj(choice);
    else{
        cout<<"Enter your password";
        cin>>pass;
        password obj(pass,10);
    }
  


    main();



    return 0;



}