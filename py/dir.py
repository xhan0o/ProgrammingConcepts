def dir(x1,y1,x2,y2):
    if (x1 == x2 and y1 == y2):
		s = "same points"
    elif(x1 == x2):
        s = "N" if (y1 > y2) else "S"
    elif(y1 == y2):
        s = "E" if(x1 > x2) else "W"
    elif(x1 > x2):
        s = "NW" if(y1 > y2) else "SW"
    elif(x1 < x2):
		s = "SE" if(y1 > y2) else "NE"
    return s

print dir(0, 0 , 1 , 1)
z = [1, 0 , -1]
for i in z:
    for j in z:
        # print i,j
        print dir(0 , 0, i , j), i,j
