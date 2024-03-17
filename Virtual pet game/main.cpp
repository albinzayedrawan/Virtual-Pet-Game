#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
    
using namespace std;
string PupName;

void Score() {
    void Game();
	void Menu();
	string ReadPupLine;
	char ReturnGame;
    ifstream FromPup;
	FromPup.open("PuppyScore.txt");
	
	while (getline(FromPup, ReadPupLine)){
		cout<<endl;
		cout<<endl;
        cout<<"Here is your score: "<<ReadPupLine<<endl;
	}
	FromPup.close();
	cout<<endl;
	cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
	cout<<endl;
    cout<<"Press P to keep playing or M to return to menu: ";
	cin>>ReturnGame;
	
	while (!(ReturnGame =='p' || ReturnGame  == 'P' || ReturnGame  =='m' || ReturnGame  == 'M')){
		cout<<"Invalid, please enter Y or N: ";
		cin>>ReturnGame;}
	
	if (ReturnGame=='P' || ReturnGame== 'p'){
		return Game();}
    
	else if (ReturnGame=='M' || ReturnGame== 'm'){
		cout<<"GoodBye! ૮ ˆﻌˆ ა ";
		return Menu();}
}


void Game() {
    
    int RandomMood;
	void Menu();
    char GoBack;
    int Hunger= 5, Fun= 5, Hygine=5;
    char Feed, Play, Bath;
    char Choice1;
	ofstream writetopup;
    
	srand(time(0));
    RandomMood = rand()%3+1;
	cout<<endl;
	cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
	cout<<endl;
	cout << "Do you want to check "<<PupName<< "'s mood? (Y/N): ";
	cin>>Choice1;
	
while(!(Choice1 =='Y' || Choice1 == 'y' || Choice1 == 'N' || Choice1 == 'n')){
		cout<<"Invalid, enter Y or N only: ";
		cin>>Choice1;}
	
	
if (Choice1=='Y' || Choice1== 'y'){
	
    if(RandomMood==1){
        Hunger= 2;
		cout<<endl;
		cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
		cout<<endl;
        cout<<PupName<<" is feeling hungry, press F to feed "<<PupName<<": ";
        cin>>Feed;
		
    if(Feed=='F' || Feed=='f'){
		cout<<endl;
		cout<<endl;
          cout<<PupName<<" is full now ｡:ﾟ૮ ˶ˆ ﻌ ˆ˶ ა ﾟ:｡"<<endl;
		Hunger-=5;
		Hunger--;
	}
      else
		{
			cout<<endl;
			cout<<endl;
			cout<<" Wow are you really not going to feed "<<PupName<<"? you monster! ૮ ◞ ﻌ ◟ ა"<<endl;
			Hunger+=4;
			Hunger++;
			
			
		}
		writetopup.open("PuppyScore.txt");
		writetopup<<"Hygine level: "<<Hygine<<endl;
		writetopup<<"Fun level: "<<Fun<< endl;
		writetopup<<"Hunger level: "<<Hunger<< endl;
		writetopup.close();
		
		cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
		cout<<endl;
		cout<<"Do you want to play again? (Y/N): ";
    cin>>GoBack;
		
		while (!(GoBack =='n' || GoBack =='N'|| GoBack =='y' || GoBack =='Y')){ cout<<"invalid, enter Y or N: ";
			cin>>GoBack;
			}
	if(GoBack=='y' || GoBack=='Y'){
		return Game();}
	
    else if(GoBack=='n' || GoBack=='N'){
        cout<<"GoodBye! "<<endl;
        return Score();

	}
}

    if(RandomMood== 2){
        Fun=2;
		cout<<endl;
		cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
		cout<<PupName<<" is feeling Bored, press P to play with "<<PupName<<": ";
        cin>>Play;
		cout<<endl;
        if(Play=='P' || Play=='p'){
			cout<<endl<<endl;
		  cout<<PupName<<" is very entertained —̳͟͞͞♥ ૮ ○ﻌ ○ ა"<<endl;
			cout<<endl;
		  cout<<"Seems like "<<PupName<<" Loves you a lot! ૮ ˶′ﻌ ‵˶ ა"<<endl;
            Fun+=5;
			Fun++;
		}
        else {
			cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
			cout<<endl;
			cout<<"Wow are you really not going to play with "<<PupName<<"? how cruel!  ૮ ´• ﻌ ´• ა "<<endl;
            Fun-=1;
			Fun--;
		}
		writetopup.open("PuppyScore.txt");
		writetopup<<"Hygine level: "<<Hygine<<endl;
		writetopup<<"Fun level: "<<Fun<< endl;
		writetopup<<"Hunger level: "<<Hunger<< endl;
		writetopup.close();
		cout<<endl;
		cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
		cout<<endl;
		cout<<"Do you want to play again? (Y/N): ";
	cin>>GoBack;
		
		while (!(GoBack =='n' || GoBack =='N'|| GoBack =='y' || GoBack =='Y')){ cout<<"invalid, enter Y or N: ";
			cin>>GoBack;
			}
	if(GoBack=='y' || GoBack=='Y'){
		return Game();}
	
	else if(GoBack=='n' || GoBack=='N'){
		cout<<"GoodBye! "<<endl;
		return Score();

	}
  }

        
        if(RandomMood== 3) {
            cout<<PupName<<" is feeling Uncomfortable, press B to Bath "<<PupName<<": ";
            Hygine=2;
            cin>>Bath;
            if(Bath=='B' || Bath=='b'){
				cout<<endl;
              cout<<PupName<<" is feelinng fresh and clean! ૮ ᴖﻌᴖა "<<endl;
                Hygine+=1;
				Hygine++;}
				
			
			else {
				cout<<endl<<endl;
				cout<<" Wow are you really not going to bath "<<PupName<<"?, "<<PupName<<" is feeling more uncomfortable  ૮ ´• ﻌ ´• ა "<<endl;
				Hygine-=1;
				Hygine--;
				
			}
			writetopup.open("PuppyScore.txt");
			writetopup<<"Hygine level: "<<Hygine<<endl;
			writetopup<<"Fun level: "<<Fun<< endl;
			writetopup<<"Hunger level: "<<Hunger<< endl;
			writetopup.close();
			
			cout<<endl<<endl;
			
			cout<<"Do you want to play again? (Y/N): ";
		cin>>GoBack;
			
			while (!(GoBack =='n' || GoBack =='N'|| GoBack =='y' || GoBack =='Y')){ cout<<"invalid, enter Y or N: ";
				cin>>GoBack;
				}
		if(GoBack=='y' || GoBack=='Y'){
			return Game();}
		
		else if(GoBack=='n' || GoBack=='N'){
			cout<<"GoodBye! "<<endl;
			return Score();

		}
		}
	
}
	
else if (Choice1=='N' || Choice1=='n'){
	cout<<endl<<endl;
	cout<<endl<<endl;
     cout<<"Good bye "<<PupName<<" Will miss you ⋆୨୧˚૮ ＾ﻌ＾ა˚୨୧⋆ "<<endl;
	Menu();}
	
}



