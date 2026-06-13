#!/usr/bin/node

function printSquare(size) {
    if (isNaN(size) || size <= 0) {
        return;
    }

    for (let i = 0; i < size; i++) {
        console.log('#'.repeat(size));
    }
}

const size = parseInt(process.argv[2], 10);
printSquare(size);
