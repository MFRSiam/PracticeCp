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

// Not Implemented The Problem

func main() {
	defer writer.Flush()

	var a, b int
	var s string
	scanf("%d %d\n", &a, &b)
	scanf("%s \n", &s)
	printf("%d\n", a+b)
	printf("%s\n", s)
}
