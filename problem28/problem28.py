import math

dim = 1001
mat = [[0] * dim for _ in range(dim)]
curr_direct = 0 # 0 = right, 1 = down, 2 = left, 3 = up
x = 1 
num_steps = 1
curr_step = 0 
num_turns = 0

curr_x = math.floor(dim / 2)
curr_y = math.floor(dim / 2)

my_set = set()

while x < (dim * dim) + 1:
    mat[curr_y][curr_x] = x
    if curr_y == curr_x or dim - curr_y - 1 == curr_x or dim - curr_x - 1 == curr_y:
        my_set.add(x)
    curr_step += 1
    if curr_direct == 0:
        curr_x += 1
        if num_turns == 2:
            num_steps += 1
            num_turns = 0
        if curr_step == num_steps:
            curr_direct = 1
            num_turns += 1
            curr_step = 0
    elif curr_direct == 1:
        curr_y += 1
        if num_turns == 2:
            num_steps += 1
            num_turns = 0
        if curr_step == num_steps:
            curr_direct = 2
            num_turns += 1
            curr_step = 0
    elif curr_direct == 2:
        curr_x -= 1
        if num_turns == 2:
            num_steps += 1
            num_turns = 0
        if curr_step == num_steps:
            curr_direct = 3
            num_turns += 1
            curr_step = 0
    elif curr_direct == 3:
        curr_y -= 1
        if num_turns == 2:
            num_steps += 1
            num_turns = 0
        if curr_step == num_steps:
            curr_direct = 0
            num_turns += 1
            curr_step = 0
    x += 1

print(sum(my_set))