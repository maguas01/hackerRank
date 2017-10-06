/*
In Insertion Sort Part 1, you sorted one element into an array. Using the same approach repeatedly, can 
you sort an entire unsorted array?

Guideline: You already can place an element into a sorted array. How can you use that code to build 
up a sorted array, one element at a time? Note that in the first step, when you consider an array with 
just the first element - that is already "sorted" since there's nothing to its left that is smaller.

In this challenge, don't print every time you move an element. Instead, print the array after each 
iteration of the insertion-sort, i.e., whenever the next element is placed at its correct position.

Since the array composed of just the first element is already "sorted", begin printing from the second 
element and on.
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

function printArray(array){
    for(var i = 0; i < array.length; i++){
        process.stdout.write("" + array[i] + " ");
    }
    process.stdout.write("\n");
}

function solve(array){
    for(var i = 1; i < array.length; i++){
        var j = i - 1;
        while(array[j + 1] < array[j]){
            var temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
            if(j > 0)
            j--;
        }
         printArray(array);
    }
}

function main(){
    var n = readLine();
    var array = new Array(n);
    var temp = readLine().split(' ');
    for(var i = 0; i < n; i++){
        array[i] = parseInt(temp[i]);
    }
    solve(array);
}
