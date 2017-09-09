/*
Sid is obsessed with reading short stories. Being a CS student, he is doing some interesting
frequency analysis with the books. He chooses strings s1 and s2 in such a way that 
|len(s1) - len(s2)| <= 1 .

Your task is to help him find the minimum number of characters of the first string he needs
to change to enable him to make it an anagram of the second string.

Note: A word x is an anagram of another word y if we can produce y by rearranging the
letters of x.
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

function anagram(s){
    if(s.length % 2 == 1)
        return -1;
    var letters = [];
    var count = 0;
    for (var i = 0; i < 26; i++)
        letters.push(0);
    for (var i = 0; i < s.length/2; i++){ 
        letters[s.charCodeAt(i) - 97]++;
    }
    for (var i = s.length/2; i < s.length; i++){ 
        letters[s.charCodeAt(i) - 97]--;
    }
    for (var i = 0; i < 26; i++){ 
        count += Math.abs(letters[i]);
    }
    return count/2;
}

function main() {
    var q = parseInt(readLine());
    for(var a0 = 0; a0 < q; a0++){
        var s = readLine();
        var result = anagram(s);
        process.stdout.write("" + result + "\n");
    }

}