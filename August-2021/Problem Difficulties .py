t=int(input())
for i in range(t):
    l = list(map(int, input().split( )))
    n = set(l)
    if(len(n)==4):
        print(2)
    elif(len(n)==3):
        print(2)
    elif(len(n)==2):
        l.sort()
        b=l[0]
        if(l.count(b)==2):
            print(2)
        else:
            print(1)
    else:
        print(0)
                   
