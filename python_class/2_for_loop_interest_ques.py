# An investor deposits $10,000 with the Get-Rich-Quick agency and receives a statement predicting the earnings on an annual percentage rate (APR) of 6% for a period of 5 years.  Write a program that prints the beginning principal and the interest earned for each year of the period.  The program also prints the total amount earned and the final principal.

principal=10000
rate=0.6
term=5
totalInterest=0
for i in range(term):
    print("Principal",principal)
    interest=principal*rate
    principal=principal+interest
    totalInterest=totalInterest+interest
    
print("Principal",principal)
print("Total Interest",totalInterest)
