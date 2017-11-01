import sys

def main():
    maze = setup()
    start_found = False
    finish_found = False
    for row_num in range(len(maze)):
        for col_num in range (len(maze[row_num])):
            if maze[row_num][col_num] == 's':
                start_found = True;
                finish_found = search(maze, row_num, col_num)
    if not start_found:
        print("No start!")
    if not finish_found:
        print("No exit!")    

def setup():
    # backslash continues a statement on the next line
    maze = [['#', '#', '#', '#', '#', '#', '#'], \
            ['#', ' ', ' ', ' ', ' ', ' ', '#'], \
            ['#', ' ', '#', ' ', ' ', ' ', '#'], \
            ['#', ' ', '#', '#', '#', ' ', '#'], \
            ['#', ' ', '#', ' ', '#', ' ', '#'], \
            ['#', 's', '#', ' ', ' ', ' ', '#'], \
            ['#', '#', '#', 'f', '#', '#', '#']]
    return maze

def search(maze, row_num, col_num):
    for row in maze:
        print(row)
    print()    
    if maze[row_num][col_num] != 'f':
        maze[row_num][col_num] = 'X'
        neighbors = [(row_num-1, col_num), (row_num+1, col_num), (row_num, col_num-1), (row_num, col_num+1)]
        while neighbors:
            space = neighbors[0]
            neighbors = neighbors[1:]
            if (maze[space[0]][space[1]] != '#')  & (maze[space[0]][space[1]] != 'b') & (maze[space[0]][space[1]] != 'X'):
            # why didn't if (maze[space[0]][space[1]] == ' '): work?
                if search (maze, space[0], space[1]):
                    return True
        maze[row_num][col_num] = 'b'        # note: we will not necessarily backtrack over *every* visite space that is not on the optimal solution path
    else:
         print('found exit at ' + str(row_num) + ',' + str(col_num) +'!')
         return True;
            
if __name__ == "__main__":
    sys.exit(main())
