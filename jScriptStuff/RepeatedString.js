/*
Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.

Given an integer, n, find and print the number of letter a's in the first  n letters of Lilah's infinite string.
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
function solve(n, s){
    var count = 0;
    for(var i = 0; i < s.length; i++)
        if(s.charAt(i) == 'a')
            count++;
    
    var j = Math.floor(n/s.length);
    count *= j;
    
    var k = n % s.length;
    for(var i = 0; i < k; i++)
        if(s.charAt(i) == 'a')
            count++
    
    return count;
}


function main() {
    var s = readLine();
    var n = parseInt(readLine());
    var results = solve(n, s);
    process.stdout.write("" + results + "\n");
}
