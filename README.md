# gambit-types
A window into Gambit's types. Everything is a ___SCMOBJ.

## Examples

```
> (import :belmarca/types)
> (typeof "Hello, world!")
"sSTRING"
> (typeof 0)
"tFIXNUM"
> (typeof 1.2)
"sFLONUM"
> (typeof #f)
"FAL"
> (typeof #t) 
"TRU"
> (typeof '())
"NUL"
> (typeof '(1 2))
"tPAIR"
> (typeof (+ 2 2))
"tFIXNUM"
> (typeof (lambda (x) x))
"sPROCEDURE"
> (defstruct x-s (a b c))
> (typeof (x-s 1 2 3))
"sSTRUCTURE"
> (typeof 3+4i)           
"sCPXNUM"
> (typeof 1/2)
"sRATNUM"
> (typeof 'a)
"sSYMBOL"
> (typeof #\a)
"err: unknown special type"
> (typeof #!eof)
"EOF"
> (typeof kw:)
"sKEYWORD"
> (typeof (u8vector 1 2 3))
"sU8VECTOR"
> (typeof (f64vector 10.0 20.0 30.0))
"sF64VECTOR"
```
