/*
Given an array of integers, find and print the maximum number of integers you can select from the array 
such that the absolute difference between any two of the chosen integers is .<= 1
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


function solve(a){
    var largest = 0;
    for(var i = 0; i < a.length; i++){
        var count = 0;
        for(var j = 0; j < a.length; j++){
            if(a[j] + 1 == a[i] || a[j] == a[i])
                count++;
        }
        if(count > largest)
            largest = count;
    }
    return largest;
}

function main() {
    var n = parseInt(readLine());
    a = readLine().split(' ');
    a = a.map(Number);
    process.stdout.write("" + solve(a) + "\n");
}
