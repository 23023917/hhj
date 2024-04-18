#include <iostream>
#include <String>
using namespace std;

int main(){
String gender ;
cout<<"are you a young woman or young man?"<<endl;
cin>>gender;

cout<<"please select your partner type:"<<endl;

cout <<"1.openness to experience "<<endl;
cout<<"2.optimistic"<<endl;
cout<<"3.reserved"<<endl;
cout<<"4.empathetic"<<endl;
cout<<"5.neurotical"<<endl;
cout<<"6.analytical"<<endl;

Int choice;
cout<<"enter the number corresponding to your partner type:";
cin>>choice;

if(choice==1){
cout<<"you selected a partner who is creative and willing to try new things!:"<<endl;
}

else if(choice==2){
cout<<"you selected a partner who generally has a positive outlook on life, focuses on opportunities rather than obstacles!"<<endl;
}

else if(choice==3){
cout<<"you selected a partner who is more of an introvert,shy and values quiet time for reflection!"<<endl;
}

else if(choice==4){
cout<<"you selected a partner who is highly attuned to other's emotions, caring and compassionate!"<<endl;
}

else if(choice==5){
cout<<"you selected a partner who has emotional instability, anxiety and vulnerable to stress!"<<endl;
}

else if(choice==6){
cout<<"you selected a partner who enjoys solving problem,logical thinker and values facts!"<<endl;
}

else {
cout<<"sorry we couldn't find a compatible partner based on your preferences!"<<endl;
}

return 0;
}
