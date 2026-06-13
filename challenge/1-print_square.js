#!/usr/bin/node
/*
 * Prints a square of a given size using the # character
 */
if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.exit(1);
}

var size = parseInt(process.argv[2]);

for (var i = 0 ; i < size ; i++) {
    for (var j = 0 ; j < size ; j++) {
        process.stdout.write("#");
    }
    process.stdout.write("\n");
}
