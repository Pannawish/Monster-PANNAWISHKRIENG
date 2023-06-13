#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
int get_hp(){return hp;}
void operator++();
void operator--();
void operator+=(int); // += hp
void set_hp(int a){hp=a;}
void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
//void heal(); // your idea to help revive hp
void print(); // to print all data
bool not_dead() { return hp>0;  }
void set_all();
string get_name(){return name;}
monster(string, int=0,int=0);
monster();
//Alt+126
~monster();

};



void monster::print(){
  cout<<"Monster "<<name;
  cout<<" hp:"<<hp<<" potion:   "<<potion<<endl;
  
}
void monster::Attack(monster & b){// x.Attack(y)
     cout<<"Monster "<<name<<" attack monster "<<b.get_name()<<endl;
     if(hp>b.get_hp()){
         // Some action?
       b.set_hp(0);
       cout<<"Monster "<<b.get_name()<<" is dead"<<endl;
     }
  else cout<<"Monster "<<name<<" is dead"<<endl;
  hp=0;
  
}

monster::~monster(){
  cout<<"Monster "<<name<<" is gone."<<endl;
  //indicate which monster is gone
}
monster::monster(){
  /*cout<<"Name: ";
  cin>>name;
  cout<<"HP: ";
  cin>>hp;
  cout<<"Potion: ";
  cin>>potion;
  cout<<endl;*/
 /* Ask for input */
}
monster::monster(string n ,int p,int h){

  //set var
  name=n;
  hp=h ;
  potion=p;
  cout<<"monster "<<name <<" is here HAHAHA"<<endl;
  
}
void monster::set_all(){
  cout<<"Name: ";
  cin>>name;
  cout<<"HP: ";
  cin>>hp;
  cout<<"Potion: ";
  cin>>potion;
  cout<<endl;
}


#endif
