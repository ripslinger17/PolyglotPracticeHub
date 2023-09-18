li=[1,2,3,4,5,6,7,8,9,0]
print(li[::2])
print(li[0],li[-1])
li3=["i",55]
li.extend(li3)
print(li)
del (li[7:12])
print(li)
li.append(" ")
li.insert(2," ")
print(li)
print(li.count(" "))
li2=li
del (li)
print(li2)
