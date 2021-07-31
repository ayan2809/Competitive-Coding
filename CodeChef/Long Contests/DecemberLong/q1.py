import math

def solve(d1,d2,v1, v2, day, count):
    while(day>0):
        if(d1>0):
            day=day-v1
            d1=d1-1
            count=count+1	
        else:
	        day=day-v1-v2
	        count=count+1
    return count



d1,v1,d2,v2,p = input().split(" ")

d1 = int(d1) 
v1 = int(v1)
d2= int(d2)
v2=int(v2)
p=int(p)



if(d1==d2):
    print(math.ceil(p/(v1+v2))+d1-1)
#else:
  #  mini=min(d1,d2)
 #   total=0
  #  maxi= max(d1,d2)
  #  a=0
  #  b=0
  #  if(mini==d1):
  #      a=v1
   #     b=v2
  #  else:
   #     b=v1
    #    a=v2
		
   # print(solve(mini,maxi,a,b,p,mini-1))



