#### 1. What is GoLang?

- Go, is a modern programming language developed by google in 2009, used to build scalable and efficient servers, it combines the ease of high-level language with a low-level language, additionally golang has built-in support for concurrency making applications more fast

#### 2. Mention a few benefits of GoLang over other programming languages.

- Designed to effectively utilize the cores and memory of the machine
- Better memory management
- From the starting go is built for performance unlike other programming languages which was built just for side projects
- Low memory GO-routines(2KB) other programming languages such as java support parallelism which takes 4MB of memory
- Garbage collector which used Mark and Sweep algorithm
- Supports Struct, Interface and other unique data types

#### 4. What is GoLang Workspace?
- Introduced in ```Go version 1.18```
- Workspaces allow you to create projects of several modules that share a common list of dependencies through a new file called go.work
- The dependencies in this file can span multiple modules and anything declared in the go.work file will override dependencies in the modules’ go.mod

#### 5. Briefly explain Goroutine.

- ```Goroutine``` is a lightweight execution thread in the Go programming language and a function that executes concurrently with the rest of the program.
- Goroutines are incredibly cheap when compared to traditional threads as the overhead of creating a goroutine is very low(2KB of memory). Therefore, they are widely used in Go for concurrent programming.
- To invoke a function as a goroutine, use the go keyword.
- Goroutines want to communicate with each other For that, Go has channels

#### 6. Describe the CGo keyword in GoLang.

- ```Golang CGO``` is a Go package that enables developers to invoke C code from Go code and vice versa. This means that Go allows developers to build high-level, high-performance code while maintaining existing C libraries and code.
- CGO will enable you to write Go code that interacts with C code and C code that interacts with Go code.
- CGO has certain limitations, such as not supporting C++, C++ exceptions, and C++ thread-local storage
- Sample function
    ```
    import "C"
    import "fmt"

    func main() {
        a := 10
        b := 20
        c := C.addInC(C.int(a), C.int(b))
        fmt.Println("The sum of the two numbers is: ", c)

    }
    ```

#### 7. Explain Shadowing using an example.
- Shadowing occurs in Go when a variable declared in a nested scope has the same name as a variable declared in an outer scope. In such cases, the variable in the inner scope shadows or hides the variable in the outer scope.
```
    func main() {
        x := 10
        fmt.Println("Outer x:", x) // Outer x: 10

        {
            x := 20
            fmt.Println("Inner x:", x) // Inner x: 20
        }

        fmt.Println("Outer x:", x) // Outer x: 10
    }
```

#### 8. How would you explain GoLang Methods?
- Go methods are similar to Go function with one difference, i.e, the method contains a receiver argument in it. With the help of the receiver argument, the method can access the properties of the receiver. Here, the receiver can be of struct type or non-struct type. 
```
    func(reciver_name Type) method_name(parameter_list)(return_type){
    // Code
    }
```

#### 8. How would you explain GoLang Interface?

#### 9. How are errors handled in GoLang?
- GO has a special error type ```Error``` which is returned by a function if some thing goes wrong, then the calling function can check if the error is ```nil``` and if it is not then handle in properly
- Go provides a built-in ```panic function``` to handle exceptional situations, later ```recovery function``` is called to recover the error, panic passes some arguments to recovery for better error messages and continue the program

#### 11. Explain garbage collector in golang

- the Tricolor Mark and Sweep algorithm
- `Go's garbage collector (GC)` uses the Tricolor Mark and Sweep algorithm, which is designed for concurrent and efficient garbage collection. This algorithm categorizes objects into three colors: white, gray, and black, to determine their reachability and eligibility for collection, it ticks the variables in the memory with color and deletes variable if it is not used

#### 12. Disadvantages of Go language

- It's a relatively new language with not many libraries or information.
- With limited scope, automation can invite errors.
- It’s a high-level language with low-level features.
- It’s got defective dependency management.

#### 13. How a Go Program Compiles down to Machine Code

- ```The scanner```, which converts the source code into a list of tokens, for use by the parser.
- ```The parser```, which converts the tokens into an Abstract Syntax Tree to be used by code generation.
- ```The code generation```, which converts the Abstract Syntax Tree to machine code.
- ```More on this```(https://getstream.io/blog/how-a-go-program-compiles-down-to-machine-code/)


#### 14. Why Go Is Much Faster Than Most Other Languages
- Simplicity and Syntax
- Concurrency and Goroutines
- Garbage Collection
- Compilation and Static Typing
- Standard Library and Ecosystem

#### 15. Explain Channels
- Channels in golang can be defined as means through which various goroutines communicate with each other.
- The communication however is bi-directional by default which means you can send and receive using the same channel, the communication happens when both sides are ready.
- The semantics that the channel provides is ```FIFO```

#### 16. Distinguish unbuffered from buffered channels.
- This is a popular Golang interview question. The sender will block on an unbuffered channel until the receiver receives data from the channel, and the receiver will block on the channel until the sender puts data into the channel.

- The sender of the buffered channel will block when there is no empty slot on the channel, however, the receiver will block on the channel when it is empty, as opposed to the unbuffered equivalent.