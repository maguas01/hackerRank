

n, m = map(long, raw_input().split() )


largest = 0
aSum = 0

arr = [0]*(n+1)

for x in range(m) :
    a, b, k = map(long, raw_input().split())

    arr[a] += k
    if(b+1 <= n) : 
        arr[b+1] -= k

for numbers in arr :
    aSum += numbers
    largest = aSum if ( aSum > largest ) else largest

print largest
    
