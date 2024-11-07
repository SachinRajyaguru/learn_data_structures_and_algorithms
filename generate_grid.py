import random

def generate_grid(n):
  grid = []
  for _ in range(n):
    row = [random.randint(1, 15) for _ in range(n)]
    grid.append(row)

  return grid

# Get user input for the grid size
n = int(input("Enter the size of the grid (number of rows and columns): "))

# Generate the grid
grid = generate_grid(n)

# Print the grid
for row in grid:
   print(", ".join(map(str, row)))
