unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Image1: TImage;
    procedure Button1Click(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
var i,x,y:integer;
begin
  image1.Canvas.MoveTo(0,0);
   x:=600;
   y:=0;
  for i:=0 to 30 do
  begin
  image1.Canvas.lineto(x,y);
  y:=y+15;
  x:=x-600;
  end;





end;

end.

