#!/usr/bin/python3

def linearSearch(lst):
    elem=input("Enter element to be searched ")
    for a in lst:
        if a==elem:
            print(lst.index(elem))
            return
    print("Element Not Find ")

def binarySearch(lst):
    elem=input("Enter element to be searched ")
    start=0
    end=len(lst)-1
    mid=(start+end)/2
    if lst[mid]==elem:
        print("Element found at ",lst.index(elem))
    elif lst[mid]>elem:
        end=mid-1
        binarySearch[start:end]
    else:
        start=mid+1
        binarySearch[start:end]

def bubbleSort(lst):
    for a in range(len(lst)):
        for b in range(len(lst)-1):
            if lst[b]>lst[b+1]:
                lst[b],lst[b+1]=lst[b+1],lst[b]
    print(lst)

def selectionSort(lst):
    for a in range(len(lst)):
        
    
def insertionSort(lst):
    for a in range(len(lst)):
        pass


def menu(lst):
    print("1: Linear Search , 2 : Binary Search , 3 : Bubble Sort \n4: Insertion Sort , 5 :Selection Sort")
    ch=int(input("Enter your choice : "))
    if ch==1:
        linearSearch(lst) 
        menu(lst)
    
    if ch==2:
        binarySearch(lst)
        menu()

    if ch==3:
        bubbleSort(lst)
        menu(lst)


# student_list=list(input("Enter Students name in list form"))
lst=['Z',"A",'C',"X","B"]
menu(lst)