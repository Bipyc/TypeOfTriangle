object form1: Tform1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Bsuir application for testers'
  ClientHeight = 242
  ClientWidth = 398
  Color = 8246766
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object labelResult: TLabel
    Left = 21
    Top = 152
    Width = 369
    Height = 75
    AutoSize = False
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1087#1077#1088#1074#1086#1077' '#1095#1080#1089#1083#1086'!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 10485760
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    WordWrap = True
  end
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 382
    Height = 129
    BorderWidth = 1
    Caption = #1057#1090#1086#1088#1086#1085#1099' '#1090#1088#1077#1091#1075#1086#1083#1100#1085#1080#1082#1072
    Color = 11579568
    Ctl3D = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 789605
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsItalic]
    ParentBackground = False
    ParentCtl3D = False
    ParentFont = False
    TabOrder = 0
    VerticalAlignment = taAlignTop
    object labelInput1: TLabel
      Left = 14
      Top = 39
      Width = 55
      Height = 16
      Caption = #1055#1077#1088#1074#1072#1103':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 789605
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsUnderline]
      ParentFont = False
    end
    object labelInput2: TLabel
      Left = 201
      Top = 63
      Width = 52
      Height = 16
      Caption = #1042#1090#1086#1088#1072#1103':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 789605
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsUnderline]
      ParentFont = False
    end
    object labelInput3: TLabel
      Left = 19
      Top = 91
      Width = 50
      Height = 16
      Caption = #1058#1088#1077#1090#1100#1103':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = 789605
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold, fsUnderline]
      ParentFont = False
    end
    object input1: TEdit
      Tag = 1
      Left = 70
      Top = 36
      Width = 113
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 9
      NumbersOnly = True
      ParentFont = False
      TabOrder = 0
      TextHint = #1042#1074#1077#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1077
      OnChange = inputChange
      OnKeyPress = inputKeyPress
    end
    object input2: TEdit
      Tag = 2
      Left = 254
      Top = 60
      Width = 113
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 9
      NumbersOnly = True
      ParentFont = False
      TabOrder = 1
      TextHint = #1042#1074#1077#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1077
      OnChange = inputChange
      OnKeyPress = inputKeyPress
    end
    object input3: TEdit
      Tag = 3
      Left = 70
      Top = 88
      Width = 113
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 9
      NumbersOnly = True
      ParentFont = False
      TabOrder = 2
      TextHint = #1042#1074#1077#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1077
      OnChange = inputChange
      OnKeyPress = inputKeyPress
    end
  end
end
