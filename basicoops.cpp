#include<iostream>
 #include<cstring>
using namespace std;
class Hero{
    //properties
private:  
 int health;

 public:
 char *name;
 char level;
Hero(){
    cout<<"Constructor Called!"<<endl;
    name = new char[100];
}
//parameterised Constructor
Hero(int health){
  this->health=health;
}
Hero(int health,char level){
    this->level=level;
    this->health=health;

}
//copy constructor
Hero(Hero& temp){
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
   cout<<"copy constructor called!"<<endl;
   this->health=temp.health;
    this->level = temp.level;
}

void print(){
    cout<<endl;
    cout<<"{ Name :"<<this->name<<" ,";
    cout<<"Health :"<<this->health<<" ,";
    cout<<"Level : "<<this->level<<" }";
    cout<<endl;
}
int getHealth(){
    return health;
}
int getLevel(){
    return level;
}
void setHealth(int h){
    health = h;
}
void setLevel(char ch){
    level=ch;
}
void setName(char name[]){
    strcpy(this->name,name);
}

};
int main(){

Hero hero1;
hero1.setHealth(75);
hero1.setLevel('A');
char name[15]="Priyankar";
hero1.setName(name);

hero1.print();

Hero hero2(hero1);
hero2.print();
hero1.name[0] ='S';
hero1.print();
hero2.print();













//Hero ramesh(20, 'A');
//ramesh.print();
//copy constructor
//Hero s(ramesh);
//s.print();

   //dynamically
  // Hero *b = new Hero;
 // b->setLevel('B');
 // b->setHealth(85);
  
//cout<<b->level<<endl;
   
//cout<<b->getHealth()<<endl;*/
// Hero ramesh;
// cout << "Size of Ramesh : "<< sizeof(ramesh) <<endl;
 //use setter
// ramesh.setHealth(85);
 //ramesh.level='B';
 //cout<<"health is : "<<ramesh.getHealth()<< endl;
// cout<<"level is : "<<ramesh.level<<endl;

 //cout<<"size : "<<sizeof(h1)<<endl;
return 0;
}