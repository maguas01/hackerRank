
n = int(raw_input())
strings = []
for x in range(n) :
    strings.append(raw_input())

q = int(raw_input())

for i in range(q) :
    find = raw_input()
    count = 0
    for j in range(n) :
        if ( find == strings[j] ) : 
            count += 1
    print (count)
    
