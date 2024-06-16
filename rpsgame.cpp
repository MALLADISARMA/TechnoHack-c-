#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    string player;
    string opponent;
    int playerscore=0;
    int opponentscore=0;
    string rps[]={"rock","paper","scissors"};
    srand((unsigned int)time(NULL));
    while(true){
      cout<<"enter (rock,paper,scissors: )";
      getline(cin,player);
      if(player!="rock"&&player!="paper"&&player!="scissors"){
        break;
      }
      opponent=rps[rand()%3];
      cout<<"opponent chooses "<<opponent<<endl;
      if(player==opponent){
        playerscore++;opponentscore++;
      }
      else if(player=="rock"){
        if(opponent=="scissors") playerscore++;
        else if(opponent=="paper") opponentscore++;
      }
      else if(player=="paper"){
           if(opponent=="scissors") opponentscore++;
           else if(opponent=="rock") playerscore++;
      }
      else if(player=="scissors"){
        if (opponent=="paper") playerscore++;
        else if(opponent=="rock") opponentscore++;
      }
      cout<<"player: "<<playerscore<<"opponent: "<<opponentscore;
    }
    cout<<endl;
    cout<<"player: "<<playerscore<<" "<<"opponent: "<<opponentscore;
    if(playerscore>opponentscore) cout<<"player wins!"<<endl;
    else if(playerscore==opponentscore) cout<<"tie!"<<endl;
    else cout<<"opponent wins!"<<endl;
    cout<<endl;

}