/*
Sherlock considers a string, s , to be valid if either of the following conditions are satisfied:
    1. All characters in s have the same exact frequency (i.e., occur the same number of times). For example, s = "aabbcc" is valid, but s = "baacdd" is not valid.
    
    2. Deleting exactly 1 character from will result in all its characters having the same frequency. For example, s "aabbccc" and s = "aabbc" are valid because all their letters will
    have the same frequency if we remove 1 occurrence of c, but s = "abccc" is not valid because we'd need to 3 remove characters.

Given s, can you determine if it's valid or not? If it's valid, print YES on a new line; otherwise, print NO instead.
 */

process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function check(alphabet){
    var lastNum = alphabet[0];
    for(var i = 0; i < 26; i++) { 
        if(alphabet[i] != lastNum && alphabet[i] != 0)
            return false;
        if(alphabet[i] != 0)
            lastNum = alphabet[i];
    }
    return true;
}

function isValid(s){
    var alphabet = new Array(26).fill(0);
    for(var i = 0; i < s.length; i++)
        alphabet[s.charCodeAt(i)-97]++;
    if(check(alphabet))
        return "YES";
    var Largest = Number.MIN_SAFE_INTEGER;
    var Smallest = Number.MAX_SAFE_INTEGER;
    var largestIndex = -99;
    var smallestIndex = 99;
    for(var i = 0; i < 26; i++){
        var curr = alphabet[i];
        if(curr > Largest){
            Largest = curr;
            largestIndex = i;
        }
        if(curr < Smallest && curr != 0){ 
            Smallest = curr;
            smallestIndex = i;
        }
    }
    alphabet[largestIndex] -= 1;
    if(check(alphabet))
        return "YES";
    alphabet[largestIndex] += 1;
    // remove 1 from the smallest index and check  
    alphabet[smallestIndex] -= 1;
    if(check(alphabet))
        return "YES";
    return "NO";
}

function main() {
    var s = readLine();
    var result = isValid(s);
    process.stdout.write(""+result+"\n");

}
