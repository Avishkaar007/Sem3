def no_of_redundant_bits(m):
    for r in range(m):
        if (2**r>=m+r+1):
            return r
def pos_of_redundant_bits(data,r):
    j = 0
    k = 1
    m = len(data)
    res = ''

    for i in range(1, m + r+1):
        if(i == 2**j):
            res = res + '0'
            j += 1
        else:
            res = res + data[-1 * k]
            k += 1

    return res[::-1]

def calc_parity_bits(arr,r):
    n = len(arr)
    for i in range(r):
        val = 0
        for j in range(1, n + 1):

            if(j & (2**i) == (2**i)):
                val = val ^ int(arr[-1 * j])

        arr = arr[:n-(2**i)] + str(val) + arr[n-(2**i)+1:]
    return arr

def detectError(arr,r):
    n = len(arr)
    res = 0

    for i in range(n):
        val = 0
        for j in range(1, n + 1):
            if(j & (2**i) == (2**i)):
                val = val ^ int(arr[-1 * j])
        res = res + val*(10**i)

    return int(str(res), 2)
def main():
    data="1001010"
    m = len(data)
    r = no_of_redundant_bits(m)
    
    arr = pos_of_redundant_bits(data, r)
    arr = calc_parity_bits(arr, r)
    print("Data transferred is " + arr) 
    
    arr = '11101001110'
    print("Error Data is " + arr)
    correction = detectError(arr, r)
    if(correction==0):
        print("There is no error in the received message.")
    else:
        print("The position of error is ",len(arr)-correction+1,"from the left")

main()