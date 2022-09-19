// go/cmd/libfoo/main.go
package main
/*
#cgo CFLAGS: -I/usr/lib/jvm/java-8-openjdk-amd64/include/ -I/usr/lib/jvm/java-8-openjdk-amd64/include/linux/include/
#include "jx.h"
*/
import "C"


// other imports should be seperate from the special Cgo import
import (
    "rogchap.com/libfoo/foo"
    "fmt"
)

func GetBatteryStatus() string {
	return C.GoString(C.get_battery_status())
}

//export reverse
func reverse(in *C.char) *C.char {
    fmt.Println(GetBatteryStatus());
    return C.CString(foo.Reverse(C.GoString(in)+GetBatteryStatus()))
}

func main() {}
