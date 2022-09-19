Here we are linking library foo with react so that we can directly call reverse from react and it calls our reverse function written in go.
Also in cmd/sdk/main.go cmd/sdk/jx.c is the interface through which we can have this functionality in the other side, that is calling java functions
through our go library. Code in jx.c will compile anyways, as all the functionality is used in runtime like looking for a java class, then looking 
for a function and then calling that function. So we need to add appropriate error handling here.

In the makefile, we simply build this out and place the built c libraries in our android react app. (build working for all architectures)
