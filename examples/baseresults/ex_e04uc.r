nagcpp::opt::nlp1_solve Example
                                                                                
 *** e04uc                                                                      
                                                                                
 Parameters                                                                     
 ----------                                                                     
                                                                                
 Linear constraints.....         1       Variables..............         4      
 Nonlinear constraints..         2                                              
                                                                                
 Infinite bound size....  1.00E+20       COLD start.............                
 Infinite step size.....  1.00E+20       EPS (machine precision)  1.11E-16      
 Step limit.............  2.00E+00       Hessian................        NO      
                                                                                
 Linear feasibility.....  1.05E-08       Crash tolerance........  1.00E-02      
 Nonlinear feasibility..  1.05E-08       Optimality tolerance...  3.26E-12      
 Line search tolerance..  9.00E-01       Function precision.....  4.37E-15      
                                                                                
 Derivative level.......         3       Monitoring file........        -1      
 Verify level...........         0                                              
                                                                                
 Major iterations limit.        50       Major print level......         1      
 Minor iterations limit.        50       Minor print level......         0      
                                                                                                                        
 Start point                                                                                                            
    1.000000E+00   5.000000E+00   5.000000E+00   1.000000E+00                                                           
                                                                                
 Workspace provided is     IWORK(      17),  WORK(     185).                    
 To solve problem we need  IWORK(      17),  WORK(     185).                    
                                                                                                                        
                                                                                                                        
 Verification of the constraint gradients.                                                                              
 -----------------------------------------                                                                              
                                                                                                                        
 The constraint Jacobian seems to be ok.                                                                                
                                                                                                                        
 The largest relative error was    2.29E-07  in constraint    2                                                         
                                                                                                                        
                                                                                                                        
                                                                                                                        
 Verification of the objective gradients.                                                                               
 ----------------------------------------                                                                               
                                                                                                                        
 The objective gradients seem to be ok.                                                                                 
                                                                                                                        
 Directional derivative of the objective    8.15250000E-01                                                              
 Difference approximation                   8.15249734E-01                                                              
                                                                                
 Exit from NP problem after     5 major iterations,                             
                                9 minor iterations.                             
                                                                                
                                                                                
 Varbl State     Value       Lower Bound   Upper Bound    Lagr Mult   Slack     
                                                                                
 V   1    LL    1.00000       1.00000       5.00000       1.088         .       
 V   2    FR    4.74300       1.00000       5.00000           .      0.2570     
 V   3    FR    3.82115       1.00000       5.00000           .       1.179     
 V   4    FR    1.37941       1.00000       5.00000           .      0.3794     
                                                                                
                                                                                
 L Con State     Value       Lower Bound   Upper Bound    Lagr Mult   Slack     
                                                                                
 L   1    FR    10.9436          None       20.0000           .       9.056     
                                                                                
                                                                                
 N Con State     Value       Lower Bound   Upper Bound    Lagr Mult   Slack     
                                                                                
 N   1    UL    40.0000          None       40.0000     -0.1615     -3.5264E-11 
 N   2    LL    25.0000       25.0000          None      0.5523     -2.8791E-11 
                                                                                
 Exit e04uc  - Optimal solution found.                                          
                                                                                
 Final objective value =    17.01402                                            
