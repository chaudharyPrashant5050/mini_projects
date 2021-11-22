#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<vector>
#include<conio.h>

using namespace std;

int flag = 1;

void start(){

    system("cls");
    cout<<"WELCOME TO";
    cout<<"\n\n\t\t\t\t KAUN BANEGA CRORPATI!\n\n\n\n";

    cout<<"\t\t\t\t Loading...";
    char x = 219;


    for(int i=0;i<35;i++){
        cout<<x;
        Sleep(i*10);

    };

    system("cls");

    ::flag = 0;

}

int main(){


    class kbc{


            private:
            vector<char>ans;
            char correct_ans[5] = {'a','a','d','b'};
            int q = 1;
            int score = 0;


            void check_ans(){

                

                if(!(ans[q-1] == correct_ans[q-1])){
                    system("color 04");
                    cout<<"\n \t\t\t\t\tWRONG ANSWER );";

                    Sleep(3000);
                    system("cls");
                    system("color 07");


                }else{
                    system("color 02");
                    cout<<"\n \t\t\t\t\tCORRECT ANSWER :)";
                    score += 10;
                    Sleep(3000);
                    system("cls");
                    system("color 07");
                    
                }



            }


            void question(){
                char current_ans;
                //all question will be here only;

                //q1
                system("cls");

                cout<<"\n\n\n\t\t\t\t\tQuestion "<<q<<"\n\t\t\t\t\tWhich state population is heighest in india: \n\t\t\t\t\tA: Uttar Pradesh                   B: Delhi\n\t\t\t\t\tC: Rajesthan                       D: Uttrakhand\n\n\t\t\t\t\tANS> ";
                cin>>current_ans;
                ans.push_back(current_ans);
                check_ans();

                q++;

                cout<<"\n\n\n\t\t\t\t\tQuestion "<<q<<"\n\t\t\t\t\tWhich is the hottest place in india: \n\t\t\t\t\tA: churu               B: nainital\n\t\t\t\t\tC: lucknow                       D: Uttrakhand\n\n\t\t\t\t\tANS> ";
                cin>>current_ans;
                ans.push_back(current_ans);
                check_ans();

                q++;

                cout<<"\n\n\n\t\t\t\t\tQuestion "<<q<<"\n\t\t\t\t\tWhich is the driest place in india: \n\t\t\t\t\tA: churu               B: nainital\n\t\t\t\t\tC: lucknow                       D: Jaisalmer\n\n\t\t\t\t\tANS> ";
                cin>>current_ans;
                ans.push_back(current_ans);
                check_ans();

                q++;


                cout<<"\n\n\n\t\t\t\t\tQuestion "<<q<<"\n\t\t\t\t\tWhich is the raniest place in india: \n\t\t\t\t\tA: churu               B: Mowsyram\n\t\t\t\t\tC: lucknow                  D: Jaisalmer\n\n\t\t\t\t\tANS> ";
                cin>>current_ans;
                ans.push_back(current_ans);
                check_ans();

                q++;

                cout<<"result: \n\n\t\t\t Your score is "<<score;

                Sleep(3000);




                
               

                


            }

            public:
            kbc(){
                question();

                
            }


    };


    if(flag)
    start();


    kbc c1;

  




}