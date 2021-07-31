import itertools
t=int(input())
for i in range(t):
    n=int(input())
    l=list()
    g=0
    for j in range(1,n+1):
        l.append(j)
    result = itertools.permutations(l)
    for each in result:
        f=0
        l2=list(each)
        for k in range(len(l2)-1):
            if(l2[k]&l2[k+1]>0):
                f=f+1
        if(f==n-1):
            g=1
            for m in l2:
                print(m,end=" ")
            print()
            break
    if(g!=1):
        print(-1)
    

