package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func printf(f string, a ...interface{}) { fmt.Fprintf(writer, f, a...) }
func scanf(f string, a ...interface{})  { fmt.Fscanf(reader, f, a...) }

// / Not Working
func main() {
	var name1 string
	var name2 string
	fmt.Scan(&name1, &name2)
	strings.ToLower(name1)
	strings.ToLower(name2)
	var flag bool = false
	for i := 0; i < len(name1); i++ {
		if name1[i] != name2[i] {
			if name1 > name2 {
				fmt.Printf("1\n")
				flag = true
				break
			} else {
				fmt.Printf("-1\n")
				flag = true
				break
			}
		}
	}
	if !flag {
		fmt.Printf("0\n")
	}

}
