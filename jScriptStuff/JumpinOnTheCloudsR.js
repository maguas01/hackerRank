/*
Aerith is playing a cloud game! In this game, there are n clouds numbered sequentially from 0 to  n-1. 
Each cloud is either an ordinary cloud or a thundercloud.

Aerith starts out on cloud 0 with energy level E = 100. She can use 1 unit of energy to make a jump of size k to cloud (i+k)%n, 
and she jumps until she gets back to cloud . If Aerith lands on a thundercloud, her energy (e) decreases by 2 additional units. 
The game ends when Aerith lands back on cloud 0.

Given the values of n,k , and the configuration of the clouds, can you determine the final value of after the game ends?
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

function solve(c, k){
    var e = 100;
    for(var i = 0; i < c.length; i += k){
        if(c[i] == 1){
            e -= 2;
        }
        e -= 1;
    }
    return e;
}

function main() {
    var n_temp = readLine().split(' ');
    var n = parseInt(n_temp[0]);
    var k = parseInt(n_temp[1]);
    c = readLine().split(' ');
    c = c.map(Number);
    var results = solve(c, k);
    process.stdout.write("" + results + '\n');
}

