import argparse
import os

MAKEFILE_CONTENT = 'all:\n\tg++ main.cpp -o main'
MAIN_CONTENT = '#include <iostream>\n\nint main() {\n\treturn 0;\n}'

parser = argparse.ArgumentParser()

parser.add_argument('problem_nr',
                        help='Problem number.',
                        type=int)

args = parser.parse_args()

# Problem number exceeds 4 digits
if (args.problem_nr > 9999):
    print('Problem number is too big.')
    exit(1)

problem_dir = f'problem-{args.problem_nr:04d}'

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

print(f'Successfully created problem {args.problem_nr}')
 
