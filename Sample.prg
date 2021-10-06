/*
**  Sample.prg -- hbPy simple compile and run a python file
**
** Developed by Diego Fazio(2021)
** Program call to Sample.py file, compile and run it, then get the output from file.out
*/

function main()

   hbPy_Run( hb_memoread( "Sample.py" ) )
   ?? hb_memoread( 'file.out' )

return
