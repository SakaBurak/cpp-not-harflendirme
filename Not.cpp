#include<iostream>

using namespace std;
//100-92 aras� AA    92-85 aras� BA    85-80 aras� BB     80-75 aras� CB      75-67 aras� CC     67-58 aras� DC     58-50 aras� DD   50 alt� FF
int main(){
	int Not;
	cout<<"Lutfen Notunuzu giriniz(0-100):";
	cin>>Not;
	
	if(Not<0 || Not>100){
		cout<<"Notunuz 0-100 Araliginda olmali!"<<endl;
		cout<<"Hatali not girdiniz!";
		return 0;
	}
	else if(Not>=92){
		cout<<"Notunuz:"<<Not<<" AA Aldiniz :)"<<endl;
	}
	else if(Not>=85){
		cout<<"Notunuz:"<<Not<<" BA Aldiniz :)"<<endl;
	}
	else if(Not>=80){
		cout<<"Notunuz:"<<Not<<" BB Aldiniz :)"<<endl;
	}
	else if(Not>=75){
		cout<<"Notunuz:"<<Not<<" CB Aldiniz :)"<<endl;
	}
	else if(Not>=67){
		cout<<"Notunuz:"<<Not<<" CC Aldiniz :)"<<endl;
	}
	else if(Not>=58){
		cout<<"Notunuz:"<<Not<<" DC Aldiniz :)"<<endl;
	}
	else if(Not>=50){
		cout<<"Notunuz:"<<Not<<" DD Aldiniz :)"<<endl;
	}
	else{
		cout<<"Notunuz:"<<Not<<" FF Aldiniz :)"<<endl;
	}
	return 0;
}
