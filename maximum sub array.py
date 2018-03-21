#! /usr/bin/python2.7

def max_subarray(arr):
    summ,maxm=0,0
    max_arr=[]
    for i in range(len(arr)):
        for j in range(i+1,len(arr)+1):
            for n in arr[i:j]:
                summ+=n
            if summ>maxm:
                maxm=summ
                max_arr=arr[i:j]
            summ=0
    return maxm,max_arr
    
def main():
    arr_size=input("array size :")
    arr=[]
    print "array elements : "
    for i in range(arr_size):
        arr.append(input(""))
    a,b=max_subarray(arr)        
    print "max sub array sum : ",a
    print "max sub array    :" ,b
    
if __name__=="__main__":
    main()
