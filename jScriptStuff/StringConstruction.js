/*
 Amanda has a string, m , of lowercase letters that she wants to copy into a new string, p . She
 can perform the following operations any number of times to construct string p :

    Append a character to the end of string p at a cost of 1 dollar.
    Choose any substring of p and append it to the end of p at no charge.

 Given n strings (i.e., s0, s1,...,s(n-1) ), find and print the minimum cost of copying each s(i) to p(i) on a new line.
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

function stringConstruction(s) {
    var count = 0;
    var alphabet = new Array(26).fill(false);
    for(var i = 0; i < s.length; i++)
        alphabet[ s.charCodeAt(i) - 97 ] = true;
    for(var i = 0; i < alphabet.length; i++)
        if(alphabet[i])
            count++;
    return count;
}

function main() {
    var q = parseInt(readLine());
    for(var a0 = 0; a0 < q; a0++){
        var s = readLine();
        var result = stringConstruction(s);
        process.stdout.write("" + result + "\n");
    }
}