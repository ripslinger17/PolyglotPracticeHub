num1=int(input("Enter first number: "))
num2=int(input("Enter last number: "))
flag=0
for i in range(num1,num2):
    j=1
    for j in range(2,i):
        if(i%j==0):
            flag=1
            break
        else:
            flag=0

    if(flag==0 and i>1):
        print(i," is prime")
    else:
        continue


# for i in range(2, num):
#     if(num%i == 0):
#         flag = 1
#         break
#     else:
#         flag = 0

# if (flag == 0):
#     print(num, " is prime")
# else:
#     print(num, " is not prime")
