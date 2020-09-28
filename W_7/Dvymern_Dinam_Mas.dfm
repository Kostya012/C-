object Form1: TForm1
  Left = 192
  Top = 107
  Width = 783
  Height = 540
  Caption = #1054#1076#1085#1086#1084#1077#1088#1085#1099#1081' '#1076#1080#1085#1072#1084#1080#1095#1077#1089#1082#1080#1081' '#1084#1072#1089#1089#1080#1074#174
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 112
    Width = 181
    Height = 26
    Caption = #1069#1083#1077#1084#1077#1085#1090#1099' '#1084#1072#1089#1089#1080#1074#1072':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 32
    Top = 24
    Width = 114
    Height = 24
    Caption = #1063#1080#1089#1083#1086' '#1089#1090#1088#1086#1082':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 32
    Top = 64
    Width = 154
    Height = 26
    Caption = #1063#1080#1089#1083#1086' '#1089#1090#1086#1083#1073#1094#1086#1074':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Matr: TStringGrid
    Left = 32
    Top = 152
    Width = 153
    Height = 121
    ColCount = 2
    FixedCols = 0
    RowCount = 4
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 0
    RowHeights = (
      24
      24
      24
      24)
  end
  object Ch_st: TEdit
    Left = 152
    Top = 24
    Width = 89
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '4'
  end
  object Pysk: TBitBtn
    Left = 216
    Top = 200
    Width = 113
    Height = 41
    Caption = '&'#1055#1091#1089#1082
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -21
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = PyskClick
  end
  object UpDown1: TUpDown
    Left = 241
    Top = 24
    Width = 15
    Height = 24
    Associate = Ch_st
    Min = 0
    Position = 4
    TabOrder = 3
    Wrap = False
  end
  object Ch_Cl: TEdit
    Left = 192
    Top = 64
    Width = 89
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    Text = '2'
  end
  object UpDown2: TUpDown
    Left = 281
    Top = 64
    Width = 15
    Height = 24
    Associate = Ch_Cl
    Min = 0
    Position = 2
    TabOrder = 5
    Wrap = False
  end
end
