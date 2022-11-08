
def sale_calc():
	sales=[]
	for i in range(4) :
		print("Enter Sales of Week ",i+1 ," : ",end='')
		x=int(input())
		sales.append(x)
	total_sale=sum(sales)
	commission=0
	if total_sale>50000:
		commission=total_sale*0.05
	final(total_sale,commission)

def remarks(sales):
	if sales<40000:
		print("Work Hard")
	elif 40000<=sales<60000:
		print("Average")
	elif 60000<=sales<80000:
		print("Good")
	else:
		print("Excellent")
def final(total_sale,commission):
	print("Sale by Agent : ",total_sale)
	print("Commission : ",commission)
	print("Total Payout to Agent : ",total_sale+commission,"\nRemarks: ",end='')
	remarks(total_sale)

sale_calc()