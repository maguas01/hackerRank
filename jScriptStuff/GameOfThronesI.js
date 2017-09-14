/*
Dothraki are planning an attack to usurp King Robert's throne. King Robert learns of this
conspiracy from Raven and plans to lock the single door through which the enemy can enter his
kingdom.

But, to lock the door he needs a key that is an anagram of a certain palindrome string.
The king has a string composed of lowercase English letters. Help him figure out whether any
anagram of the string can be a palindrome or not.
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

//////////////////////////////////////////////////////

function gameOfThrones(s){
    var alphabet = new Array(26).fill(0);
    var odd = 0;
    var a = s.length;
    for(var i = 0; i < s.length; i++){
        alphabet[ (s.charCodeAt(i) - 97)]++;
    }
    for(var i = 0; i < alphabet.length; i++){
        odd += alphabet[i] % 2;
    }
    if( (a % 2 == 0 && odd == 0) || (a % 2 == 1 && odd <= 1) ){
        return "YES";
    }
    return "NO";
}

function main() {
    var s = readLine();
    var result = gameOfThrones(s);
    process.stdout.write("" + result + "\n");
}