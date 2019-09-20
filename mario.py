
while 1:
    try:
        height = int(input("Height: "))
        if 0 <= height <= 23:
            break
    except:
        pass

print("\n".join([" "*(height-i) + "#"*i + "  " + "#"*i + " "*(height-i) for i in range(1, height+1)]))
