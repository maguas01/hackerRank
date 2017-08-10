'''
You have an empty sequence, and you will be given queries. Each query is one of these three types:

1 x  -Push the element x into the stack.
2    -Delete the element present at the top of the stack.
3    -Print the maximum element in the stack.

'''

stack = []
n =  int(raw_input())
largest = 0
for i in range( n ) : 
    inp = map(int, raw_input().strip().split(' ') )
    if inp[0] == 1 : 
        if len(stack) != 0 : 
            largest = stack[0] if stack[0] > inp[1] else inp[1]
        else : 
            largest = inp[1]
        stack.insert(0, inp[0])
        stack.insert(0, largest)
    elif inp[0] == 2 : 
        stack.pop(0)
        stack.pop(0)
    else :
        print stack[0]