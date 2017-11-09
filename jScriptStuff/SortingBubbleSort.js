/*
Given an n element array A = a0, a1,...,a(n-1) fo distint elements, sort array A in ascending order using the 
Bubble Sort algorithm above. Once sorted, print the following three line: 
	1. Arrays is sorted in numSwaps swaps, where numSwaps is the number of swaps that took place
	2.  First Element: firstElement, where  firstElement is the first element in the sorted array
	3. Last Element: lastElement, where  lastElement is the last element in the sorted array
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


function bubbleSort(a){
    var numberOfSwaps = 0;
    for(var i = 1; i < a.length; i++){
            for(var j = 1; j < a.length; j++){
                var current = a[j];
                var last = a[j-1];
                if( last > current ){
                    a[j-1] = current;
                    a[j] = last;
                    numberOfSwaps++;
                }
            }
        }
    return numberOfSwaps;
}

function main() {
    var n = parseInt(readLine());
    a = readLine().split(' ');
    a = a.map(Number);
    var numberOfSwaps = bubbleSort(a);
    process.stdout.write("Array is sorted in " + numberOfSwaps + " swaps.\n");
    process.stdout.write("First Element: " + a[0]  + "\n");
    process.stdout.write("Last Element: " + a[n-1]  + "\n");
}