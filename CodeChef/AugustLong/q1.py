# cook your dish here

def chefwars(H,P):
    if P<=0:
        return '0'
    elif H<=0:
        return '1'
	
    print(H)
    print(P)
    
    chefwars(H-P,int(P-P/2))

n=int(input())    
for i in range(n):
    a = list(map(int,input().strip().split()))[:n] 
    b=chefwars(a[0],a[1])
    print(b)
