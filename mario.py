height = int(input("Height: "))

for i in range(height):
    print(" "*(height-i) + "#"*i + "  " + "#"*i + " "*(height-i))