void Name(){
	cout<<endl<<endl;
	cout<<endl<<endl;
	cout<<"█▄░█ ▄▀█ █▀▄▀█ █▀▀   █▄█ █▀█ █░█ █▀█   █▀█ █░█ █▀█ █▀█ █▄█ █"<<endl;
	cout<<"█░▀█ █▀█ █░▀░█ ██▄   ░█░ █▄█ █▄█ █▀▄   █▀▀ █▄█ █▀▀ █▀▀ ░█░ ▄"<<endl;
	cout<<endl<<endl;
    ofstream PuppyScore;
    PuppyScore.open("PuppyName.txt");

        cout <<"Give your puppy a name! ૮ ˙ ﻌ˙ ა : ";
        cin>>PupName;
    PuppyScore<< PupName << endl;
	cout<<endl;
        cout<<PupName<< "! What a Cool name! ૮ ˆﻌˆ ა "<<endl;
    PuppyScore.close();
        Game();
}




void HowToPlay() {
	void Menu();
    char Back;
	cout<<endl<<endl;
	cout<<"█░█░█ █▀▀ █░░ █▀▀ █▀█ █▀▄▀█ █▀▀   ▀█▀ █▀█   ▀█▀ █░█ █▀▀   █░█ █ █▀█ ▀█▀ █░█ ▄▀█ █░░   █▀█ █▀▀ ▀█▀   █▀▀ ▄▀█ █▀▄▀█ █▀▀"<<endl;
	cout<<"▀▄▀▄▀ ██▄ █▄▄ █▄▄ █▄█ █░▀░█ ██▄   ░█░ █▄█   ░█░ █▀█ ██▄   ▀▄▀ █ █▀▄ ░█░ █▄█ █▀█ █▄▄   █▀▀ ██▄ ░█░   █▄█ █▀█ █░▀░█ ██▄"<<endl;
	cout<<endl<<endl;
    cout<<"This game is similar to togomatchi"<<endl;
	cout<<endl;
    cout<<"The game will start by naming your puppy"<<endl;
    cout<<"Then, based on the puppy's mood, you'll either have to feed, bath or play with the puppy"<<endl;
	cout<<endl;
    cout<<"Have fun! Enter 'M' to return to the menu!: ";
	cin>>Back;
	cout<<endl;
	cout<<"~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~^~"<<endl;
	cout<<endl;

	
		
	while(!(Back == 'M' || Back == 'm'))
	{
		cout<<"Invalid, plese enter M or m: ";
		cin>>Back;
		}
	return Menu();
	
}
		

	

