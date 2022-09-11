package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func printf(f string, a ...interface{}) { fmt.Fprintf(writer, f, a...) }
func scanf(f string, a ...interface{})  { fmt.Fscanf(reader, f, a...) }

func main() {
	defer writer.Flush()
	var matrix [5][5]int
	var found_x, found_y int
	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			fmt.Scan(&matrix[i][j])
			if matrix[i][j] == 1 {
				found_x = i
				found_y = j
			}
		}
	}
	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			printf("%d", matrix[i][j])
		}
		printf("\n")
	}
	var diff = int(math.Abs(float64(2-found_x)) + math.Abs(float64(2-found_y)))
	printf("%d", diff)
}
