/*
 Given two strings a, and b, determine if they share a common substring.
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


function twoStrings(s1, s2){
    var letters = new Array(26);
    for(var i = 0; i < s1.length; i++)
        letters[s1.charCodeAt(i) - 97] = true;
    for(var i = 0; i <s2.length; i++)
        if(letters[s2.charCodeAt(i) - 97] == true)
            return "YES";
    return "NO";
}

function main() {
    var q = parseInt(readLine());
    for(var a0 = 0; a0 < q; a0++){
        var s1 = readLine();
        var s2 = readLine();
        var result = twoStrings(s1, s2);
        process.stdout.write("" + result + "\n");
    }
}
