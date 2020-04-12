# include <iostream>
# include <cstdlib>

using namespace std;


int main()
{
   srand(time(0));
   int secretNum = (rand()%10)+1 ;
   int guess;
   int guessCount = 0;
   int guessLimit = 4;
   bool outofguesses = false;


   while (guess != secretNum && !outofguesses){
       if (guessCount < guessLimit){
           cout<<"Enter guess from 0 to 10 : ";
           cin>>guess;
           guessCount++;
       }else{
           outofguesses = true;
       }
   }

    if (outofguesses){
        cout<<"Better luck next time"<<endl;
        cout<<"Number was: "<<secretNum<<endl;
    }
    else{
        cout<<"Your are the champ"<<endl;
        cout<<"Number was: "<<secretNum<<endl;

    }



    return 0 ;

}
