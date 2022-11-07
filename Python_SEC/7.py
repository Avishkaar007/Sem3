#!/usr/bin/python3
def menu(*string):
    print("1: Length , 2: Maximum of three strings , 3: Replace all vowels with '#'\n4: Number of Words , 5: Pallindrome")
    ch=int(input("\nEnter input : "))
    if ch==1:
        print(len(string[0]))
    if ch==2:
        print(max(len(string[0]),len(string[1]),len(string[2]) ) )  
    if ch==3:
        
        vowels=['a','e','i','o','u']
        tmp=list(string[0].lower())
        st=''
        for a in range(len(string[0])):
            if tmp[a] in vowels:
                tmp[a]= '#'
            st+=tmp[a]
            
        string1=st
        
        print(string1)
        return string1
    if ch==4:
        print(len(string[0].split(' ')))

    if ch==5:
        string_trvsed=0
        for b in range(len(string)):
            l=len(string[b])
            flag=1
            for a in range(l//2):
                
                if string[b][a]==string[b][-a-1]:
                    pass
                else: 
                    print(string[b]," : Not Pallindrome")
                    flag=0
                    break
                if(flag):
                    print(string[b]," : Pallindrome")
                    break


            string_trvsed+=1
                    


string1 = "Ahh This is string 1"
string2 = "Yeh doosri string "
string3= "MONKE ON THE FLOOR , LET'S BOOM "
pallindrome= "malayalam"

menu(string1,string2,string3,pallindrome)
