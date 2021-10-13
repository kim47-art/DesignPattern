clean:
	find . -name "*.exe" | xargs rm
	find . -name "*.so" | xargs rm
	find . -name "*.o" | xargs rm