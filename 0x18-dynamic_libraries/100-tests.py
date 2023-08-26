
import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')  # Make sure to use the correct path

def test_operations():
    a = random.randint(-111, 111)
    b = random.randint(-111, 111)

    print(f"Random numbers: {a}, {b}")

    result_add = cops.add(a, b)
    print(f"{a} + {b} = {result_add}")

    result_sub = cops.sub(a, b)
    print(f"{a} - {b} = {result_sub}")

    result_mul = cops.mul(a, b)
    print(f"{a} * {b} = {result_mul}")

    if b != 0:  # Avoid division by zero
        result_div = cops.div(a, b)
        print(f"{a} / {b} = {result_div}")
        result_mod = cops.mod(a, b)
        print(f"{a} % {b} = {result_mod}")
    else:
        print("Division by zero not possible")

if __name__ == "__main__":
    for _ in range(5):  # You can adjust the number of test cases
        print("===")
        test_operations()

