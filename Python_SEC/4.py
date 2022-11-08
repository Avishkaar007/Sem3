
def func():
	n=int(input("Enter a number >=10 : "))

	if n<10:
		print("Too Low , Enter a bigger number")
	else:
		st=set()
		while(n!=0):
			rem=n%10
			n=n//10 
			st.add(rem)
	print(st)
func()
