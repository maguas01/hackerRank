
/*
  A weighted string is a string of lowercase English letters where each letter has a weight in the inclusive range from a = 1 to z = 26
 
  Given a String s, let U be the set of weights for all the possible uniform
  substrings(contiguous) of string . You have to answer n queriesm where each query i
  consists of a single integer x_i. For each query, print Yes on a new line if x_i belongs to 
  U; otherwise print No instead.
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

function main() {
    var s = readLine();
    var numbers = new Array(10000000);
    var count = 1;
    var lastChar = -99;
    for(var i = 0; i < s.length; i++) { 
        var currChar = s.charCodeAt(i) - 96;
        if(currChar == lastChar) 
            count += 1
        else
            count = 1
        numbers[(currChar * count)] = 1
        lastChar = currChar
    }
    var n = parseInt(readLine());
    for(var a0 = 0; a0 < n; a0++){
        var x = parseInt(readLine());
        if(numbers[x] == 1)
            process.stdout.write("Yes\n");
        else
            process.stdout.write("No\n");   
    }
}
