from cs50 import get_int

def main():
    n = get_int("Print 'meow' how many times? ")
    meow(n)

def meow(x):
    for i in range(x):
        print("meow")

main()
