import random

def generate_list(n, min=1, max=101):
    return [random.randint(min, max) for _ in range(n)]

# Get user input for the grid size
n = int(input("Enter the size of the list: "))
min = int(input("Enter the smallest number you expect to be in the list (e.g., -10) (default: 1): ") or 1)
max = int(input("Enter the largest number you expect to be in the list (e.g., 100) (default: 100): ") or 100) + 1

# Generate the grid
lst = generate_list(n, min, max)

print(",".join(map(str, lst)))
