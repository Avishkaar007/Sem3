import socket
HOST="127.0.0.1"
PORT=6969

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((HOST,PORT))
    sendData=b"HELLO boss"
    s.sendall(sendData)
    data=s.recv(1024)
    data="".join(chr(x) for x in data)
    
    print(f"Receiced Back Data : {data}")