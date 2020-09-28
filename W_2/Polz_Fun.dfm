object Form1: TForm1
  Left = 27
  Top = 120
  Width = 870
  Height = 640
  Caption = #1055#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1100#1089#1082#1080#1077' '#1092#1091#1085#1082#1094#1080#1080
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
    Left = 32
    Top = 24
    Width = 102
    Height = 23
    Caption = #1044#1083#1080#1085#1072' n_Mas'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 320
    Top = 24
    Width = 105
    Height = 23
    Caption = #1044#1083#1080#1085#1072' m_Mas'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 24
    Top = 96
    Width = 149
    Height = 23
    Caption = #1048#1089#1093#1086#1076#1085#1099#1077' '#1084#1072#1089#1089#1080#1074#1099
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 320
    Top = 96
    Width = 213
    Height = 23
    Caption = #1052#1072#1089#1089#1080#1074#1099' '#1087#1086#1089#1083#1077' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 24
    Top = 352
    Width = 152
    Height = 23
    Caption = #1057#1091#1084#1084#1072' '#1089#1091#1084#1084' '#1088#1072#1074#1085#1072'='
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Symma_Symm: TLabel
    Left = 176
    Top = 352
    Width = 9
    Height = 23
    Caption = '?'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Dl_n_Mas: TEdit
    Left = 24
    Top = 56
    Width = 73
    Height = 21
    TabOrder = 0
    Text = '5'
    OnChange = Dl_n_MasChange
    OnClick = FormCreate
  end
  object Dl_m_Mas: TEdit
    Left = 320
    Top = 56
    Width = 73
    Height = 21
    TabOrder = 1
    Text = '7'
    OnChange = Dl_m_MasChange
    OnClick = FormCreate
  end
  object UpDown1: TUpDown
    Left = 97
    Top = 56
    Width = 15
    Height = 21
    Associate = Dl_n_Mas
    Min = 0
    Position = 5
    TabOrder = 2
    Wrap = False
  end
  object UpDown2: TUpDown
    Left = 393
    Top = 56
    Width = 15
    Height = 21
    Associate = Dl_m_Mas
    Min = 0
    Position = 7
    TabOrder = 3
    Wrap = False
  end
  object Isx_Mas: TStringGrid
    Left = 24
    Top = 144
    Width = 201
    Height = 169
    ColCount = 3
    FixedColor = clMoneyGreen
    FixedCols = 0
    RowCount = 3
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 4
  end
  object Sort_Mas: TStringGrid
    Left = 320
    Top = 144
    Width = 201
    Height = 169
    ColCount = 3
    FixedColor = clMoneyGreen
    FixedCols = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 5
  end
  object Pysk: TBitBtn
    Left = 232
    Top = 184
    Width = 81
    Height = 49
    Caption = '&'#1055#1091#1089#1082
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clRed
    Font.Height = -16
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = PyskClick
  end
end
