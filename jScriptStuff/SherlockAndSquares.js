/*
Watson gives two integers ( and ) to Sherlock and asks if he can count the number of square integers
 between and (both inclusive).
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

function solve(a, b){
    var n = 0, k = 0, i = 0, count = 0;
    while (n < b+1){
        k = 2 * i + 1;
        n = n + k;
        if( a <= n && n <= b )
            count++;
        i++;
    }
    return count;
}

function main(){
    var n = readLine();
    while(n-->0){
        var temp = readLine().split(' ');
        var a = parseInt(temp[0]);
        var b = parseInt(temp[1]);
        var results = solve(a, b);
        process.stdout.write("" + results + "\n");
    }
}