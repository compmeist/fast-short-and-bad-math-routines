float fast_n_bad_log( float x )

/* this is a horribly inaccurate handwaiving log 
   ,but (on the bright side) it diverges sorta linearly from ln() for x > 50
   and seems stable and continuous: accepts any numeric input (including negative numbers) 
    
   ( it may be good for displaying a qualitative graph )
 
   zeros at x=0 and near x=-49.86
   gives a somewhat "close" answer near x=167
      similar to log10  logE  then log 2 
 
  Spreadsheet expression:
  =(A2/(1+A2/(2+A2/(3+(4*A2)/(4+(4*A2)/(5+(9*A2)/(6+A2))))))) / C$1  
    ( put your constant in cell C1 )
 */
  
{ return ( (x/(1+x/(2+x/(3+(4*x)/(4+(4*x)/(5+(9*x)/(6+x))))))) / 2.3026 );
}

