import os
import sys

MAKEFILE_CONTENT = 'all:\n\tg++ -std=c++14 main.cpp -o main -Ofast\n'
MAIN_CONTENT = '#include <iostream>\n\nint main() {\n  return 0;\n}\n'
GITIGNORE_CONTENT = 'main\n'

if len(sys.argv) != 2:
    print('Please enter the problem number.')
    exit(1)

problem_nr = None

try:
    problem_nr = int(sys.argv[1])
except ValueError:
    print('Not a number.')
    exit(1)

# Problem number exceeds 4 digits
if (problem_nr > 9999):
    print('Problem number is too big.')
    exit(1)

problem_dir = f'problem-{problem_nr:04d}'

# Create the problem directory
try:
    os.mkdir(problem_dir)
except OSError as error:
    print(error)
    exit(1)

# Create main.cpp
with open(f'{problem_dir}/main.cpp', 'w') as file:
    file.write(MAIN_CONTENT)

# Create Makefile
with open(f'{problem_dir}/Makefile', 'w') as file:
    file.write(MAKEFILE_CONTENT)

# Create .gitignore
with open(f'{problem_dir}/.gitignore', 'w') as file:
    file.write(GITIGNORE_CONTENT)

print(f'Successfully created problem {problem_nr}')
 
