
# reads network id
def networkId(ip):
    if tellClass(ip)=="A":
        nid=ip[0]
    elif tellClass(ip)=="B":
        nid=ip[0]+"."+ip[1]
    elif tellClass(ip)=="C":
        nid=ip[0]+"."+ip[1]+"."+ip[2]
    elif tellClass(ip)==("D" or "E"):
        nid= ip[0]+"."+ip[1]+"."+ip[2]+"."+ip[3]
    else :
        nid=""
    return nid
def hostId(ip):
    if tellClass(ip)=="A":
        hid=ip[1]+"."+ip[2]+"."+ip[3]
    elif tellClass(ip)=="B":
        hid=ip[2]+"."+ip[3]
    elif tellClass(ip)=="C":
        hid=ip[3]
    elif tellClass(ip)==("D" or "E"):
        hid= ""
    else :
        hid = ""
    return hid

def tellClass(ip):
    char=int(ip[0])
    if (0<char<128):
        return ("A")
    elif (128<=char<192):
        return ("B")
    elif (192<=char<224):
        return("C")
    elif (224<=char<240):
        return("D")
    elif (240<=char<256):
        return("E")

if __name__=="__main__":
    ip="223.234.56.78"
    # ip=input("Enter IP Address")
    ip=ip.split(".")
    tellClass(ip)
    print(networkId(ip))
    print(hostId(ip))