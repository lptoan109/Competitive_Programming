x,y,m = map(int, open(0).read().split())
if(min(x, y)*2 != m):
    print("NO")

else:
    print("YES")
    i = 1
    while(x>0 and y>0):
        if(i%2!=0):
            print('B')
            x-=1
            i+=1
        else:
            print('G')
            y-=1
            i+=1
    if()
        
