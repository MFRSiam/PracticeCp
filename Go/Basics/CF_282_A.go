package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func printf(f string, a ...interface{}) { fmt.Fprintf(writer, f, a...) }
func scanf(f string, a ...interface{})  { fmt.Fscanf(reader, f, a...) }

func main() {
	defer writer.Flush()
	var n int
	var x int = 0
	scanf("%d \n", &n)
	for i := 0; i < n; i++ {
		var s string
		scanf("%s \n", &s)
		if s[1] == '+' {
			x++
		} else {
			x--
		}
	}
	printf("%d\n", x)
}
