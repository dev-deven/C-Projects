//Created BY: Devendra Patil
//PCCOE COLLAGE
#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include <windows.h>
using namespace std;
class tictactoe
{
  public: char bord[3][3];
          string player1,player2;
          int score1,score2,total;
          tictactoe()
          {
              score1=0;
              score2=0;
              total=0;
          }
    void welcome_screen()
    {
        cout<<"  _____   _   ____    _____   ____   ____    _____   ____   _____"<<endl;
        cout<<" /__ __| | | /   _]  /__ __| /  _ | /   _|  /__ __| /  _ | /  __/"<<endl;
        cout<<"   | |   | | |  /      / |   | / ]| |  /      | |   | / || |  |___ " <<endl;
        cout<<"   | |   | | |  {__    | |   | |-|| |  |__    | |   | |_/| |  /_"<<endl;
        cout<<"   |_|   [ ] (____/    |_/   |_/ || [____/    |_|   |____/ {____] "<<endl;


cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"  "<<endl;
        cout<<"##     ##    #######        #####"<<endl;
        cout<<"##     ##   ##     ##      ##   ##"<<endl;
        cout<<"##     ##          ##     ##     ##"<<endl;
        cout<<"##     ##    #######      ##     ## "<<endl;
        cout<<" ##   ##    ##            ##     ##"<<endl;
        cout<<"  ## ##     ##        ###  ##   ##"<<endl;
        cout<<"   ###      ######### ###   ##### "<<endl;
        cout<<"  "<<endl;
        cout<<"  "<<endl;
        cout<<"  "<<endl;
        cout<<"  "<<endl;
        Sleep(3000);
    }
    void end_banner()
    {



        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" #####   ######  #######    #    ####### ####### ######          ######  #     # "<<endl;
        cout<<"#     #  #     # #         # #      #    #       #     #         #     #  #   # "<<endl;
        cout<<"#        #     # #        #   #     #    #       #     #         #     #   # # "<<endl;
        cout<<"#        ######  #####   #     #    #    #####   #     #         ######     #      ##### "<<endl;
        cout<<"#        #   #   #       #######    #    #       #     #         #     #    # "<<endl;
        cout<<"#     #  #    #  #       #     #    #    #       #     #         #     #    #"<<endl;
        cout<<" #####   #     # ####### #     #    #    ####### ######          ######     #"<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<" ######  ####### #     # ####### #     # ######  ######     #        ######     #    ####### ### # "<<endl;
        cout<<" #     # #       #     # #       ##    # #     # #     #   # #       #     #   # #      #     #  #"<<endl;
        cout<<" #     # #       #     # #       # #   # #     # #     #  #   #      #     #  #   #     #     #  #  "<<endl;
        cout<<" #     # #####   #     # #####   #  #  # #     # ######  #     #     ######  #     #    #     #  # "<<endl;
        cout<<" #     # #        #   #  #       #   # # #     # #   #   #######     #       #######    #     #  #"<<endl;
        cout<<" #     # #         # #   #       #    ## #     # #    #  #     #     #       #     #    #     #  # "<<endl;
        cout<<" ######  #######    #    ####### #     # ######  #     # #     #     #       #     #    #    ### ####### "<<endl;


    }
    void creat_grid()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                bord[i][j]='-';
            }
        }
    }
    void display_grid()
    {

       cout<<"                        1."<<player1<<" [ X ]                 2."<<player2<<" [ O ]" <<endl;
       cout<<"                       ========================================================="<<endl;
       cout<<"                       +       PLAYER$                         SCORE#          +"<<endl;
       cout<<"                       +      1."<<player1.at(0)<<"[ X ]                          "<<score1<<"/"<<total<<"            +"<<endl;
       cout<<"                       +      2."<<player2.at(0)<<"[ O ]                          "<<score2<<"/"<<total<<"            +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       +                 "<<bord[0][0]<<"    |    "<<bord[0][1]<<"    |    "<<bord[0][2]<<"                 +"<<endl;
       cout<<"                       +              "<<"----------------------------             +"<<endl;
       cout<<"                       +                 "<<bord[1][0]<<"    |    "<<bord[1][1]<<"    |    "<<bord[1][2]<<"                 +"<<endl;
       cout<<"                       +              "<<"----------------------------             +"<<endl;
       cout<<"                       +                 "<<bord[2][0]<<"    |    "<<bord[2][1]<<"    |    "<<bord[2][2]<<"                 +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       +                                                       +"<<endl;
       cout<<"                       ========================================================="<<endl;
    }
    void start_info()
    {
        cout<<"Enter the Name of the Player 1 [ X ] : ";
        cin>>player1;
        cout<<endl;

        cout<<"Enter the Name of the Player 2 [ O ] " ;
        cin>>player2;
        system("CLS");
        cout<<endl;
        cout<<"How many round of match do you want : "<<endl;
        int choice;
        cout<<"1. BEST OF [1] "<<endl;
        cout<<"2. BEST OF [3] "<<endl;
        cout<<"3. BEST OF [5] "<<endl;
        cout<<"4. BEST OF [7] "<<endl;
        rechoose :
        cin>>choice;
        switch (choice)
        {
        case 1:
            total=1;
            break;
        case 2:
            total=3;
            break;
        case 3:
            total=5;
            break;
        case 4:
            total=7;
            break;
        default:
           cout<<"Please choose between 1-4"<<endl;
           goto rechoose;
            break;
        }
    system("CLS");
    }

    void play()
    {
        int round=0;
        do{
            cout << '\n' << "Press ENTER key to continue...";
            cin.get();
          } while (cin.get() != '\n');
        for(int a=0;a<total;a++)
        {
        system("CLS");
        creat_grid();
        display_grid();
        int turn=0;
        char player;
        int key;
        for(int i=0;i<9;i++)
        {

            if(turn%2==0)
            {
                player='X';
            }
            else
            {
                player='O';
            }
        if(player=='X')
        {
            cout<<player1<<"'s  [ "<<player<<" ] Turn : "<<endl;
        }
        else
        {
            cout<<player2<<"'s  [ "<<player<<" ] Turn : "<<endl;
        }


        cin>>key;
        system("CLS");
        if(key==1&&bord[2][0]=='-')
        {
            bord[2][0]=player;
            display_grid();
        }
         else if(key==2&&bord[2][1]=='-')
        {
           bord[2][1]=player;
            display_grid();
        }
         else if(key==3&&bord[2][2]=='-')
        {
            bord[2][2]=player;
            display_grid();
        }
         else if(key==4&&bord[1][0]=='-')
        {
            bord[1][0]=player;
            display_grid();
        }
         else if(key==5&&bord[1][1]=='-')
        {
            bord[1][1]=player;
            display_grid();
        }
         else if(key==6&&bord[1][2]=='-')
        {
            bord[1][2]=player;
            display_grid();
        }
         else if(key==7&&bord[0][0]=='-')
        {
            bord[0][0]=player;
            display_grid();
        }
         else if(key==8&&bord[0][1]=='-')
        {
            bord[0][1]=player;
            display_grid();
        }
         else if(key==9&&bord[0][2]=='-')
        {
            bord[0][2]=player;
            display_grid();
        }

        else
        {
            cout<<"Position is already occupied : "<<endl;
            display_grid();
            Sleep(1000);
            i--;
            turn--;
        }
        turn++;
            if (bord[0][0] == 'X' && bord[0][1] == 'X' && bord[0][2] == 'X'||bord[0][0]=='O'&&bord[0][1]=='O'&&bord[0][2]=='O')
            {
                if(bord[0][0]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;

            }
            else if (bord[1][0] =='X'&&bord[1][1]=='X'&&bord[1][2] == 'X'||bord[1][0]=='O'&&bord[1][1]=='O'&&bord[1][2] == 'O')
            {
                 if(bord[1][0]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else if (bord[2][0]=='X'&&bord[2][1]=='X'&&bord[2][2] == 'X'||bord[2][0]=='O'&&bord[2][1]=='O'&&bord[2][2] == 'O')
            {
                 if(bord[2][0]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else if (bord[0][0]=='X'&&bord[1][0]=='X'&&bord[2][0] == 'X'||bord[0][0]=='O'&&bord[1][0]=='O'&&bord[2][0] == 'O')
            {
                 if(bord[0][0]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else if (bord[0][1]=='X'&&bord[1][1]=='X'&&bord[2][1] == 'X'||bord[0][1]=='O'&&bord[1][1]=='O'&&bord[2][1] == 'O')
            {
                 if(bord[0][1]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else if (bord[0][2]=='X'&&bord[1][2]=='X'&&bord[2][2] == 'X'||bord[0][2]=='O'&&bord[1][2]=='O'&&bord[2][2] == 'O')
            {
                 if(bord[0][2]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else if (bord[0][0]=='X'&&bord[1][1]=='X'&&bord[2][2] == 'X'||bord[0][0]=='O'&&bord[1][1]=='O'&&bord[2][2] == 'O')
            {
                 if(bord[0][0]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else if (bord[0][2]=='X'&&bord[1][1]=='X'&&bord[2][0] == 'X'||bord[0][2]=='O'&&bord[1][1]=='O'&&bord[2][0] == 'O')
            {
                 if(bord[0][2]=='X')
                {
                    cout<<"HURRY  : "<<player1<<" [x] YOU WON"<<endl;
                    score1++;
                }
                else
                {
                    cout<<"HURRY  : "<<player2<<" [0] YOU WON"<<endl;
                    score2++;
                }
                    break;
            }
            else
            {
                cout<<"MATCH DRAW : TRY AGAIN ;)"<<endl;
            }



        }
        round++;
        cout<<" ROUND "<<round<<"  OUT OF  "<<total<<"  | completed..."<<endl;
        if(round<total)
        {
            do{
            cout << '\n' << "Press ENTER key to continue...";
            cin.get();
              }while (cin.get() != '\n');
        }

    }
    if(score1>score2)
    {
        system("CLS");
        display_grid();
        cout<<"PLAYER 1     NAME :    "<<player1<<"  [ X ] IS WINNER!!!"<<endl;
    }
    else if(score2>score1)
    {
        system("CLS");
        display_grid();
        cout<<"PLAYER 2     NAME :    "<<player2<<"  [ O ] IS WINNER!!!"<<endl;
    }
    else
    {
        cout<<"Sorry Error or Draw occurs!! "<<endl;
    }



    }
};
int main()
{
    tictactoe game;
    again_newName :
    game.welcome_screen();
    game.start_info();
   again :
    game.play();
    game.end_banner();
    char play_again;
    cout<<"Do you wnat to play Again...(Y/N)"<<endl;
    cin>>play_again;
    if(play_again=='y'||play_again=='Y')
    {
        char name_change;
        cout<<"Change the name of the players :(Y/N)"<<endl;
        cin>>name_change;
        if(name_change=='N'||name_change=='n')
       {
            system("CLS");
            game.welcome_screen();
            goto again;
       }
       else
       {
           system("CLS");
           goto again_newName;

       }
    }
    else
    {
        cout<<"THANK YOU "<<endl;
    }


    return 0;
}
