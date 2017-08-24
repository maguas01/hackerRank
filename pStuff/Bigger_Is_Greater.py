'''
Given a word w rearragne the letters of w to construct another word s in such a way that s is 
lexicographically greater than w. In case of multiple possible answers, find the lexicographically 
smallest one among them. 
'''

#!usr/bin/python

def nextPermutation(word) :
    #moving backwards find non-increasing suffix
   i = len(word) -1
   while  i > 0 and word[i - 1] >= word[i] :
       i -= 1
   if i <= 0 :
       return False
   #moving backwards find the next suffix that is smaller than splitword[i-1]
   j = len(word) - 1
   while word[j] <= word[i-1] :
        j -= 1
   #swap i,j
   word[i-1], word[j] = word[j], word[i - 1]
   k = len(word) - 1
   word[i : ] = word[k : i - 1 : -1]
   return True


def main() :
   t = int(raw_input())
   for x in xrange (t) :
       word =list( raw_input())
       if(nextPermutation(word)) :
           print "".join(word)
       else :
           print "no answer"

if __name__ == '__main__' :
    main()
