process.stdin.setEncoding('ASCII');
let string = '';
process.stdin.on('data', (data) => string += data);

const main = ( input ) => {
    let n = Number(input[0]);
    let arr = input[1].split(' ').map(Number);

    let freq = {};
    for (let i = 0; i < arr.length; ++i) freq[arr[i]] = i + 1;

    for (let i = 0; i < arr.length; ++i) {
        for (let j = 0; j < arr.length; ++j) {
            if (i == j) continue;

            let val = arr[i] + arr[j];
            if ( freq[val] !== undefined ) {
                console.log(freq[val], i + 1, j + 1);
                return;
            }
        }
    }

    console.log(-1);
}

process.stdin.on('end', () => main(string.trim().split('\n')));
