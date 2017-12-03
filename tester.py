import os



compile_command = 'g++'


tests = ['test_apply_over', 'test_apply_along', 'test_apply', 'test_max_over', 'test_print']

for test in tests:
	print('Test: ' + test)
	os.system(compile_command + ' ' + test + '.cpp -o ' + test + '.exe')
	os.system(test + '.exe')
	print('--------------------------\n\n\n')
