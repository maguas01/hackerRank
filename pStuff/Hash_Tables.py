import collections

def ransom_note(magazine, ransom):
    mag = collections.Counter(magazine)
    ran = collections.Counter(ransom)

    for words in ransom :
        if mag[words] < ran[words] :
            return 0
    return 1

m, n = map(int, raw_input().strip().split(' '))
magazine = raw_input().strip().split(' ')
ransom = raw_input().strip().split(' ')
answer = ransom_note(magazine, ransom)
if(answer):
    print "Yes"
else:
    print "No"
