import java.util.Scanner;
class BMI_Calc{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Welcome To Virtual Calculator : ");
        System.out.println("Choose Height(Unit) : 1.cm  2.m  3.feet");
        System.out.print("Your choice : ");
        int choice = sc.nextInt();
        float height, height_m=0, weight, weight_kg=0;
        boolean flag = false;
        if(choice==1){
            System.out.print("Enter your height in cm : ");
            height = sc.nextFloat();
            if(height<=0){
                System.out.println("Invalid input :");
            }else{
                height_m = height/100;
                System.out.println("Your height in m : "+height_m);
                flag = true;
            }
        }else if(choice==2){
            System.out.print("Enter your height in m : ");
            height = sc.nextFloat();
            if(height<=0){
                System.out.println("Invalid input :");
            }else{
                height_m = height;
                flag=true;
            }
        }else if(choice==3){
            System.out.print("Enter your height in feet : ");
            height = sc.nextFloat();
            if(height<=0){
                System.out.println("Invalid input :");
            }else{
                height_m = (float) (height/3.2808);
                System.out.println("Your height in m : "+height_m);
                flag = true;
            }
        }else{
            System.out.println("Invalid choice :");
        }
        if(flag){
            System.out.println("Choose weight(Unit) : 1.Kg  2.Gm  3.Lbs");
            System.out.print("Your choice : ");
            choice = sc.nextInt();
            if(choice==1){
                System.out.print("Enter your weight in kg : ");
                weight = sc.nextFloat();
                if(weight<=0){
                    System.out.println("Invalid input : ");
                }else{
                    weight_kg = weight;
                    flag = true;
                }
            }else if(choice==2){
                System.out.print("Enter your weight in gm : ");
                weight = sc.nextFloat();
                if(weight<=0){
                    System.out.println("Invalid input : ");
                }else{
                    weight_kg = weight/1000;
                    System.out.println("Your weight in kg : "+weight_kg);
                    flag = true;
                }
            }else if(choice==3){
                System.out.print("Enter your weight in lbs : ");
                weight = sc.nextFloat();
                if(weight<=0){
                    System.out.println("Invalid input :");
                }else{
                    weight_kg = (float) (weight/0.454);
                    System.out.println("Your weight in kg : "+weight_kg);
                    flag = true;
                }
            }else{
                System.out.println("Invalid choice : ");
            }
            if(flag){
                float BMI = weight_kg/(height_m*height_m);
                System.out.println("Your BMI : "+BMI);
                if(BMI<18.5){
                    System.out.println("Underweight : ");
                }else if(BMI>=18.5 && BMI<24.9){
                    System.out.println("Healthy or Normal");
                }else if(BMI>=24.9 && BMI<29.9){
                    System.out.println("Overweight : ");
                }else{
                    System.out.println("You are like Hulk : ");
                }
            }
        }
        System.out.println("Press : 1.Continue  2.Exit");
        System.out.print("Your choice : ");
        choice = sc.nextInt();
        if(choice==1){
            main(args);
        }else if(choice==2){
            System.out.println("You have successfully exited : ");
        }else{
            System.out.println("Invalid choice :\nExited : ");
        }
    }
}