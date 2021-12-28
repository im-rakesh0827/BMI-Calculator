print("welcome To BMI Virtual Calculator ")
print("Choose height(Unit) : 1.cm   2.m   3.feet")
print("Your choice : ")
choice  = int(input())
flag = False
if(choice==1):
    print("Enter your height in cm : ")
    height = eval(input())
    if(height<=0):
        print("Invalid input :\n")
    else:
        height_m = height/100;
        print("Your height in m : ",height_m)
        flag = True
elif(choice==2):
    print("Enter your height in m : ")
    height = eval(input())
    if(height<=0):
        print("Invalid input :\n")
    else:
        height_m = height
        flag = True
elif(choice==3):
    print("Enter your height in feet : ")
    height = eval(input())
    if(height<=0):
        print("Invalid input :\n")
    else:
        height_m = height/3.2808
        print("Your height in m : ", height_m)
        flag = True
else:
    print("Invalid choice : \n")
if(flag):
    print("Choose weight(Unit) : 1.kg   2.gm    3.lbs")
    print("Your choice : ")
    choice = int(input())
    if(choice==1):
        print("Enter your weight in kg : ")
        weight = eval(input())
        if(weight<=0):
            print("Invalid input :\n")
        else:
            weight_kg = weight
            flag = True
    elif(choice==2):
        print("Enter yor weight in gm : ")
        weight = eval(input())
        if(weight<=0):
            print("Invalid input :\n")
        else:
            weight_kg = weight/1000
            print("Your weight in kg : ", weight_kg)
            flag = True
    elif(choice==3):
        print("Enter your weight in lbs : ")
        weight = eval(input())
        if(weight<=0):
            print("Invalid input :\n")
        else:
            weight_kg = weight/0.454
            print("Your weight in kg : ",weight_kg)
            flag = True
    if(flag):
        BMI = weight_kg/(height_m**2)
        print("Your BMI : ", BMI)
    else:
        print("Invalid choice :\n")
else:
    print("Invalid choice :\n")