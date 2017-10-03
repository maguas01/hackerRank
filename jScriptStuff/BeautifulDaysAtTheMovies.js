/*
Lili likes to play games with integers and their reversals . For some integers x, we define reversed(x)
to be the reversal of all digits in x . For example, reversed(123) = 321, reversed(21) 12, and reversed (123) = 12.

Logan wants to go to the movies with Lilly on some day x satisfying i <= x <= j, but  he konws
she only goes to the movies on days she considers to be beautiful. Lilly consdiers a day to be beautiful if the abs value 
of the difference between x and reverse(x) is evenly divisible by k.

giving i, j, k count  and print the number of beautiful days when logan and lilly can go to the movies. 
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



function solve(i,j,k){
    var count = 0;
    for(var n = i; n < j + 1; n++){
        var reversed = rev(n);
        var results = Math.abs(n - reversed);
        if(results % k == 0)
            count++;
    }
    return count;
}

function rev(i){
    var reversedI = 0;
    var number = i;
    while( number != 0 ) {
        reversedI = reversedI * 10;
        reversedI = reversedI + number%10;
        number = Math.floor(number/10);
    }
    return reversedI;
}

function main() {
    var n_temp = readLine().split(' ');
    var i = parseInt(n_temp[0]);
    var j = parseInt(n_temp[1]);
    var k = parseInt(n_temp[2]);
    
    var answer = solve(i,j,k);
    process.stdout.write(""+ answer + "\n");
} 