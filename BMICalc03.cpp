#include "iostream"
#include "math.h"
using namespace std;
void BMI_Calc(void){
    cout<<"Choose height(Unit) : 1.cm   2.m    3.feet\n";
    cout<<"Your choice : ";
    int choice; cin>>choice;
    float height, height_m=0, weight, weight_kg=0;
    bool flag = false;
    if(choice==1){
        cout<<"Enter your height in cm : ";
        cin>>height;
        if(height<=0){
            cout<<"Invalid input :\n";
        }else{
            height_m = height/100;
            cout<<"Your height in m : "<<height_m<<"\n";
            flag = true;
        }
    }else if(choice==2){
        cout<<"Enter your height in m : ";
        cin>>height;
        if(height<=0){
            cout<<"Invalid input :\n";
        }else{
            height_m = height;
            flag = true;
        }
    }else if(choice==3){
        cout<<"Enter your height in feet : ";
        cin>>height;
        if(height<=0){
            cout<<"Invalid input :\n";
        }else{
            height_m = height/3.2808;
            cout<<"Your height in m : "<<height_m<<"\n";
            flag = true;
        }
    }else{
        cout<<"Invalid choice :\n";
    }
    if(flag){
        cout<<"Choose weight(Unit) : 1.kg   2.gm    3.lbs\n";
        cout<<"Your choice : ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter your weight in kg : ";
            cin>>weight;
            if(weight<=0){
                cout<<"Invalid input :\n";
            }else{
                weight_kg = weight;
                flag  = true;
            }
        }else if(choice==2){
            cout<<"Enter your weight in gm : ";
            cin>>weight;
            if(weight<=0){
                cout<<"Invalid input :\n";
            }else{
                weight_kg = weight/1000;
                cout<<"Your weight in kg : "<<weight_kg<<"\n";
                flag = true;
            }
        }else if(choice==3){
            cout<<"Enter your weight in lbs : ";
            cin>>weight;
            if(weight<=0){
                cout<<"Invalid input :\n";
            }else{
                weight_kg = weight/0.454;
                cout<<"Your weight in kg : "<<weight_kg<<"\n";
            }
        }else{
            cout<<"Invalid choice :\n";
        }
        if(flag){
            float BMI = weight_kg/pow(height_m, 2);
            cout<<"Your BMI : "<<BMI<<"\n";
            if(BMI<18.5){
                cout<<"Underweight :\n";
            }else if(18.5<=BMI<24.9){
                cout<<"Healthy :\n";
            }else if(24.9<=BMI<29.9){
                cout<<"Overweight :\n";
            }else{
                cout<<"You are like Hulk :\n";
            }
        }
    }
}
int main(){
    cout<<"Welcome to BMI Virtual Calculator :\n";
    BMI_Calc();
    cout<<"Press : 1.Continue   2.Exit\n";
    cout<<"Your choice : ";
    int choice; cin>>choice;
    if(choice==1){
        BMI_Calc();
    }else if(choice==2){
        cout<<"You have exited successfully :\nHave a good day\n";
    }else{
        cout<<"Invalid choice :\nExited\n";
    }
    return 0;
}