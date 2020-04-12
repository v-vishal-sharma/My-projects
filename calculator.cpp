# include <iostream>

using namespace std;

int main()
{
    int a , b, c , choice;
    char con;
    
    cout<<"\t\t\tWelcome To The Calculator!!!";
    
    
    do{
        cout<<"\nEnter two numbers: ";
    cin>>a>>b;
        cout<<"Press 1 to do addition\nPress 2 to do substraction \nPress 3 to do multiplication\nPress 4 to do division\n";cin >>choice;
        
    
    if (choice==1){
        c= a+b;
        cout<<"Sum is: "<<c<<endl;
    }
    else if (choice==2){
        c=a-b;
        cout<<"Difference is : "<<c<<endl;
    }
    else if (choice==3){
        c=a*b;
        cout<<"Product is : "<<c<<endl;
    }
    else if (choice==4){
        c=a/b;
        cout<<"Division is : "<<c<<endl;
    }
    else {
        cout<<"Enter correct choice\t";
    }
    cout<<"Do you want to continue? \nY for yes and N for no: "<<endl;
    cin>>con;
    }while((con=='y')||(con=='Y'));
     
    return 0;
}