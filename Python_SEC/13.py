from matplotlib import pyplot as plt
import numpy as np
import math

def cos(angle):
    angle=angle*(math.pi) / 180# converts degree to radian
    data=np.arange(0,angle,0.1)
    cosine=np.cos(data)
    plt.figure("Cosine") 
    plt.plot(data,cosine)
    plt.title('Cosine wave')
    plt.show()
def sin(angle): 
    angle=angle*(math.pi) / 180 # converts degree to radian
    data=np.arange(0,angle,0.1)
    sine=np.cos(data)
    plt.figure("Sine")
    plt.plot(data,sine)
    plt.title('Sine wave')
    plt.show()

def polynomial(start,end,curve=""):
    if curve=="":
        curve=input("Enter Curve in x : ")
    
    X_data=[a for a in range(start,end)]
    Y_data=[]
    
    fx=lambda x : eval(curve)
    for b in range(len(X_data)):
        Y_data.append(fx(X_data[b]))
    print(X_data,"\n", Y_data)
    plt.figure("Curve Fitting")
    plt.plot(X_data,Y_data)
    plt.title("Curve Fitting")
    plt.show()

def exp(val):
    x=np.arange(0,10)
    y=np.exp(x)
    plt.figure("Exponential")
    plt.plot(x,y)
    plt.title("Exponential Curve ")
    
    plt.show()

def poly():
    print("Enter any expression \n just use sin(10) ,e(3) for exponential ,cos(12)\n ")
    curve=input("Enter Curve  : ")
    
    if "x" in curve:
        polynomial(0,10,curve)
        quit()
    eval(curve)


#  DRIVER CODE
# angle=2000;
# cos(angle)
# sin(angle)
# polynomial(0,10)
# exp(10)
poly()