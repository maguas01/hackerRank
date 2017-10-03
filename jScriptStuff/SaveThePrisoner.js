/*
A jail has n prisoners, and each prisoner has a unique id number, s , ranging from 1 to n . There are m sweets that must be 
distributed to the prisoners.

The jailer decides the fairest way to do this is by sitting the prisoners down in a circle (ordered by ascending  s), and then, 
starting with some random s, distribute one candy at a time to each sequentially numbered prisoner until all candies are distributed. 
For example, if the jailer picks prisoner  s = 2 , then his distribution order would be (2,3,4,5,...,n-1,n,1,2,3,4,...) until all m sweets are distributed.

But wait—there's a catch—the very last sweet is poisoned! Can you find and print the ID number of the last prisoner to receive 
a sweet so he can be warned?
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

function saveThePrisoner(n, m, s){
    var num = (m + s - 1) % n;
    return num == 0 ? n : num;
}

function main() {
    var t = parseInt(readLine());
    for(var a0 = 0; a0 < t; a0++){
        var n_temp = readLine().split(' ');
        var n = parseInt(n_temp[0]);
        var m = parseInt(n_temp[1]);
        var s = parseInt(n_temp[2]);
        var result = saveThePrisoner(n, m, s);
        process.stdout.write(""+result+"\n");
    }

}
