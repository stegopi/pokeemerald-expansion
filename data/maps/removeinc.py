import os
lis = []
x = 0
while x!="0":
    x = input()
    if x != "0":
        lis.append(x)
for i in lis:
    if os.path.exists(i+"//scripts.pory"):
        os.remove(i+"//scripts.pory")