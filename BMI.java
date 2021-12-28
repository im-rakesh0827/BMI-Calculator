import java.util.*;
class BMI{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Welcome to Virtual BMI Calculator :");
        System.out.println("Height(Unit) : 1.cm    2.m    3.feet");
        System.out.print("Your choice : ");
        int choice = sc.nextInt();
        int h=0;
        float height_m=0;
        boolean flag = true;
        if(choice==1){
            System.out.print("Enter your height in cm : ");
            h = sc.nextInt();
            if(h<=0){
                System.out.println("Invalid input :");
            }else{
                height_m = h/100;
                System.out.println("Your height in m : "+height_m);
                flag = true;
            }
        }else if(choice==2){
            System.out.print("Enter your height in m : ");
            h = sc.nextInt();
            if(h<=0){
                System.out.println("Invalid input :");
            }else{
                height_m = h;
                flag = true;
            }
        }else if(choice==3){
            System.out.print("Enter your height in feet : ");
            h = sc.nextInt();
            if(h<=0){
                System.out.println("Invalid input : ");
            }else{
                
            }
        }
    }
}