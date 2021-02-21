//Kelompok 6
//Putri Adelia
//Reny Anggreini
//Silviana Maharani
//Gusti Agung Kurniawan

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

//Global-Variables----------------------------
string player1Name;
int	player1Health = 100,
	player1Att,
	player1Def,
	totalAttackPlayer1;

string player2Name;
int	player2Health = 100,
	player2Att,
	player2Def,
	totalAttackPlayer2;

//--------------------------------------------

//Functions-----------------------------------
void player1(){
	cout<<player1Name<<" Temporary Status"<<endl;
	cout<<"=============================="<<endl;
	cout<<"Health : "<<player1Health<<endl;
	cout<<"Attack : "<<player1Att<<endl;
	cout<<"Defense: "<<player1Def<<endl;
	cout<<"=============================="<<endl;
}

void player2(){
	cout<<player2Name<<" Temporary Status"<<endl;
	cout<<"=============================="<<endl;
	cout<<"Health : "<<player2Health<<endl;
	cout<<"Attack : "<<player2Att<<endl;
	cout<<"Defense: "<<player2Def<<endl;
	cout<<"=============================="<<endl;
}
//--------------------------------------------

//Return-Functions----------------------------
int player1Attack(){
	return rand() % 7 + 4;
}

int player1Defense(){
	return rand() % 4;
}

int player2Attack(){
	return rand() % 7 + 4;
}

int player2Defense(){
	return rand() % 4;
}

//--------------------------------------------

int main(){
	srand((unsigned)time(NULL));
	
	player1Att = player1Attack();
	player1Def = player1Defense();
	
	player2Att = player2Attack();
	player2Def = player2Defense();
	
	totalAttackPlayer1 = player1Att - player2Def;
	totalAttackPlayer2 = player2Att - player1Def;
	
/*	player1Health = player2Att - player1Def;
	player2Health = player1Att - player2Def;*/
	
	cout<<"Welcome To RPG Text-Based On C++ !!!"<<endl;
	
	cout<<"Insert Player 1 Name : ";
	getline(cin,player1Name);
	cout<<"Insert Player 2 Name : ";
	getline(cin,player2Name);
	
	while(player1Health > 0 && player2Health > 0){
		player1();
		player2();
		break;
	}
}



