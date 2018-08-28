function varargout = RD1(varargin)
% RD1 MATLAB code for RD1.fig
%      RD1, by itself, creates a new RD1 or raises the existing
%      singleton*.
%
%      H = RD1 returns the handle to a new RD1 or the handle to
%      the existing singleton*.
%
%      RD1('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in RD1.M with the given input arguments.
%
%      RD1('Property','Value',...) creates a new RD1 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before RD1_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to RD1_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help RD1

% Last Modified by GUIDE v2.5 07-Dec-2017 14:08:04

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @RD1_OpeningFcn, ...
                   'gui_OutputFcn',  @RD1_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before RD1 is made visible.
function RD1_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to RD1 (see VARARGIN)

% Choose default command line output for RD1
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes RD1 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = RD1_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function Reading_Callback(hObject, eventdata, handles)
% hObject    handle to Reading (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of Reading as text
%        str2double(get(hObject,'String')) returns contents of Reading as a double


% --- Executes during object creation, after setting all properties.
function Reading_CreateFcn(hObject, eventdata, handles)
% hObject    handle to Reading (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in Enter.
function Enter_Callback(hObject, eventdata, handles)
% hObject    handle to Enter (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

s1 = Bluetooth('BRAILLE',1)                            %define serial port

q = (get(handles.RDText,'String'));
fopen(s1)


fwrite(s1,g)

% --- Executes on button press in End.
function End_Callback(hObject, eventdata, handles)
% hObject    handle to End (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
Test_Gui;
