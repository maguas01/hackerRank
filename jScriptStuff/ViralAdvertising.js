/*
HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly 5 people 
on social media.

On the first day, half of those 5 people (i.e. floor(5/2) like the advertisement and each person shares it with of their friends; the remaining people (i.e., 5 - floor(5/2) = 3) 
delete the advertisement because it doesn't interest them. So, at the beginning of the second day, floor(5/2) * 3 = 2 * 3 = 6 people receive the advertisement.

On the second day, half of the people who received the advertisement share it with new friends. So, at the beginning of the third day, floor(6/2) * 3 = 3 * 3 = 9
people receive the advertisement. The diagram below depicts the advertisement's virality over the first three days (green denotes a person 
that likes the advertisement and red denotes a person that disliked and deleted it):
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

function solve(n){
    var count = 0;
    var m = 5;
    while(n-->0){
        m = Math.floor(m/2);
        count += m;
        m *= 3;
    }
    return count;
}

function main(){
    var n = readLine();
    var answer = solve(n);
    process.stdout.write("" + answer + "\n");
}