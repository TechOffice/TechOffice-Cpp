#Cygwin Command 

```
opencv_createsamples.exe -info list.txt -vec sunglasses.vec
```

```
opencv_traincascade.exe -data output -vec sunglasses.vec -bg bg.txt -numPos 8 -numNeg 4
```