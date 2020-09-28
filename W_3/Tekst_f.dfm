object Form1: TForm1
  Left = 192
  Top = 107
  Width = 870
  Height = 640
  Caption = #1058#1077#1082#1089#1090#1086#1074#1099#1077' '#1092#1072#1081#1083#1099
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 40
    Top = 40
    Width = 121
    Height = 65
    Lines.Strings = (
      #1063#1080#1089#1083#1086' 1112'
      'Privet'
      #1055#1088#1080#1074#1077#1090'!')
    TabOrder = 0
  end
  object RichEdit1: TRichEdit
    Left = 200
    Top = 40
    Width = 121
    Height = 65
    Lines.Strings = (
      #1063#1080#1089#1083#1086' 1112'
      'Privet'
      #1055#1088#1080#1074#1077#1090'!')
    TabOrder = 1
  end
  object Vvod: TBitBtn
    Left = 40
    Top = 136
    Width = 121
    Height = 49
    Caption = '&'#1042#1074#1077#1089#1090#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = VvodClick
  end
  object Soxrani: TBitBtn
    Left = 200
    Top = 136
    Width = 121
    Height = 49
    Caption = '&'#1057#1086#1093#1088#1072#1085#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = SoxraniClick
  end
  object Pysk: TBitBtn
    Left = 40
    Top = 216
    Width = 121
    Height = 49
    Caption = '&'#1055#1091#1089#1082
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = PyskClick
  end
  object Vuxod: TBitBtn
    Left = 200
    Top = 216
    Width = 121
    Height = 49
    Caption = '&'#1042#1099#1093#1086#1076
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clGreen
    Font.Height = -19
    Font.Name = 'Comic Sans MS'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = VuxodClick
  end
end
