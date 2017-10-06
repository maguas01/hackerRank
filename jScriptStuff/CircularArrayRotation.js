/*
John Watson performs an operation called a right circular rotation on an array of integers,[a0, a1,..., an-1] . After performing one right 
circular rotation operation, the array is transformed from [a0, a1,..., an-1]  to [an-1, a0,...,a1].

Watson performs this operation k times. To test Sherlock's ability to identify the current element at a particular position 
in the rotated array, Watson asks q queries, where each query consists of a single integer, m , for which you must print the 
element at index m in the rotated array (i.e., the value of  a_m).
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

function solve(a, m, k){
        var i = -k; 
        while(i < 0){     // i = -k mod a.size(). i is now the zeroth index of the roated array
            i += a.length;
        }
        for(var j = 0; j < m.length; j++){
            var index = (i + m[j]) % a.length; // (i +m[j]) % a.size() is the new index we wish to print
            process.stdout.write("" + a[index] + "\n");
        }
    }

function main() {
    var n_temp = readLine().split(' ');
    var n = parseInt(n_temp[0]);
    var k = parseInt(n_temp[1]);
    var q = parseInt(n_temp[2]);
    var m = new Array(q);
    a = readLine().split(' ');
    a = a.map(Number);
    
    for(var a0 = 0; a0 < q; a0++){
        m[a0] = parseInt(readLine());
    }
    solve(a, m, k);

}
