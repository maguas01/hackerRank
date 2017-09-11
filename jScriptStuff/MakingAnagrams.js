/*
 Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?

Given two strings, and , that may or may not be of the same length, determine the minimum number of character deletions required to make and anagrams. Any characters can be deleted from either of the strings.

This challenge is also available in the following translations:
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


function makingAnagrams(s1, s2){
    var arr = [];
    var count = 0;
    for(var i = 0; i < 26; i++)
        arr.push(0);
    
    for(var i = 0; i < s1.length; i++) {
        arr[ (s1.charCodeAt(i) - 97)] += 1;
    }
     for(var i = 0; i < s2.length; i++){
        arr[(s2.charCodeAt(i) - 97)] -= 1;   
    }
    for(var i = 0; i < arr.length; i++){
        count += Math.abs(arr[i]);
    }

    return count;
}


function main(){
    var s1 = readLine();
    var s2 = readLine();
    var result = makingAnagrams(s1, s2);
    process.stdout.write("" + result + "\n");

}
