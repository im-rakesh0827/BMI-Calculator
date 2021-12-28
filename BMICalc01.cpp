#include "iostream"
#include "math.h"
using namespace std;
int main(){
    cout<<"Welcome to BMI virtual calculator : \n";
    cout<<"Choose height unit : 1.cm    2.m     3.feet\n";
    cout<<"Your choice : ";
    int choice; cin>>choice;
    float height, weight;
    if(choice==1){
        cout<<"Enter your height in cm : ";
        cin>>height;
        if(height<=0){
            cout<<"Invalid input :\n";
        }else{
            height = height/100;
            cout<<"Your height in m : "<<height<<"\n";
            cout<<"Choose weight unit : 1.Kg   2.Gm    3.Lbs\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Enter your weight in kg : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy or Normal :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else if(choice==2){
                cout<<"Enter your weight in gm : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    weight = weight/1000;
                    cout<<"Your weight in kg : "<<weight<<"\n";
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy or Normal :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else if(choice==3){
                cout<<"Enter your weight in lbs : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    weight = weight/0.454;
                    cout<<"Your weight in kg : "<<weight<<"\n";
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else{
                cout<<"Invalid choice :\n";
            }
        }

    }else if(choice==2){
        cout<<"Enter your height in m : ";
        cin>>height;
        if(height<=0){
            cout<<"Invalid input :\n";
        }else{
            cout<<"Choose weight unit : 1.kg    2.gm    3.lbs";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Enter your weight in kg : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy or Normal  :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }

                }
            }else if(choice==2){
                cout<<"Enter your weight in gm : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    weight = weight/1000;
                    cout<<"Your weight in kg : "<<weight<<"\n";
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Helathy or Normal :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else if(choice==3){
                cout<<"Enter youe weight in lbs : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    weight = weight/0.454;
                    cout<<"Your weight in kg : "<<weight<<"\n";
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else{
                cout<<"Iinvalid choice :\n";
            }
        }
    }else if(choice==3){
        cout<<"Enter your height in feet : ";
        cin>>height;
        if(height<=0){
            cout<<"Invalid input :\n";
        }else{
            height = height/3.2808;
            cout<<"Your height in m : "<<height<<"\n";
            cout<<"Choose weight unit : 1.Kg    2.Gm    3.Lbs\n";
            cout<<"Your choice : ";
            cin>>choice;
            if(choice==1){
                cout<<"Enter your weight in kg : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else if(choice==2){
                cout<<"Enter your weight in gm : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    weight = weight/1000;
                    cout<<"Your weight in kg : "<<weight<<"\n";
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else if(choice==3){
                cout<<"Enter your weight in lbs : ";
                cin>>weight;
                if(weight<=0){
                    cout<<"Invalid input :\n";
                }else{
                    weight = weight/0.454;
                    cout<<"Your weight in kg : "<<weight<<"\n";
                    float BMI = weight/(pow(height, 2));
                    cout<<"Your BMI : "<<BMI<<"\n";
                    if(BMI<18.5){
                        cout<<"Underweight :\n";
                    }else if(BMI>=18.5 && BMI<24.9){
                        cout<<"Healthy or Normal :\n";
                    }else if(BMI>=24.9 && BMI<29.9){
                        cout<<"Overweight :\n";
                    }else{
                        cout<<"You are like Hulk :\n";
                    }
                }
            }else{
                cout<<"Invalid choice :\n";
            }
        }
    }else{
        cout<<"Invalid choice :\n";
    }
    return 0;
}