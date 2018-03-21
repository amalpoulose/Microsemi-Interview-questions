#! /usr/bin/python2.7
#Find Excel coloumn number for a given number
def excel(m):
    v=0
    if(m):
        v=m%26
        excel((m-1)/26)
        if(v==0):
          v=25
        else:
             v-=1
        print chr(65+v),
    
  
    
def main():
    num=input("Number  : ")
    excel(num)
    
    
if __name__=="__main__":
    main()
