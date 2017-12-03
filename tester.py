import os


compile_command = 'g++'

tests = [ 'test_apply_over', 'test_apply_along', 'test_apply', 'test_max_over', 'test_print' ]

for test in tests:
    print( '\n--------------------------' )
    print( 'TEST: ' + test + '\n' )
    
    os.system( compile_command + ' ' + test + '.cpp -o ' + test + '.exe' )
    os.system( test + '.exe' )

    if test != 'test_max_over':
        os.system( test + '.exe < input_' + test + '.txt' )
    else:
        os.system( test + '.exe' )
