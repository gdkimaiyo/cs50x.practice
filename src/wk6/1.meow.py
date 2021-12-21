from cs50 import get_int

def main():
    n = get_int("Print 'meow' how many times? ")
    for i in range(n):
        meow()

def meow():
    print("meow")

main()
