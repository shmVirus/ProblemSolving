debug :=

<< = @echo

%.out: %
%.out: %.o
	@ $(<<) "LINK" $(<)
	@ $(CXX) $(<) -o $(@) -g
	@ $(<<) " RUN" $(@)
	@ $(<<) "----"
	@ test "$(debug)" = "" && ./$(@) || gdb ./$(@)
.SILENT:
	@ rm $(@)

%.c.o: %.c
	@ $(<<) "  CC" $(<)
	@ $(CC) -c $(<) -o $(@) -g

%.cpp.o: %.cpp
	@ $(<<) " CXX" $(<)
	@ $(CXX) -c $(<) -o $(@) -g

all:
	$(<<) "To Compile and Execute automatically, run below command"
	$(<<) "make FileName.extension.out"
	$(<<) "Example: make 1000-Hello_World.c.out"
	$(<<) "To clean up all the generated object files and executables, just run 'make clean'"
clean:
	@rm -f *.out *.o

.PHONY: clean
