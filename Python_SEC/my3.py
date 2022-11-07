#!/usr/bin/python3

ls=[]
def nFib(n):
	#Assuming Sequence as 0,1,1,2,3,5,8,13
	
	if n==1:
		return 0
	elif n==2 or n==3:
		return 1
	res=nFib(n-1)+nFib(n-2)
	
	return res

def nFact(n):
	if n==0:
		return 1
	prod=1
	for a in range(2,n+1):
		prod*=a
	ls.append(prod)
	return prod
def inp():
	n=int(input("Enter 'n' : "))
	ls.append(nFib(n))
	nFact(n)
	print("Factorial : ",ls[0])
	print("Fibonacci : ",ls[1])

if __name__=="__main__":
	inp()