import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')  # Make sure to use the correct path

def test_operations():
    a = random.randint(-111, 111)
    b = random.randint(-111, 111)

    result_add = cops.add(a, b)
    result_sub = cops.sub(a, b)
    result_mul = cops.mul(a, b)
    result_my_div = cops.my_div(a, b)
    result_mod = cops.mod(a, b)

    print(f"{a} + {b} = {result_add}")
    print(f"{a} - {b} = {result_sub}")
    print(f"{a} x {b} = {result_mul}")
    print(f"{a} / {b} = {result_my_div}")
    print(f"{a} % {b} = {result_mod}")

if __name__ == "__main__":
    for _ in range(1):  # Generate 3 sets of test cases
        test_operations()

