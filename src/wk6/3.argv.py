from sys import argv

if len(argv) > 1:
    print("Hello: ", end="")
    i = 0
    for arg in argv:
        if i > 0:
            print(arg, end=", ")
        i += 1
    print()
else:
    print("Hello: World!")
