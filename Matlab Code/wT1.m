
instrfindall
s1 = serial('COM6');                            %define serial port
s1.BaudRate=9600; 
%open serial port
fopen(s1);
s1.ReadAsyncMode = 'continuous';
clear data;
while(1)                                  %wait until Arduino outputs data
    
    i = i+1;
    
    data=fscanf(s1);                      %read sensor
    
    flushinput(s1);
    
    disp(data);
    
end 