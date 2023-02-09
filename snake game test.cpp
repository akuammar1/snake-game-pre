#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

bool gameOver;
const int height=20;
const int width=20;

int x,y,fruitX,fruitY,score;

void Setup(){
    gameOver=false;
    x=width/2;
    y=height/2;
    fruitX = rand() %width;
    fruitY = rand() %height;
	}
void Draw(){
	
	system("CLS");

    for(int i=0;i<width;i++){
    	cout<<"#";
	}cout<<endl;
	
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			if(j==0 || j==width-1){
				cout<<"#";
			}else if(i==y && j==x){
				cout<<"O";
			}else if(i==fruitY && j==fruitX){
			cout<<"F";
			}else {
				cout<<"HYE";
			}
		}cout<<endl;
	}
	for(int i=0;i<width;i++){
		cout<<"#";
	}cout<<endl;
}
void Input(){}
void Logic(){}
  int main(){
  	
  	return 0;
  }
