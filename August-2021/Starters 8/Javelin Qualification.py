from bisect import*
for i in range(int(input())):
    n,m,x = map(int,input().split())
    a = list(map(int, input().split()))
    b =[]
    for i in range(len(a)):
        b.append((-a[i],i+1))
    b.sort()
    l = bisect(b,(-m, float("inf")))
    la=max(l,x)
    ans=[]
    for i in range(la):
        ans.append(b[i][1])
    ans.sort()
    print(len(ans),*ans)