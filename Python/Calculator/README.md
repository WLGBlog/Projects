This is a simple Calculator that can be built on!


![](http://compass1.org/wp-content/uploads/2015/06/Calculator_clipped_rev_1.png)

    print('1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n\n')
    operator = input('Which would you like to do? \n')

    if operator == '1':
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1+num2
      print(num1,'+',num2,"=",result)
  
    if operator == '2':
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1-num2
      print(num1,'-',num2,"=",result)
  
    if operator == '3':
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1*num2
      print(num1,'*',num2,"=",result)
  
    if operator == '4':
      num1=int(input('Enter First Number: '))
      num2=int(input('Enter Second Number: '))
      result=num1/num2
      print(num1,'/',num2,"=",result)
