/*
Create a list, seqList of N empty sequences, wherer each sequence is indexed from 0 to N - 1.
the elemts within each of the N sequences also use 0 indexing.

create an integer, lastAnswer, and initialize it to 0

the 2 types of queries that can be performed on your list of sequences are described below : 
	1. Query 1 x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		append integer y to sequence seq
	
	2. 2 Query x y
		find the sequence seq at index (  ( x xor lastAnswer) % N) in seqList 
		find the value of element y % size in seq (where  size is the size of seq) and assign it to lastAnswer
		print the new value of lastAnswer on a new line
		
	Given N, Q, queries, execute each query.  
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

//////////////////////////////////////////////////////////////////////

function functionOne(n, x, y, lastAnswer, arr){
    var seq = (x ^ lastAnswer) % n;
    arr[seq].push(y);
}

function functionTwo(n, x, y, lastAnswer, arr){
    var seq = (x ^ lastAnswer) % n;
    var size = arr[seq].length;
    return arr[seq][ y % size];
}


function main(){
   
    var a = readLine().split(' ');
    var n = parseInt(a[0]);
    var q = parseInt(a[1]);
    
    var arr = [];
    for(var i = 0; i < n; i++){
        arr[i] = [];
    }
    
    var lastAnswer = 0;
    for(var i = 0; i < q; i++){
        var b = readLine().split(' ');
        var num = parseInt(b[0]);
        var x = parseInt(b[1]);
        var y = parseInt(b[2]);
        if(num == 1){
            functionOne(n, x, y, lastAnswer, arr);
        } else {
            lastAnswer = functionTwo(n, x, y, lastAnswer, arr);
            process.stdout.write("" + lastAnswer + "\n");
        }
    }
}
