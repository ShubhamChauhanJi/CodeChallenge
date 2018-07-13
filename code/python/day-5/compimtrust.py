p=float(input("Enter principle amount:"))
t=int(input("Enter time duration:"))
r=float(input("Enter rate of interest:"))
amount = (p * (1 + (float(r)/100))**t)
compound_interest=amount-p;
print("Total amount:- ",amount)
print("Compound interest:- ",compound_interest)
