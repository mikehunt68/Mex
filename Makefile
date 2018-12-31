.PHONY: clean All

All:
	@echo "----------Building project:[ ver_1 - Debug ]----------"
	@"$(MAKE)" -f  "ver_1.mk"
clean:
	@echo "----------Cleaning project:[ ver_1 - Debug ]----------"
	@"$(MAKE)" -f  "ver_1.mk" clean
