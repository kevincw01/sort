package main
import "fmt"

func main() {
    arr:= []int{2,165,4,9,23,1,493,5,65,49,4,6,96,2,6,72,2,3,35,0,2} 
    
    print_arr(arr)
    
    i_sort(arr)
    
    print_arr(arr)
}

func print_arr(a []int) {
    var siz int = len(a)
    
    for i := 0; i<siz; i++ {
        fmt.Print(a[i])
        if (i+1) < siz {
            fmt.Print(", ")
        } else {
            fmt.Print("\n")
        }
    }

}

func i_sort(a []int) {
    for i:= 1; i<len(a); i++ {
        var j int = i
        for (j > 0) && (a[j-1] > a[j]) {
            var k int = a[j]
            a[j] = a[j-1]
            a[j-1] = k
            j = j-1
        }
    }
}
