This is a simple Calculator that can be built on!


![](https://s23.postimg.org/tcb346ovf/Capture.png)

    print('1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n\n') #Prints the Question
    operator = input('Which would you like to do? \n') #sets operator equal to what they type

    if operator == '1':                       #Addition
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1+num2
      print(num1,'+',num2,"=",result)
  
    if operator == '2':                      #Subtraction
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1-num2
      print(num1,'-',num2,"=",result)
  
    if operator == '3':                     #Multiplication
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1*num2
      print(num1,'*',num2,"=",result)
  
    if operator == '4':                     #Division
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1/num2
      print(num1,'/',num2,"=",result)
