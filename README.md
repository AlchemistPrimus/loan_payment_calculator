# LOAN PAY CALCULATOR 

This program can be used to compute loan payments, which can be, but not limited to car loans, student loans or home mortgage loan. 
It helps in computation of two types of loans; 
- Interest Only Loans 
- Armotizing Loans 

###### Loan Factors Considered 
These are the factors considered to help this program compute accurately, the monthly loan payments.  
- **Principal** *This is the amount you have borrowed from your lender*  
- **Loan Term** *How long your lender allows you to repay the loan*   
- **Interest Rate** *Amount charged by the lender for lending you the money*   

### Requirement specifications 

This program must allow the user enter various parameters important for doing the loan calculations, i.e principal, interest rate and no of years for payment.  
This program will then compute and display the monthly payments and the total payment for a specified time.   

### System Analysis 
Output of the monthly payments and total payments were obtained using the following mathematical models:  
For interest only loans;   
###### Monthly payment = principal * (interestRate/12)   
For armotised loans;   
###### Monthly payment = principal / pow(1+rate, loanTermPeriod)-1 / rate * pow(1+rate, loanTermPeriod)   
Where; *rate = PeriodicInterestRate / 12*   



### System Design 
In the system design, the program undergoes the following steps. 

###### Steps for interest only loans.   
1.Prompt user to enter inputs;    
- Principal amount(will be of type double)  
- Percentage interest rate(will be of type double)
- Duration you expect to pay(will be of type int)     

2.Using the data obtained from the user input, compute the monthly payment amount using interest only loan payment model; 
**monthly payment = principal * (interestRate/12)** (return type double)    

3.Using the monthly payment amount, compute the total amount to be payed by;   
**total amount = monthly payment * duration(p.a)** (type double)      

4.Output the monthly payment and the total payment after specified duration     

###### Steps for armotised loans.
1.Prompt user to enter inputs;  
- Principal amount(will be of type double)
- Periodic interest rate(will be of type double)
- Loan term period(will be of type int)
- Time expected to pay the loan(will be of type int)    

2.Consequently the data obtained from the user input, can be used to calculate armotized loan with previous models;    
**monthly payment = principal / pow(1+rate, laonTermPeriod)-1 / rate * pow(1+rate, loanTermPeriod)**(return type double)     
*where* **rate = periodicInterestRate / 12**    

3.Using the monthly payment amount, compute total payment by;    
**total amount = monthly payment * duration(p.m)**(return type double)     

4.Output the monthly payment and the total payment after specified duration     


### Running the program  

This program is originally design to run on linux/unix environment and can be set up and run using the steps below.   

> In your terminal, follow the following steps    

>> Clone the source code from github [repository](https://github.com/AlchemistPrimus/loan_payment_calculator.git) in your desired directory;    

>> `$git clone https://github.com/AlchemistPrimus/loan_payment_calculator.git`    

>> Navigate to the location of the source code;   

>> `$cd loan_payment_calculator`   

>> Running the executable file;  

>>`$./loan_pay_cal`   

###### Alternatively you can prepare the c++ source code as follows(g++ is required)    
> Compiling the source code   
>> `$g++ -Wall -Werror -Wextra -c loan_pay_cal.cpp -o loan_pay_cal.o`   

>> Linking the object files    

>> `$g++ loan_pay_cal.o -o loan_pay_cal`    

>> Running the executable;    

>> `$./loan_pay_cal`   

