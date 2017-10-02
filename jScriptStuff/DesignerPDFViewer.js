
/*
	In this type of PDF viewer, the width of the rectangular selection area is equal to the number of letters in the word times 
	the width of a letter, and the height is the maximum height of any letter in the word.
	
	Consider a word consisting of lowercase English alphabetic letters, where each letter is 1mm wide. 
	Given the height of each letter in millimeters (mm), find the total area that will be highlighted by blue 
	rectangle in mm^2 when the given word is selected in our new PDF viewer.
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

function solve(h, word){
    var largest = -99;
    for(var i = 0; i < word.length; i++){
        var number = h[word.charCodeAt(i) - 97];
        if(number > largest )
            largest = number;
    }
    return largest * word.length;
}


function main() {
    h = readLine().split(' ');
    h = h.map(Number);
    var word = readLine();
    
    var answer = solve(h, word);
    process.stdout.write(""+ answer +"\n");

}