void Menu(){
int MenuNum;
cout<<endl<<endl;
	cout<<"1- How to Play ฅ^•ﻌ•^ฅ"<<endl<<endl;
	cout<<"2- Name your pet ૮ฅ・ﻌ・აฅ"<<endl<<endl;
	cout<<"3- Play ૮ฅ・ﻌ・აฅ"<<endl<<endl;
	cout<<"4- Scores ໒(＾ᴥ＾)७"<<endl<<endl;
	cout<<"5- Quit ໒( = ᴥ =)ʋ"<<endl<<endl;
	cout<<endl;
	cout<<"Choose a number from the menu: ";
	
	cin>>MenuNum;
cout<<endl<<endl;


switch (MenuNum)

{
	case 1 :HowToPlay();
		break;

	case 2 : Name();
		break;

	case 3 : Game();
		break;
		
    case 4 : Score();
		break;
	
	case 5 : cout<<"See you next time!"<<endl; return;
		break;
		
	default:
		cout<<"Invalid, restart game and enter a number from the menu only (1-5) "<<endl;
		break;

	
}

}


    
    
    

int main(){
	cout<<endl<<endl;
	cout<<"██╗   ██╗██╗██████╗ ████████╗██╗   ██╗ █████╗ ██╗         ██████╗ ███████╗████████╗     ██████╗  █████╗ ███╗   ███╗███████╗"<<endl;
	cout<<"██║   ██║██║██╔══██╗╚══██╔══╝██║   ██║██╔══██╗██║         ██╔══██╗██╔════╝╚══██╔══╝    ██╔════╝ ██╔══██╗████╗ ████║██╔════╝"<<endl;
	cout<<"██║   ██║██║██████╔╝   ██║   ██║   ██║███████║██║         ██████╔╝█████╗     ██║       ██║  ███╗███████║██╔████╔██║█████╗  "<<endl;
	cout<<"╚██╗ ██╔╝██║██╔══██╗   ██║   ██║   ██║██╔══██║██║         ██╔═══╝ ██╔══╝     ██║       ██║   ██║██╔══██║██║╚██╔╝██║██╔══╝  "<<endl;
	cout<<" ╚████╔╝ ██║██║  ██║   ██║   ╚██████╔╝██║  ██║███████╗    ██║     ███████╗   ██║       ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗"<<endl;
	cout<<"  ╚═══╝  ╚═╝╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝╚══════╝    ╚═╝     ╚══════╝   ╚═╝        ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝"<<endl;
	cout<<endl<<endl;
    cout<<"     █▄░█ ▄▀█ █▄█ █▀▀ █▀▀   ▄▄   █▀█ ▄▀█ █░█░█ ▄▀█ █▄░█   ▄▄   █░█ █░█ █▀▄ ▄▀█   ▄▄   ▄▀█ █░░ █▀▄ ▄▀█ █▄░█ ▄▀█"<<endl;
	cout<<"     █░▀█ █▀█ ░█░ ██▄ █▀░   ░░   █▀▄ █▀█ ▀▄▀▄▀ █▀█ █░▀█   ░░   █▀█ █▄█ █▄▀ █▀█   ░░   █▀█ █▄▄ █▄▀ █▀█ █░▀█ █▀█"<<endl;
	cout<<endl<<endl;
	
	Menu();
}
















