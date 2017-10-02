/*
	Brie’s Drawing teacher asks her class to open their n-page book to page number p. Brie can either start turning 
	pages from the front of the book (i.e., page number n) or from the back of the book (i.e., page number 1), and she 
	always turns pages one-by-one (as opposed to skipping through multiple pages at once). When she opens the 
	book, page 1 is always on the right side:
	
	Each page in the book has two sides, front and back, except for the last page which may only have a front side 
	depending on the total number of pages of the book (see the Explanation sections below for additional diagrams).

	Given  n and p, find and print the minimum number of pages Brie must turn in order to arrive at page p . 
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

function solve(n, p){
    n = Math.floor(n/2);
    p = Math.floor(p/2) ;
    if( n-p < p )
        return n-p;
    return p;
}

function main() {
    var n = parseInt(readLine());
    var p = parseInt(readLine());
    var result = solve(n, p);
    process.stdout.write(""+result+"\n");

}