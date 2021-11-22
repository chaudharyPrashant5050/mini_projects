#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main(){

    class clock_13{

        private:
        //const int  max_bullet = 10;
        int bullet = 0;
        bool safety_lock = 1;

        public:
         int fire_single(){
            if(safety_lock){
                cout<<"disable the safety lock\n";
                return 0;

            }
            if(bullet>0){
                system("cd P:\\c++\\projects\\gun");
                system("sound.mp3");
                Sleep(700);
                
                system("taskkill -f -im wmplayer.exe");
                bullet--;
               cout<<"fire";
            }else{
                cout<<"running out of bullets\n reload the gun\n";
                return 0;
            }
        

        }

        void disable_safety_lock(){
            safety_lock = 0;
        }
        void enable_safety_lock(){
            safety_lock = 1;
        }

        void reload(){
            this->bullet = 1;
            cout<<bullet;
            cout<<"gun reloaded\n";
        }

        void full_fire(){
            while(bullet){
                system("cd P:\\c++\\projects\\gun");
                system("sound.mp3");
                Sleep(700);
                system("taskkill -f -im wmplayer.exe");
                bullet--;

               

            }
        }

        clock_13(){
            reload();
            enable_safety_lock();
        }


    };


    clock_13 gun1;
    gun1.disable_safety_lock();
    gun1.fire_single();
    gun1.reload();
    gun1.fire_single();
    gun1.reload();
    gun1.fire_single();
    gun1.fire_single();
    
   


}