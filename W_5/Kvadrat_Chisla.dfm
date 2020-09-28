object Form1: TForm1
  Left = 192
  Top = 107
  Width = 870
  Height = 640
  Caption = #1050#1074#1072#1076#1088#1072#1090' '#1095#1080#1089#1083#1072
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
    Top = 32
    Width = 114
    Height = 26
    Caption = #1042#1074#1086#1076' N_Min:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 176
    Top = 32
    Width = 121
    Height = 26
    Caption = #1042#1074#1086#1076' N_Max:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Ykazanie: TLabel
    Left = 32
    Top = 112
    Width = 372
    Height = 26
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086' '#1074' '#1076#1080#1072#1087#1072#1079#1086#1085#1077' '#1086#1090' 10 '#1076#1086' 100'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object Rez: TLabel
    Left = 32
    Top = 240
    Width = 305
    Height = 26
    Caption = #1050#1074#1072#1076#1088#1072#1090' '#1074#1074#1077#1076#1105#1085#1085#1086#1075#1086' '#1095#1080#1089#1083#1072' '#1088#1072#1074#1077#1085':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
  end
  object N_Min: TEdit
    Left = 32
    Top = 64
    Width = 73
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    Text = '10'
    OnChange = N_MinChange
  end
  object N_Max: TEdit
    Left = 176
    Top = 64
    Width = 81
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    Text = '100'
    OnChange = N_MaxChange
  end
  object UpDown1: TUpDown
    Left = 105
    Top = 64
    Width = 15
    Height = 24
    Associate = N_Min
    Min = 0
    Position = 10
    TabOrder = 2
    Wrap = False
  end
  object UpDown2: TUpDown
    Left = 257
    Top = 64
    Width = 15
    Height = 24
    Associate = N_Max
    Min = 0
    Position = 100
    TabOrder = 3
    Wrap = False
  end
  object Vvod_Chisla: TEdit
    Left = 32
    Top = 144
    Width = 81
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    Text = '12'
  end
  object UpDown3: TUpDown
    Left = 113
    Top = 144
    Width = 15
    Height = 24
    Associate = Vvod_Chisla
    Min = 0
    Position = 12
    TabOrder = 5
    Wrap = False
  end
  object BitBtn1: TBitBtn
    Left = 32
    Top = 184
    Width = 97
    Height = 41
    Caption = '&'#1055#1091#1089#1082
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlue
    Font.Height = -27
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
  end
end
