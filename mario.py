while 1:

    # exception handling to make sure that the input (var height) is always and integer
    try:

        # input height and cast to an int
        height = int(input("Height: "))

        # input needs to be within the constraints given
        if 0 <= height <= 23:
            break
    except:
        pass

# prints the output, by using a for loop, and calculating the difference between the height and how many ' 's or '#'s have been printed
print("\n".join([" "*(height-i) + "#"*i + "  " + "#"*i + " "*(height-i) for i in range(1, height+1)]))
