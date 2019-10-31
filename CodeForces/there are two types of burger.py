import math
 
n = input()
 
for i in range(int(n)):
    bal = input()
    ball = input()
    lst = bal.split()
    bun = int(lst[0])
    beef = int(lst[1])
    chicken = int(lst[2])
 
    lis = ball.split()
    hum = int(lis[0])
    chik = int(lis[1])
 
    ans = 0
 
    if hum > chik:
        if bun > (beef*2):
            ans = ans + hum*beef
            bun = bun - beef*2
        else:
            ans = ans + ((bun-bun % 2)/2)*hum
            bun = 0
 
        ans =ans + ((min(chicken*2, bun-bun % 2))/2) * chik
 
    else:
        if bun > (chicken * 2):
            ans = ans + chik * chicken
            bun = bun - chicken * 2
        else:
            ans = ans + ((bun - bun % 2) / 2)*chik
            bun = 0
 
        ans = ans + ((min(beef * 2, bun - bun % 2)) / 2) * hum
 
    print(math.ceil(ans))
 
