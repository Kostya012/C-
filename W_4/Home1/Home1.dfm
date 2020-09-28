object Form1: TForm1
  Left = 192
  Top = 113
  Width = 783
  Height = 540
  Caption = 'L_1_21_2'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 40
    Width = 230
    Height = 29
    Caption = #1044#1083#1080#1085#1072' '#1084#1072#1089#1089#1080#1074#1086#1074' R '#1080' K:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -21
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 40
    Top = 296
    Width = 338
    Height = 33
    Caption = #1057#1091#1084#1084#1072' '#1101#1083#1077#1084#1077#1085#1090#1086#1074' '#1084#1072#1089#1089#1080#1074#1072' '#1042'='
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -24
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Sum_Mas_B: TLabel
    Left = 384
    Top = 296
    Width = 16
    Height = 33
    Caption = '?'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -29
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 40
    Top = 336
    Width = 414
    Height = 33
    Caption = #1052#1072#1082#1089#1080#1084#1072#1083#1100#1085#1099#1081' '#1101#1083#1077#1084#1077#1085#1090' '#1084#1072#1089#1089#1080#1074#1072' B='
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -24
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Max_Mas_B: TLabel
    Left = 456
    Top = 336
    Width = 16
    Height = 33
    Caption = '?'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -29
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object Dl_Mas: TEdit
    Left = 272
    Top = 40
    Width = 81
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = '10'
    OnChange = Dl_MasChange
  end
  object UpDown1: TUpDown
    Left = 353
    Top = 40
    Width = 16
    Height = 28
    Associate = Dl_Mas
    Min = 0
    Position = 10
    TabOrder = 1
    Wrap = False
  end
  object Isx_Mas: TStringGrid
    Left = 40
    Top = 96
    Width = 225
    Height = 169
    ColCount = 3
    FixedColor = clMoneyGreen
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 2
  end
  object BitBtn1: TBitBtn
    Left = 40
    Top = 408
    Width = 105
    Height = 49
    Caption = '&'#1055#1091#1089#1082
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clTeal
    Font.Height = -24
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object Sort_Mas: TStringGrid
    Left = 296
    Top = 96
    Width = 225
    Height = 169
    ColCount = 4
    FixedColor = clSkyBlue
    FixedCols = 0
    TabOrder = 4
  end
end
