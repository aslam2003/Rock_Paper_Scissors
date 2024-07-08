#include<iostream>

char playerchoice();
char computerchoice();
void showchoice(char choice);
void winner(char player,char computer);

void main(){
    
    char player;
    char computer;
    
    player=playerchoice();
    computer=computerchoice();
    
    showchoice(player);
    showchoice(computer);
    winner(player,computer);
    
}

char playerchoice(){
    
    char choice;
    do{
        std::cout<<"Enter your choice:('r' for rock,'s' for scissors,'p' for paper):";
        std::cin>>choice;
        
    }while(choice!='r' && choice!='p' && choice!='s');
    
    return choice;
}
char computerchoice(){
    
    char computer;
    srand(time(0));
    int num=(rand() % 3)+1;
    switch(num){
        case 1:
              computer='r';
              break;
        case 2:
              computer='s';
              break;
        case 3:
              computer='p';
              break;
    }
    
    return computer;
    
}
void showchoice(char choice){
    switch(choice){
        case 'r':
                std::cout<<"Choice is Rock!"<<"\n";
                break;
        case 's':
                std::cout<<"Choice is Scissor"<<"\n";
                break;
        case 'p':
                std::cout<<"Choice is Paper"<<"\n";
                break;
    }
}

void winner(char player,char computer){
     switch(player){
         case 'r':
                 if(computer=='p'){
                     std::cout<<"Computer is the winner";
                 }
                 else if(computer=='s'){
                     std::cout<<"Player is the winner";
                 }
                 else{
                     std::cout<<"No winner";
                 }
                 break;
        case 's':
                 if(computer=='r'){
                     std::cout<<"Computer is the winner";
                 }
                 else if(computer=='p'){
                     std::cout<<"Player is the winner";
                 }
                 else{
                         std::cout<<"No winner";
                 }
        case 'p':
                if(computer=='r'){
                     std::cout<<"Player is the winner";
                 }
                else if(computer=='s'){
                     std::cout<<"Computer is the winner";
                 }
                 
                else{
                         std::cout<<"No winner";
                 }
                
                 
     }
}

