/*
you are given a sequence of n integers p(1), p(2), ..., p(n). Each element in the sequence is distint and 
satisfies 1 < p(x) <= n. For each x where 1 <= x <= n, find any integer y such that p(p(y)) congruent to x
and print the value of y on a new line. 
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

function solve(map, t){
    for(var i = 0; i < t; i++){
        var num = map[i + 1];
        var result = map[num];
        process.stdout.write(""+ result +"\n");
    }
}

function main(){
    var map = new Object();
    var t = parseInt(readLine());
    var n = readLine().split(' ');
    for(var i = 1; i < t+1; i++){
        var q = parseInt(n[i-1]);
        map[q] = i;
    }
    solve(map, t);
}